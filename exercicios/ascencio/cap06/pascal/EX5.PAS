PROGRAM EX5;
USES CRT;
VAR X: ARRAY[1..10] OF INTEGER;
    Y: ARRAY[1..10] OF INTEGER;
    U: ARRAY[1..20] OF INTEGER;
    D: ARRAY[1..10] OF INTEGER;
    S: ARRAY[1..10] OF INTEGER;
    P: ARRAY[1..10] OF INTEGER;
    IT: ARRAY[1..10] OF INTEGER;
    i, j, k, cont_u, cont_d, cont_i: INTEGER;
BEGIN
  CLRSCR;
  FOR i:=1 TO 10 DO
      BEGIN
      WRITELN('Digite o ', i, '§ elemento do vetor X: ');
      READLN(X[i]);
      WRITELN('Digite o ', i, '§ elemento do vetor Y: ');
      READLN(Y[i]);
      END;
  cont_u := 1;
  cont_d :=1;
  cont_i := 1;
  FOR i:=1 TO 10 DO
      BEGIN
	j := 1;
        WHILE (j < cont_u) AND (X[i] <> U[j]) DO
         BEGIN
           j:= j+1;
         END;
        IF (j >= cont_u) THEN
           BEGIN
             U[cont_u] := X[i];
             cont_u := cont_u + 1;
           END;
      END;
  FOR i:=1 TO 10 DO
      BEGIN
        j := 1;
        WHILE (j < cont_u) AND (Y[i] <> U[j]) DO
        BEGIN
          j := j + 1;
        END;
        IF (j >= cont_u) THEN
           BEGIN
             U[cont_u] := Y[i];
             cont_u := cont_u + 1;
           END;
      END;

    WRITELN('Vetor Uniao ');
    FOR i:=1 TO cont_u - 1 DO
       WRITELN(U[i]);
    READLN;
    FOR i:=1 TO 10 DO
        BEGIN
        j := 1;
        WHILE (j <= 10) AND (X[i] <> Y[j]) DO
         BEGIN
           j:= j+1;
         END;
        IF (j > 10) THEN
           BEGIN
           k :=1;
           WHILE (k < cont_d) AND (X[i] <> D[k]) DO
           BEGIN
             k := k + 1;
           END;
           IF (k >= cont_d) THEN
              BEGIN
              D[cont_d] := X[i];
              cont_d := cont_d + 1;
              END;
           END;
        END;
    WRITELN('Vetor Diferen‡a ');
    FOR i:=1 TO cont_d - 1 DO
        WRITELN(D[i]);
    READLN;
    FOR i:=1 TO 10 DO
        BEGIN
        S[i] := X[i] + Y[i];
        P[i] := X[i] * Y[i];
        END;

    WRITELN('Vetor Soma ');
    FOR i:=1 TO 10 DO
       WRITELN(S[i]);
    READLN;
    WRITELN('Vetor Produto ');
    FOR i:=1 TO 10 DO
        WRITELN(P[i]);
    READLN;
    FOR i:=1 TO 10 DO
        BEGIN
          j := 1;
          WHILE (j <= 10) AND (X[i] <> Y[j]) DO
          BEGIN
            j := j + 1;
          END;
          IF (j <= 10) THEN
             BEGIN
             k := 1;
             WHILE (k < cont_i) AND (IT[k] <> X[i]) DO
             BEGIN
               k := k + 1;
             END;
             IF (k >= cont_i) THEN
                BEGIN
                IT[cont_i] := X[i];
                cont_i := cont_i + 1;
                END;
             END;
        END;

    WRITELN('Vetor Interse‡ao ');
    FOR i:=1 TO cont_i - 1 DO
        WRITELN(IT[i]);
    READLN;
END.