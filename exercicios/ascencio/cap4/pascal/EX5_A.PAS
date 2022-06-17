PROGRAM EX5;
USES CRT;
VAR num1, num2, num3, num4: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando os trˆs n£meros}
WRITELN('Digite trˆs n£meros em ordem crescente: ');
{Recebe o primeiro n£mero}
READLN(num1);
{Recebe o segundo n£mero}
READLN(num2);
{Recebe o terceiro n£mero}
READLN(num3);
{Mostra mensagem solicitando o quarto n£mero}
WRITELN('Digite um n£mero (fora de ordem): ');
{Recebe o quarto n£mero}
READLN(num4);
{Mostra os n£emros em ordem}
IF num4 > num3
  THEN WRITELN('A ordem decrescente ‚: ', num4:5:2,' - ',num3:5:2,' - ',num2:5:2, ' - ',num1:5:2);
IF (num4 > num2) AND (num4<num3)
  THEN WRITELN('A ordem decrescente ‚: ', num3:5:2,' - ',num4:5:2,' - ',num2:5:2, ' - ',num1:5:2);
IF (num4 > num1) AND (num4 < num2)
  THEN WRITELN('A ordem decrescente ‚: ', num3:5:2,' - ',num2:5:2,' - ',num4:5:2, ' - ',num1:5:2);
IF num4 < num1
   THEN WRITELN('A ordem decrescente ‚: ', num3:5:2,' - ',num2:5:2,' - ',num1:5:2, ' -',num4:5:2);
{P ra o programa a espera de um ENTER}
READLN;
END.
