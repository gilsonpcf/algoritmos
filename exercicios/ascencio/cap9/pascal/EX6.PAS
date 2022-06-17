PROGRAM EX6;
USES CRT;
VAR frase1, frase2, nova_frase, letra: STRING;
    tam1, tam2, i, j : INTEGER;
BEGIN
  CLRSCR;
  WRITELN('Digite a primeira frase ');
  READLN(frase1);
  WRITELN('Digite a segunda frase ');
  READLN(frase2);
  tam1 := LENGTH(frase1);
  tam2 := LENGTH(frase2);
  i := 1;
  j := 1;
  WHILE ((i<=tam1) OR (j<=tam2)) DO
   BEGIN
    IF (i<=tam1)
    THEN BEGIN
         letra := COPY(frase1,i,1);
	 WHILE (letra <> ' ') AND (i<=tam1) DO
		BEGIN
	     	     nova_frase := nova_frase + letra;
                     i := i + 1;
	       	     letra := copy(frase1,i,1);
	     	END;
	        nova_frase:=nova_frase + ' ';
	        i := i + 1;
                END;
    IF (j<=tam2)
      THEN BEGIN
           letra := COPY(frase2,j, 1);
	   WHILE (letra <> ' ') AND (j<=tam2)  DO
	         BEGIN
	              nova_frase := nova_frase + letra;
	              j := j + 1;
	              letra := COPY(frase2, j, 1);
	         END;
	   nova_frase :=nova_frase + ' ';
	   j := j + 1;
	 END;
  END;
  WRITELN(nova_frase);
  READLN;
END.
