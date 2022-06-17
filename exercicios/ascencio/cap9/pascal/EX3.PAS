PROGRAM EX3;
USES CRT;
VAR frase: STRING;
    tam,i,qtde: INTEGER;
BEGIN
qtde:=0;
WRITELN('Digite uma frase');
READLN(frase);
tam:=LENGTH(frase);
FOR i:=1 TO tam DO
BEGIN
     if frase[i] = ' '
     THEN qtde := qtde + 1;
END;
WRITELN('Quantidade de palavras = ',qtde+1);
READLN;
END.