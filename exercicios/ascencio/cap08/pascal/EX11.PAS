PROGRAM EX11;
USES CRT;
TYPE vetor1 = ARRAY[1..5] OF CHAR;
     vetor2 = ARRAY[1..5] OF INTEGER;
VAR sexo, olhos, cabelos: vetor1;
    idade: vetor2;
    x, i, q: INTEGER;
    m: REAL;

PROCEDURE leitura(var sexo, olhos, cabelos: vetor1; var idade: vetor2);
VAR x:INTEGER;
BEGIN
FOR x:=1 TO 5 DO
    BEGIN
    WRITELN('Dados da ', x, '¦ pessoa');
    REPEAT
      WRITE('Digite o sexo (M ou F) ');
      READLN(sexo[x]);
      sexo[x] := upcase(sexo[x]);
    UNTIL (sexo[x] = 'F') OR (sexo[x] = 'M');
    REPEAT
      WRITE('Digite a cor dos olhos (C-castanhos ou A-azuis) ');
      READLN(olhos[x]);
      olhos[x] := upcase(olhos[x]);
    UNTIL (olhos[x] = 'C') OR (olhos[x] = 'A');
    REPEAT
      WRITE('Digite a cor dos cabelos (C-castanhos, L-louros ou P-pretos) ');
      READLN(cabelos[x]);
      cabelos[x] := upcase(cabelos[x]);
    UNTIL (cabelos[x] = 'C') OR (cabelos[x] = 'L') OR (cabelos[x] = 'P');
    WRITE('Digite a idade ');
    READLN(idade[x]);
    END;
END;

FUNCTION media_idade (olhos, cabelos: vetor1; idade: vetor2): REAL;
VAR i, cont: INTEGER;
    soma, media: REAL;
BEGIN
soma:= 0;
cont := 0;
FOR i:=1 TO 5 DO
   BEGIN
   IF (olhos[i] = 'C') AND (cabelos[i] = 'P')
      THEN BEGIN
           soma := soma + idade[i];
           cont := cont + 1;
           END;
   END;
   IF cont = 0 THEN media := 0
               ELSE media := soma / cont;
media_idade := media;
END;

FUNCTION maior_idade (idade: vetor2):INTEGER;
VAR i, maior: INTEGER;
BEGIN
FOR i:=1 TO 5 DO
    BEGIN
    IF i = 1
       THEN maior := idade[i]
       ELSE BEGIN
            IF idade[i] > maior THEN maior := idade[i];
            END;
    END;
maior_idade:= maior;
END;

FUNCTION quantidade_individuos(sexo, olhos, cabelos: vetor1; idade: vetor2):INTEGER;
VAR i, qtd: INTEGER;
BEGIN
qtd := 0;
FOR i:=1 TO 5 DO
    BEGIN
    IF (sexo[i] = 'F') AND (idade[i] >= 18) AND (idade[i] <=35)
        AND (olhos[i] = 'A') AND (cabelos[i] = 'L')
        THEN qtd := qtd + 1;
    END;
quantidade_individuos := qtd;
END;

BEGIN
CLRSCR;
leitura(sexo, olhos, cabelos, idade);
m := media_idade(olhos, cabelos, idade);
WRITELN;
WRITELN('Media de idade das pessoas com olhos castanhos e cabelos pretos = ', m:5:2);
i := maior_idade(idade);
WRITELN('Maior idade entre os habitantes = ', i);
q := quantidade_individuos(sexo, olhos, cabelos, idade);
WRITELN('Quantidade de mulheres louras com olhos azuis e idade entre 18 e 35 = ', q);
READLN;
END.