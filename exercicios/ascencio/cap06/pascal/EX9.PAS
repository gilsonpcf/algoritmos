PROGRAM EX9;
USES CRT;
VAR voo, lugares: ARRAY[1..12] OF INTEGER;
        i, op, op2, num_voo, achou: INTEGER;
        origem, destino: ARRAY[1..12] OF STRING;
        local: STRING;
BEGIN
  CLRSCR;
  FOR i:=1 TO 12 DO
	BEGIN
    	WRITE('Digite o n�mero do ', i, '� v�o ');
      	READLN(voo[i]);
      	WRITE('Digite o local de origem do ',i,'� v�o ');
       	READLN(origem[i]);
      	WRITE('Digite o local de destino do ',i,'� v�o ');
	READLN(destino[i]);
      	WRITE('Digite o total de lugares do ',i, '� v�o ');
      	READLN(lugares[i]);
        WRITELN;
    	END;
  REPEAT
    CLRSCR;
     GOTOXY(15,3);
      WRITELN('1- Consultar');
     GOTOXY(15,4);
      WRITELN('2- Resevar');
     GOTOXY(15,5);
      WRITELN('3- Finalizar');
      GOTOXY(15,6);
      WRITE('Digite sua op��o: ');
      READLN(op);
      clrscr;
      CASE op OF
1 : BEGIN
       	     GOTOXY(15,3);
	     WRITELN('1- Consulta por v�o');
             GOTOXY(15,4);
	     WRITELN('2- Consulta por origem');
	     GOTOXY(15,5);
	     WRITELN('3- Consulta por destino');
	     GOTOXY(15,6);
	     WRITE('Digite sua op��o: ');
	     READLN(op2);
	     CASE op2 OF
		1: BEGIN
                    WRITELN('Digite o n�mero de v�o: ');
		    READLN(num_voo);
		    achou:=0;
		    FOR i := 1 TO 12 DO
                    BEGIN
                     IF voo[i] = num_voo
                     THEN achou := i;
                    END;
		    IF ACHOU = 0
			THEN WRITELN('V�o inexistente !')
			ELSE BEGIN
				WRITELN('N�mero do v�o: ',voo[ACHOU]);
				WRITELN('Local de origem: ', origem[ACHOU]);
				WRITELN('Local de destino: ', destino[ACHOU]);
				WRITELN('Lugares dispon�veis: ', lugares[ACHOU]);
			          END;
			      READLN;
		END;
                     2: BEGIN
                         WRITELN('Digite o local de origem: ');
		READLN(locaL);
                ACHOU :=0;
	 	FOR i:=1 TO 12 DO
			BEGIN
			IF local = origem[i]
			THEN BEGIN
                                ACHOU := 1;
				WRITELN('N�mero do v�o: ', voo[i]);
				WRITELN('Local de origem: ',origem[i]);
				WRITELN('Local de destino: ',destino[i]);
				WRITELN('Lugares dispon�veis: ',lugares[i]);
				END;
			END;
               IF ACHOU = 0
               THEN WRITELN('Local de origem n�o encontrado');
			READLN;
		  END;
	           3: BEGIN
                   WRITELN('Digite o local de destino: ');
		   READLN(local);
                   achou :=0;
		   FOR i:=1 TO 12 DO
		    	BEGIN
			IF local = destino[i]
			 THEN BEGIN
                                achou:=1;
				WRITELN('N�mero do v�o: ', voo[i]);
				WRITELN('Local de origem: ',origem[i]);
				WRITELN('Local de destino: ',destino[i]);
				WRITELN('Lugares dispon�veis: ',lugares[i]);
			            END;
			END;
                if achou = 0
                then writeln('Local de destino n�o encontrado');
			READLN;
		    END;
		  END;
	      END;
	  2: BEGIN
              WRITELN('Digite o n�mero do v�o desejado: ');
	      READLN(num_voo);
	      achou:=0;
	      for i:=1 to 12 do
              begin
               if (voo[i] = num_voo)
               then achou := i;
              end;
	     IF (achou = 0)
	      THEN WRITELN('N�mero de v�o n�o encontrado !')
	      ELSE BEGIN
		     IF (lugares[achou]=0)
			THEN WRITELN('V�o lotado !')
			ELSE BEGIN
				lugares[achou] := lugares[achou] - 1;
			  	WRITELN('Reserva confirmada !');
			         END;
		    END;
		  READLN;
	     END;
	 END;
     UNTIL op =3;
  END.
