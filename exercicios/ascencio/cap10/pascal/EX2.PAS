PROGRAM EX2;
USES CRT;
TYPE REGISTRO1 = RECORD
cod : INTEGER;
desc : STRING[20];
	END;
TYPE REGISTRO2 = RECORD
	num, cod_serv, cod_cliente : INTEGER;
valor : REAL;
END;
VAR tipos: ARRAY[1..4] OF REGISTRO1;
         serv: ARRAY[1..30,1..3] OF REGISTRO2;
         i, j, op, codigo_serv, achou,dia, codigo_cliente, num_serv, valida, k : INTEGER;
	 valor_inicial, valor_final, valor_serv : REAL;
	 desc_serv : STRING[20];
BEGIN
FOR i := 1 TO 4 DO
BEGIN
tipos[i].cod := 0;
tipos[i].desc := '';
END;
FOR i := 1 TO 30 DO
BEGIN
	FOR j := 1 TO 3 DO
	BEGIN
	serv[i, j].num := 0;
	serv[i, j].valor := 0;
	serv[i, j].cod_serv := 0;
	serv[i, j].cod_cliente := 0;
	END;
END;
REPEAT
CLRSCR;
WRITELN('Menu de Op‡äes');
WRITELN('1 - Cadastrar tipos de servi‡os');
WRITELN('2 - Cadastrar servi‡os prestados');
WRITELN('3 - Mostrar os servi‡os prestados em um determinado dia');
WRITELN('4 - Mostrar os servi‡os prestados dentro de um intervalo de valor');
WRITELN('5 - Mostrar um relat¢rio geral, separado por dia');
WRITELN('6 - Sair');
WRITELN('Digite sua op‡Æo');
READLN(op);
IF (op < 1) OR (op > 6)
THEN WRITELN('Op‡Æo Inv lida');
IF op = 1
THEN BEGIN
	WRITE('Digite o c¢digo do servi‡o a ser cadastrado ');
	READLN( codigo_serv);
	achou := 0;
	FOR i := 1 TO 4 DO
	BEGIN
	IF tipos[i].cod = 0
	THEN achou := i;
	END;
	IF achou = 0
	THEN WRITELN('Cadastro de tipos de servi‡os lotado')
	ELSE BEGIN
		FOR i := 1 TO 4 DO
		BEGIN
		IF tipos[i].cod = codigo_serv
		THEN achou := 0;
		END;
		IF achou = 0
		THEN WRITELN('J  existe tipo de servi‡o cadastrado com esse c¢digo')
		ELSE BEGIN
			WRITE('Digite a descri‡Æo do tipo de servi‡o a ser cadastrado ');
			READLN( desc_serv);
			tipos[achou].cod := codigo_serv;
			tipos[achou].desc := desc_serv;
			WRITELN('Tipo de servi‡o cadastrado com sucesso');
            	     END;
		END;
	READLN;
	END;
IF op = 2
THEN BEGIN
	WRITE('Digite o dia em que deseja cadastrar o servi‡o prestado ');
	READLN( dia);
	achou := 0;
	FOR j := 1 TO 3 DO
	BEGIN
	IF serv[dia, j].num = 0
	THEN  achou := j;
	END;
	IF achou = 0
	THEN WRITELN('Todos os servi‡os prestados neste dia j  foram cadastrados')
	ELSE BEGIN
		 WRITE('Digite o c¢digo do servi‡o a ser cadastrado ');
		 READLN( codigo_serv);
		 valida := 0;
		 FOR i := 1 TO 4 DO
		 BEGIN
		 IF tipos[i].cod = codigo_serv
		 THEN  valida := 1;
		 END;
		 IF valida = 0
		 THEN WRITELN('C¢digo de servi‡o inv lido')
		 ELSE BEGIN
			   WRITE('Digite o n£mero do servi‡o ');
			   READLN( num_serv);
			   WRITE('Digite o valor do servi‡o ');
			   READLN( valor_serv);
			   WRITE('Digite o c¢digo do cliente ');
			   READLN( codigo_cliente);
			   serv[dia, achou].num := num_serv;
			   serv[dia, achou].valor := valor_serv;
			   serv[dia, achou].cod_serv := codigo_serv;
			   serv[dia, achou].cod_cliente := codigo_cliente;
			   WRITELN('Servi‡o prestado cadastrado com sucesso');
			 END;
		END;
	READLN;
	END;
