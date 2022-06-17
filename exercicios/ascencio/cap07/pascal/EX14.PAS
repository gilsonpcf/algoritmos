PROGRAM EX14;
USES CRT;
VAR cidade: ARRAY[1..5] OF STRING;
    distancia: ARRAY[1..5,1..5] OF REAL;
    i, j:INTEGER;
    consumo, qtde: REAL;
BEGIN
CLRSCR;
FOR i:=1 TO 5 DO
    BEGIN
    WRITE('Digite o nome da cidade ', i, ' ');
    READLN(cidade[i]);
    END;

FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 5 DO
        BEGIN
        IF i = j
           THEN distancia[i,j] := 0
           ELSE BEGIN
                WRITELN('Digite a distancia entre ', cidade[i], ' e ', cidade[j], ' ');
                READLN(distancia[i,j]);
                END;
        END;
    END;

FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 5 DO
        BEGIN
        IF (distancia[i,j] <= 250) AND (distancia[i,j] > 0)
           THEN WRITELN('Distƒncia: ', distancia[i,j]:7:2, ' entre ', cidade[i], ' e ', cidade[j]);
        END;
    END;

WRITE('Digite o consumo de um ve¡culo (Km por litro)');
READLN(consumo);
FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 5 DO
        BEGIN
        if i <> j
          THEN BEGIN
               qtde := distancia[i,j] / consumo;
               WRITELN('Consumo entre ', cidade[i], ' e ', cidade[j], ' = ', qtde:7:2);
               END;
        END;
    END;

READLN;
END.