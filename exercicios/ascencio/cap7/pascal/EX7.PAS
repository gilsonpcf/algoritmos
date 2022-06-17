PROGRAM EX7;
USES CRT;
VAR mat: ARRAY[1..5, 1..7] OF INTEGER;
    i, j, k, achou, maior, menor, num, linha1, linha2, coluna1, coluna2, cont: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digitando os n£meros da matriz 5 X 7 ');
FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 7 DO
        BEGIN
        WRITE('Digite o elemento da linha ', i, ' e da coluna ', j, ' ');
        READLN(mat[i,j]);
        END;
    END;

cont := 0;
FOR i:=1 TO 5 DO
    BEGIN
    menor := mat[i,1];
    linha1 := i;
    coluna1 := 1;
    FOR j:=1 TO 7 DO
        BEGIN
        IF mat[i,j] < menor
           THEN BEGIN
                menor := mat[i,j];
                linha1 := i;
                coluna1 := j;
                END;
        END;

   maior := mat[1,coluna1];
   linha2 := 1;
   FOR j:=1  TO 5 DO
       BEGIN
       IF mat[j,coluna1] > maior
          THEN BEGIN
               maior := mat[j,coluna1];
               linha2 := j;
               END;
       END;

   IF linha1 = linha2
      THEN BEGIN
           WRITELN('Ponto de sela = ', maior, ' na posi‡ao ', linha1, '-', coluna1);
           cont := cont+1;
           END;
   END;

IF cont = 0
   THEN WRITELN('NÆo existe ponto de sela nesta matriz ');

READLN;
END.