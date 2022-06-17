PROGRAM EX25;
USES CRT;
VAR frase:STRING;
    i,tam,qtde: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase');
READLN(frase);
tam:=LENGTH(frase);
FOR i:= 1 to LENGTH(frase) do
BEGIN
    frase[i]:=UPCASE(frase[i]);
    IF (frase[i] = ' ') AND (frase[i-1] = 'R') AND (i<tam)
    THEN qtde:=qtde+1
    ELSE IF (frase[i] = 'R') AND (i = tam)
         THEN qtde:=qtde+1;
END;
WRITELN('Quantidade de verbos terminados em R = ',qtde);
READLN;
END.