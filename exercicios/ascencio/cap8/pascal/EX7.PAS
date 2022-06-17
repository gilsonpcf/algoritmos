PROGRAM EX7;
USES CRT;
VAR nota1, nota2, nota3, m: REAL;
    letra: CHAR;

FUNCTION calcula_media(n1, n2, n3:REAL; l: CHAR):REAL;
VAR media: REAL;
BEGIN
IF l = 'A'
  THEN media := (n1+n2+n3)/3
  ELSE media := (n1*5+n2*3+n3*2)/(5+3+2);
calcula_media := media;
END;
BEGIN
CLRSCR;
WRITE('Digite a 1¦ nota: ');
READLN(nota1);
WRITE('Digite a 2¦ nota: ');
READLN(nota2);
WRITE('Digite a 3¦ nota: ');
READLN(nota3);
REPEAT
WRITE('Digite uma letra (A-M‚dia aritm‚tica, P-M‚dia ponderada) ');
READLN(letra);
letra := upcase(letra);
UNTIL (letra = 'A') OR (letra = 'P');
m := calcula_media(nota1, nota2, nota3, letra);
IF letra = 'A'
   THEN WRITELN('M‚dia aritm‚tica ‚ ', m:5:2)
   ELSE WRITELN('M‚dia ponderada ‚ ', m:5:2);
READLN;
END.