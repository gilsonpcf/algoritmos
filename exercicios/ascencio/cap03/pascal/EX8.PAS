PROGRAM EX8;
USES CRT;
VAR dep, taxa, rend, total: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do valor do dep¢sito}
WRITELN('Digite o valor do dep¢sito');
{Recebe o dep¢sito}
READLN(dep);
{Mostra mensagem antes da leitura da taxa de juros}
WRITELN('Digite a taxa de juros');
{Recebe a taxa de juros}
READLN(taxa);
{Calcula o rendimento}
rend := dep * taxa/100;
{Calcula o total depois do rendimento}
total := dep + rend;
{Mostra o rendimento formatado com duas casas decimais}
WRITELN('Rendimento = ',rend:5:2);
{Mostra o total depois do rendimento formatado com duas casas decimais}
WRITELN('Total = ',total:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
