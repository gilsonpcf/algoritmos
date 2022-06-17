PROGRAM EX2;
USES CRT;
VAR frase: STRING;
    tam,i,qtde,num: INTEGER;
BEGIN
qtde:=0;
WRITELN('Digite uma frase');
READLN(frase);
tam:=LENGTH(frase);
FOR i:=1 TO tam DO
BEGIN
     num:=ORD(frase[i]);
     IF ((num >= 65) AND (num <= 90)) OR ((num >= 97) AND (num <= 122))
     THEN BEGIN
          {‚ uma letra, mai£scula ou min£scula}
          IF (num <> 65) AND (num <> 69)
          AND (num <> 73) AND (num <> 79)
	  AND (num <> 85) AND (num <> 97)
	  AND (num <> 101) AND (num <> 105)
	  AND (num <> 111) AND (num <> 117)
          THEN qtde := qtde + 1;
          END;
END;
WRITELN('Quantidade de consoantes = ',qtde);
READLN;
END.