PROGRAM EX10;
USES CRT;
VAR gab, resp: ARRAY[1..8] OF CHAR;
        num, pontos, tot_ap, i, j : INTEGER;
        perc_ap : REAL;
BEGIN
  CLRSCR;
  FOR i:=1 TO 8 DO
	BEGIN
      	WRITE('Digite a resposta da questÆo ',i, '  ');
	READLN(gab[i]);
      	END;
  tot_ap := 0;
  FOR  i:=1 TO 10 DO
	BEGIN
        CLRSCR;
      	WRITELN('Digite o n£mero do ',i,'§ aluno ');
	READLN(num);
	pontos := 0;
	FOR j:=1 TO 8 DO
		BEGIN
	    	WRITE('Digite a resposta dada pelo aluno ',num,' … ', j, '¦ questÆo ');
	      	READLN(resp[j]);
	      	IF (resp[j] = gab[j])
		THEN pontos := pontos + 1;
	    	END;
	WRITELN('A nota do aluno ',num,' foi ', pontos);
	IF (pontos >= 6)
	   THEN tot_ap := tot_ap + 1;
        READLN;
     	END;
  perc_ap := tot_ap * 100 / 10;
  WRITELN('O percentual de alunos aprovados  ', perc_ap:5:2);
  READLN;
END.
