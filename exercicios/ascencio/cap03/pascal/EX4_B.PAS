PROGRAM EX4;
USES CRT;
VAR sal, aumento, novosal: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do sal rio}
WRITELN('Digite o sal rio');
{Recebe o sal rio}
READLN(sal);
{Calcula o aumento}
aumento := sal * 25/100;
{Calcula o novo sal rio}
novosal := sal + aumento;
{Mostra o novo sal rio formatado com duas casas decimais}
WRITELN('Novo sal rio = ', novosal:5:2);
{P ra o programa a espera de um enter}
READLN;							          			
END.
