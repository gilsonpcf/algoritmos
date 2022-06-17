PROGRAM EX2;
USES CRT;
VAR notas: ARRAY[1..10, 1..3] OF REAL;
    menor: REAL;
    q1, q2, q3, prova_menor, i, j: INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 10 DO
    BEGIN
    FOR j:=1 TO 3 DO
        BEGIN
        WRITE('Digite a ', j, '¦ nota do aluno ', i, ' ');
        READLN(notas[i,j]);
        END;
    END;

q1 := 0;
q2 := 0;
q3 := 0;
FOR i:=1 TO 10 DO
    BEGIN
    WRITELN('Aluno n£mero ', i);
    menor := notas[i][1];
    prova_menor := 1;
    FOR j:=1 TO 3 DO
        BEGIN
        IF notas[i][j] < menor THEN
           BEGIN
           menor := notas[i][j];
           prova_menor := j;
           END;
        END;
    WRITELN('A menor nota do aluno ', i, ' foi na ', prova_menor, '§ prova ');
    IF prova_menor = 1 THEN q1 := q1 + 1;
    IF prova_menor = 2 THEN q2 := q2 + 1;
    IF prova_menor = 3 THEN q3 := q3 + 1;
    END;

WRITELN('Quantidade de alunos com menor nota na prova 1 = ', q1);
WRITELN('Quantidade de alunos com menor nota na prova 2 = ', q2);
WRITELN('Quantidade de alunos com menor nota na prova 3 = ', q3);
READLN;
END.