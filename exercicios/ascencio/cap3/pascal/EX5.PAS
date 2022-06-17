PROGRAM EX5;
USES CRT;
VAR sal, perc, aumento, novosal: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do sal rio}
WRITELN('Digite o sal rio do funcion rio');
{Recebe o sal rio}
READLN(sal);
{Mostra mensagem antes da leitura do percentual de aumento}
WRITELN('Digite o percentual de aumento');
{Recebe o percentual de aumento}
READLN(perc);
{Calcula o valor do aumento}
aumento := sal * perc/100;
{Mostra o valor do aumento formatado com duas casas decimais}
WRITELN('Aumento = ',aumento:5:2);
{Calcula o novo sal rio}
novosal := sal + aumento;
{Mostra o valor do novo sal rio formatado com duas casas decimais}
WRITELN('Novo sal rio = ',novosal:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
