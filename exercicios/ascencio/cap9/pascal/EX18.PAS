PROGRAM EX18;
USES CRT;
VAR frase,nova,letra: STRING;
    j,tam,i,k,posi: INTEGER;
BEGIN
clrscr;
nova:='';
WRITELN('Digite uma frase');
READLN(frase);
tam:=LENGTH(frase);
posi:=1;
j:=1;
FOR i:=1 TO tam DO
BEGIN
     letra:=COPY(frase,i,1);
     if (letra = ' ') OR (i = tam)
     THEN BEGIN
          FOR k:=posi TO i do
          BEGIN
            letra:=COPY(frase,k,1);
            nova:=nova+letra;
            j:=j+1;
          END;
          IF i = tam
          THEN nova:=nova+' ';
          FOR k:=posi TO i do
          BEGIN
            letra:=COPY(frase,k,1);
            nova:=nova+letra;
            j:=j+1;
          END;
          posi:=i+1;
          END;
END;
WRITELN('Nova frase = ',nova);
READLN;
END.