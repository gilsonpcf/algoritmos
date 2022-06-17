PROGRAM EX4;
USES CRT;
TYPE REGISTRO = RECORD
	num_avi : INTEGER;
        nome : STRING;
	END;
VAR avi, lug: ARRAY[1..4] OF INTEGER;
    reservas: ARRAY[1..60] OF REGISTRO;
    i, pos_livre, op, numero, achou, posi : INTEGER;
    nome: string;
BEGIN
FOR i := 1 TO 4 DO
BEGIN
avi[i] := 0;
lug[i] := 0;
END;
FOR i := 1 TO 60 DO
BEGIN
reservas[i].num_avi := 0;
reservas[i].nome := '';
END;
pos_livre := 1;
REPEAT
        CLRSCR;
	WRITELN('Menu de Opá‰es');
	WRITELN('1 - Cadastrar os n£meros dos avi‰es');
	WRITELN('2 - Cadastrar os lugares dispon°veis em cada avi∆o');
	WRITELN('3 - Reservar passagem');
	WRITELN('4 - Consultar pelo n£mero do avi∆o');
	WRITELN('5 - Consultar pelo nome do passageiro');
	WRITELN('6 - Finalizar');
	WRITELN('Digite a opá∆o desejada');
	READLN(op);
	IF op = 1
	THEN BEGIN
		 FOR i := 1 TO 4 DO
		 BEGIN
		 WRITE('Digite o n£mero do ', i, 'ß avi∆o ');
		 READLN(avi[i]);
		 END;
		READLN;
		END;
	IF op = 2
	THEN BEGIN
		 FOR i := 1 TO 4 DO
		 BEGIN
		 WRITE('Digite o n£mero de lugares dispon°veis no ', i, 'ß avi∆o ');
		 READLN(lug[i]);
		 END;
		READLN;
		END;
	IF op = 3
	THEN BEGIN
		WRITE('Digite o n£mero do avi∆o no qual deseja efetuar a reserva ');
		READLN(numero);
		IF pos_livre > 60
		THEN WRITELN('Reservas em todos os avi‰es esgotadas')
		ELSE BEGIN
			 achou := 0;
			 FOR i := 1 TO 4 DO
			 BEGIN
			 IF avi[i] = numero
			 THEN BEGIN
				  achou := 1;
				  posi := i;
				END;
			END;
			IF achou = 0
			THEN WRITELN('N∆o existe este avi∆o')
			ELSE IF lug[posi] = 0
				  THEN WRITELN('Avi∆o lotado')
				  ELSE BEGIN
					   WRITE('Digite o nome do passageiro ');
					   READLN(nome);
					   reservas[pos_livre].num_avi := numero;
					   reservas[pos_livre].nome := nome;
					   WRITELN('Reserva efetuada com sucesso');
					   pos_livre := pos_livre + 1;
                                           lug[posi] := lug[posi] - 1;
					   END;
			END;
		 READLN;
		END;
	IF op = 4
	THEN BEGIN
		WRITE('Digite o n£mero do avi∆o do qual deseja consultar as reservas ');
		READLN(numero);
		achou := 0;
		FOR i := 1 TO 4 DO
		BEGIN
		IF avi[i] = numero
		THEN achou := 1
		END;
		IF achou = 0
		THEN WRITELN('N∆o existe este avi∆o')
		ELSE BEGIN
			 achou := 0;
			 FOR  i := 1 TO (pos_livre - 1) DO
			 BEGIN
			  IF reservas[i].num_avi = numero
			   THEN BEGIN
                                   WRITELN(reservas[i].nome);
				    achou := 1;
				 END;
			 END;
			 IF achou = 0
			 THEN WRITELN('Nenhuma reserva est† cadastrada para este avi∆o');
			END;
	        READLN;
                    END;
	IF op = 5
	THEN BEGIN
		WRITE('Digite o nome do passageiro do qual deseja consultar as reservas ');
		READLN(nome);
		achou := 0;
	FOR i := 1 TO (pos_livre - 1) DO
		BEGIN
		IF reservas[i].nome = nome
	   	THEN BEGIN
                         WRITELN(reservas[i].num_avi);
			 achou := 1;
			END;
		END;
		IF achou = 0
		THEN WRITELN('Nenhuma reserva est† cadastrada para este nome');
		READLN;
		END;
UNTIL op = 6;
END.
