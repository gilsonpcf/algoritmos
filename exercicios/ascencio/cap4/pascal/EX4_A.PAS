PROGRAM EX4;
USES CRT;
VAR num1, num2, num3: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o primeiro n£mero}
WRITE('Digite o primeiro n£mero: ');
{Recebe o primeiro n£mero}
READLN(num1);
{Mostra mensagem solicitando o segundo n£mero}
WRITE('Digite o segundo n£mero: ');
{Recebe o segundo n£mero}
READLN(num2);
{Mostra mensagem solicitando o terceiro n£mero}
WRITE('Digite o terceiro n£mero: ');
{recebe o terceiro n£mero}
READLN(num3);
{Mostra os n£meros em ordem crescente}
IF (num1 < num2) AND (num1 < num3)
THEN BEGIN
	IF num2 < num3
	THEN WRITELN('A ordem crescente ‚: ',num1:5:2,' - ',num2:5:2,' - ',num3:5:2);
        IF num3 < num2
	THEN WRITELN('A ordem crescente ‚: ',num1:5:2,' - ',num3:5:2,' - ',num2:5:2);
     END;
IF (num2 < num1) AND (num2 < num3)
THEN BEGIN
        IF num1 < num3
      	THEN WRITELN('A ordem crescente ‚: ',num2:5:2,' - ',num1:5:2,' - ',num3:5:2);
        IF num3 < num1
   	THEN WRITELN('A ordem crescente ‚: ',num2:5:2,' - ',num3:5:2,' - ',num1:5:2);
     END;
IF (num3 < num1) AND (num3 < num2)
THEN BEGIN
	IF num1 < num2
      	THEN WRITELN('A ordem crescente ‚: ',num3:5:2,' - ',num1:5:2,' - ',num2:5:2);
        IF num2 < num1
	THEN WRITELN('A ordem crescente ‚: ',num3:5:2,' - ',num2:5:2,' - ',num1:5:2)
     END;
{P ra o programa a espera de um ENTER}
READLN;
END.
