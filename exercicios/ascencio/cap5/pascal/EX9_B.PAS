PROGRAM EX9;
USES CRT;
VAR cont, ta, te, tr: INTEGER;
    n1, n2, media, media_classe, total_classe: REAL;
BEGIN
CLRSCR;
total_classe := 0;
cont := 1;
WHILE cont <= 6 DO
	BEGIN
	WRITELN('Digite as duas notas do ',cont,'§ aluno');
	READLN(n1, n2);
	media := (n1 + n2) /2;
	WRITELN('M‚dia do ',cont,'§ aluno = ',media:5:2);
	IF media <= 3
	THEN BEGIN
     	       	tr := tr + 1;
		WRITELN('Reprovado');
	   	END;
	IF (media > 3) AND (media < 7)
	THEN BEGIN
               	te := te + 1;
	   	WRITELN('Exame');
	   	END;
	IF (media >= 7)
	THEN BEGIN
               	ta := ta + 1;
	   	WRITELN('Aprovado');
	   	END;
	total_classe := total_classe + media;
	cont := cont + 1;
        WRITELN;
	END;
WRITELN('Total de reprovados = ',tr);
WRITELN('Total de exames = ',te);
WRITELN('Total de aprovados = ',ta);
media_classe := total_classe/6;
WRITELN('M‚dia da classe = ',media_classe:5:2);
READLN;
END.