IF op = 3
THEN BEGIN
	WRITE('Digite o dia em que deseja consultar os servi‡os prestados ');
	READLN( dia);
	achou := 0;
	FOR j := 1 TO 3 DO
	BEGIN
	IF serv[dia, j].num <> 0
	THEN achou := 1;
	END;
	IF achou = 0
	THEN WRITELN('Nenhum servi‡o foi prestado neste dia')
	ELSE BEGIN
		 WRITELN('Servi‡os prestados no dia ', dia);
		 FOR j := 1 TO 3 DO
			BEGIN
			IF serv[dia, j].num <> 0
			THEN BEGIN
                                writeln;
				WRITE('N§ do servi‡o: ',serv[dia, j].num, '    Valor: ',serv[dia, j].valor:5:2);
				WRITELN('  C¢digo do servi‡o: ', serv[dia, j].cod_serv);
				FOR i := 1 TO 4 DO
				BEGIN
				IF tipos[i].cod = serv[dia, j].cod_serv
				THEN WRITE('Descri‡Æo: ',tipos[i].desc);
				END;
				WRITELN('  Cliente: ',serv[dia, j].cod_cliente);
				END;
			END;
			END;
	READLN;
	END;
IF op = 4
THEN BEGIN
	WRITE('Digite o valor inicial ');
	READLN( valor_inicial);
	WRITE('Digite o valor final ');
	READLN( valor_final);
	achou := 0;
	FOR i := 1 TO 30 DO
	BEGIN
	FOR j := 1 TO 3 DO
	BEGIN
	IF (serv[i, j].valor >= valor_inicial) AND (serv[i, j].valor <= valor_final)
	THEN  BEGIN
		  achou := 1;
                  writeln;
		  WRITE('N§ do servi‡o: ',serv[i, j].num, '    Valor: ',serv[i, j].valor:5:2);
		  WRITELN('  C¢digo do servi‡o: ', serv[i, j].cod_serv);
		  FOR k := 1 TO 4 DO
			BEGIN
			IF tipos[k].cod = serv[i, j].cod_serv
			THEN WRITE('Descri‡Æo: ',tipos[k].desc);
			END;
		  WRITELN('   C¢digo cliente: ',serv[i, j].cod_cliente,'   Dia: ',i);
		END;
	END;
	END;
	IF achou = 0
	THEN WRITELN('Nenhum servi‡o prestado est  entre os valores citados');
	READLN;
	END;
IF op = 5
THEN  BEGIN
	achou := 0;
	FOR i := 1 TO 30 DO
	BEGIN
	FOR j := 1 TO 3 DO
		BEGIN
		IF (serv[i, j].num <> 0)
		THEN BEGIN
			  achou := 1;
                          WRITELN('Dia: ',i);
                          WRITE('N§ do servi‡o: ',serv[i, j].num, '    Valor: ',serv[i, j].valor:5:2);
		          WRITELN('  C¢digo do servi‡o: ', serv[i, j].cod_serv);
			  FOR k := 1 TO 4 DO
				BEGIN
				IF tipos[k].cod = serv[i, j].cod_serv
				THEN WRITE('Descri‡Æo:   ',tipos[k].desc);
				END;
			  WRITELN('  Cliente:  ',serv[i, j].cod_cliente);
			END;
		END;
	END;
	IF achou = 0
	THEN WRITELN('Nenhum servi‡o prestado foi cadastrado');
	READLN;
	END;
UNTIL op = 6;
END.
