PROGRAM EX4;
USES CRT;
VAR sal, novosal: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do sal rio}
WRITELN('Digite o sal rio do funcion rio');
{Recebe o sal rio}
READLN(sal);
{Calcula o novo sal rio}
novosal := sal + sal * 25/100;
{Mostra o novo sal rio calculado com duas casas decimais}
WRITELN('Novo sal rio = ',novosal:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
