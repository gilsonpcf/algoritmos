PROGRAM EX3;
USES CRT;
VAR nota1, nota2, nota3, peso1, peso2, peso3: REAL;
    soma1, soma2, soma3, total, media: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura das trˆs notas}
WRITELN('Digite as trˆs notas');
{Recebe as trˆs notas}
READLN(nota1, nota2, nota3);
{Mostra mensagem antes da leitura dos trˆs pesos}
WRITELN('Digite os trˆs pesos');
{Recebe os trˆs pesos}
READLN(peso1, peso2, peso3);
{Calcula a m‚dia ponderada}
soma1:=nota1 * peso1;
soma2:=nota2 * peso2;
soma3:=nota3 * peso3;
total:=peso1 + peso2 + peso3;
media := (soma1 + soma2 + soma3)/total;
{Mostra a m‚dia ponderada formatada com duas casas decimais}
WRITELN('M‚dia Ponderada = ',media:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
