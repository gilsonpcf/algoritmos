PROGRAM EX1;
USES CRT;
TYPE REGISTRO = RECORD
		num : INTEGER;
		nome : STRING[35];
		saldo : REAL;
	END;
VAR conta: ARRAY[1..15] OF REGISTRO;
        i, op, posi, achou, num_conta : INTEGER;
        saldo_cliente, menor_saldo : REAL;
        nome_cliente :STRING[35];
BEGIN
FOR i := 1 TO 15 DO
BEGIN
conta[i].num := 0;
conta[i].nome:='';
conta[i].saldo := 0;
END;
REPEAT
	CLRSCR;
	WRITELN('Menu de Opc‰es');
	WRITELN('1 - Cadastrar Contas');
	WRITELN('2 - Visualizar todas as contas de um determinado cliente');
	WRITELN('3 - Excluir conta de menor saldo');
	WRITELN('4 - Sair');
	WRITELN('Digite sua opá∆o');
	READLN(op);
	IF (op < 1) OR (op > 4)
	THEN WRITELN('Opc∆o Inv†lida');
	IF op = 1
	THEN BEGIN
		achou := 0;
		WRITE('Digite o n£mero da conta a ser inclu°da ');
		READLN(num_conta);
		FOR i := 1 TO 15 DO
		BEGIN
		IF num_conta = conta[i].num
		THEN achou := 1;
		END;
		IF achou = 1
		THEN WRITELN('J† existe conta cadastrada com esse n£mero')
		ELSE BEGIN
			    posi := 0;
			    i := 1;
			    WHILE i <= 15 DO
			    BEGIN
				IF conta[i].num = 0
				THEN BEGIN
                                     posi := i;
				     i := 16;
	 			     END;
				i := i + 1;
				END;
			IF posi = 0
			THEN WRITELN('Imposs°vel cadastrar novas contas')
			ELSE BEGIN
				WRITE('Digite o nome do cliente ');
 			   	READLN(nome_cliente);
				WRITE('Digite o saldo do cliente ');
				READLN(saldo_cliente);
				conta[posi].num := num_conta;
				conta[posi].nome := nome_cliente;
				conta[posi].saldo := saldo_cliente;
			 	WRITELN('Conta cadastrada com sucesso');
                                END;
		      END;
                  READLN;
		  END;
	IF op = 2
	THEN BEGIN
		WRITE('Digite o nome do cliente a ser consultado ');
		READLN(nome_cliente);
		achou := 0;
		FOR i := 1 TO 15 DO
			BEGIN
			IF conta[i].nome = nome_cliente
			THEN BEGIN
                                WRITELN('Nß CONTA  SALDO');
                        	WRITELN(conta[i].num, '          ',conta[i].saldo:5:2);
				achou := 1;
				END;
			END;
		IF achou = 0
		THEN WRITELN('N∆o existe conta cadastrada para este cliente');
		READLN;
		END;
	IF op = 3
	THEN BEGIN
		i := 1;
		achou := 0;
		WHILE i <= 15 DO
			BEGIN
			IF conta[i].num <> 0
			THEN BEGIN
				menor_saldo := conta[i].saldo;
				achou := 1;
				posi := i;
				i := 16;
				END;
			i := i + 1;
		   	END;
		IF achou = 0
		THEN WRITELN('Nenhuma conta foi cadastrada')
		ELSE BEGIN
			FOR i := 1 TO 15 DO
				BEGIN
				IF (conta[i].saldo< menor_saldo) AND (conta[i].num <> 0)
				THEN posi := i;
				END;
                        WRITELN('A conta de n£mero ', conta[posi].num,' foi exclu°da com sucesso');
			conta[posi].num := 0;
			conta[posi].nome := '';
			conta[posi].saldo := 0;
			END;
		READLN;
		END;
UNTIL op = 4;
END.
