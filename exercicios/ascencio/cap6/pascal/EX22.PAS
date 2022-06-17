PROGRAM EX22;
USES CRT;
VAR conta, saldo: ARRAY[1..10] OF REAL;
     i, j, op: INTEGER;
     codigo, valor, soma: REAL;
     achou: BOOLEAN;
BEGIN
CLRSCR;
FOR i := 1 TO 10 DO
	BEGIN
	achou := false;
        WRITE('Digite o n£mero da conta do ',i,'ß cliente ');
        REPEAT
            READLN(conta[i]);
	    achou := false;
	    FOR j := 1 TO (i-1) DO
		BEGIN
		IF conta[i] = conta[j] THEN
                   BEGIN
                     WRITE('Codigo repetido. Digite novamente ');
                     achou := true;
                   END;
                END;
	UNTIL achou = false;
	WRITE('Digite o saldo da conta do ',i,'ß cliente ');
        READLN(saldo[i]);
	END;
REPEAT
WRITELN('1 - Efetuar dep¢sito');
WRITELN('2 - Efetuar saque');
WRITELN('3 - Consultar o ativo banc†rio');
WRITELN('4 - Finalizar o programa');
WRITELN('Digite sua opá∆o');
READLN( op);
achou := false;
IF op = 1
THEN BEGIN
	WRITE('Digite o conta que sofrer† o dep¢sito ');
	READLN(codigo);
	WRITE('Digite o valor a ser depositado ');
        READLN(valor);
	FOR i := 1 TO 10 DO
	BEGIN
		IF codigo = conta[i]
		THEN BEGIN
                    	saldo[i] := saldo[i] + valor;
 	           	achou := true;
		 	WRITELN('Dep¢sito efetuado');
	             END;
		END;
	IF achou = false
	THEN WRITELN('Conta n∆o cadastrada');
	END;
IF op = 2
THEN BEGIN
	WRITELN('Digite o conta que sofrer† o saque ');
	READLN(codigo);
	WRITELN('Digite o valor a ser sacado ');
        READLN(valor);
	FOR i := 1 TO 10 DO
		BEGIN
		IF codigo = conta[i]
		THEN BEGIN
			IF saldo[i] < valor
			THEN WRITELN('Saldo insuficiente')
			ELSE BEGIN
                                saldo[i] := saldo[i] - valor;
				WRITELN('Saque efetuado');
			     END;
                        achou := true;
			END;
		END;
		IF achou = false
		THEN WRITELN('Conta n∆o cadastrada');
	END;
IF op = 3
THEN BEGIN
     soma := 0;
     FOR i := 1 TO 10 DO
	BEGIN
	soma := soma + saldo[i];
	END;
	WRITELN('Saldo ativo = ',soma:5:2);
     END;
IF (op < 1) OR (op > 4)
THEN WRITELN('Opá∆o inv†lida');
UNTIL op = 4;
END.
