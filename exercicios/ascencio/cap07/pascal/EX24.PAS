PROGRAM EX24;
USES CRT;
VAR medias: ARRAY[1..3, 1..8, 1..4] OF REAL;
    media_aluno, media_turma: REAL;
    i, j, k: INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 3 DO
    BEGIN
    WRITELN('Notas da turma ', i);
    FOR j:=1 TO 8 DO
        BEGIN
        FOR k:=1 TO 4 DO
            BEGIN
            WRITE('Media do aluno ', j, ' na disciplina ', k, ': ');
            READLN(medias[i,j,k]);
            END;
        END;
    END;

FOR i:=1 TO 3 DO
    BEGIN
    FOR j:=1 TO 8 DO
        BEGIN
        media_aluno := 0;
        FOR k:=1 TO 4 DO
            BEGIN
  	    media_aluno := media_aluno + medias[i][j][k];
            END;
        media_aluno := media_aluno / 4;
	WRITELN('A media do aluno ', j, ' na turma ', i, ' = ', media_aluno:5:2);
        END;
    END;

FOR i:=1 TO 3 DO
    BEGIN
    media_turma := 0;
    FOR j:=1 TO 8 DO
        BEGIN
	FOR k:=1 TO 4 DO
           BEGIN
	   media_turma := media_turma + medias[i][j][k];
           END;
        END;
    media_turma := media_turma / (8 * 4) ;
    WRITELN('A media da turma ', i, ' = ', media_turma:5:2);
END;
READLN;
END.