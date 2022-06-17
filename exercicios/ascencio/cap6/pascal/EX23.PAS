PROGRAM EX23;
USES CRT;
VAR corredor, janela: ARRAY[1..24] OF INTEGER;
        achou: BOOLEAN;
        posicao: CHAR;
        i, num, op: INTEGER;
BEGIN

FOR i := 1 TO 24 DO
	BEGIN
	corredor[i] := 0;
	janela[i] := 0;
	END;

REPEAT
CLRSCR;
WRITELN('1- Vender passagem');
WRITELN('2- Mostrar mapa de ocupa‡ao do onibus');
WRITELN('3- Encerrar ');
READLN(op);
IF op = 1
   THEN BEGIN
        achou := false;
        FOR i:=1 TO 24 DO
            BEGIN
            IF (corredor[i] = 0) OR (janela[i] = 0) THEN achou := true;
            END;
        IF achou = false
           THEN WRITELN ('Onibus lotado')
           ELSE BEGIN
	        REPEAT
                WRITE('Digite J se deseja poltrona na janela ou C se deseja poltrona no corredor ');
                READLN(posicao);
                posicao := upcase(posicao);
                UNTIL (posicao = 'J') OR (posicao = 'C');
	        REPEAT
                WRITE('Digite o numero da poltrona desejada (entre 1 e 24) ');
                READLN(num);
                UNTIL (num >= 1) AND (num <= 24);
	        IF (posicao = 'J') AND (janela[num] = 0)
                   THEN BEGIN
                        WRITELN('Venda efetivada');
		        janela[num] := 1;
			END
                   ELSE BEGIN
		        IF (posicao = 'C') AND (corredor[num] = 0)
                           THEN BEGIN
                                WRITELN('Venda efetivada');
                                corredor[num] := 1;
                                END
                           ELSE WRITELN('Poltrona ocupada');
                        END;
		END;
        READLN;
        END;
IF op = 2
   THEN BEGIN
        WRITELN('  JANELA              CORREDOR');
        FOR i:=1 TO 24 DO
            BEGIN
            IF i < 10 THEN WRITE(' ');
            IF janela[i] = 0
               THEN WRITE(i, '- Livre            ')
               ELSE WRITE(i, '- Ocupada          ');
	    IF i < 10 THEN WRITE(' ');
            IF corredor[i] = 0
               THEN WRITELN(i, '- Livre')
               ELSE WRITELN(i, '- Ocupada');
	    END;
        READLN;
	END;
UNTIL op = 3;
END.