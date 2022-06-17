PROGRAM EX13;
USES CRT;
TYPE REGISTRO1 = RECORD
            nome, nome_med, data_nasc, sexo: STRING;
     END;
VAR pacientes: ARRAY[1..10] OF REGISTRO1;
    pac_cres: ARRAY[1..10] OF REGISTRO1;
    pac_decres: ARRAY[1..10] OF REGISTRO1;
        cont, cont_p, i, j, op: INTEGER;
        pac_aux, med_aux: STRING;
BEGIN
  cont_p := 1;
  REPEAT
  CLRSCR;
      WRITELN('1-Cadastrar paciente ');
      WRITELN('2-Mostrar pacientes em ordem de cadastramento ');
      WRITELN('3-Mostrar pacientes em ordem crescente ');
      WRITELN('4-Mostrar pacientes em ordem decrescente ');
      WRITELN('5-Excluir paciente individualmente ');
      WRITELN('6-Excluir pacientes por m‚dico ');
      WRITELN('7-Finalizar');
      WRITE('Digite sua op‡Æo: ');
      READLN(op);
      CASE op OF
      1: BEGIN
      IF (cont_p <= 10)
      THEN BEGIN
	   WRITE('Digite o nome do paciente: ');
	   READLN(pac_aux);
	   i:=1;
	   WHILE (i<cont_p) AND (pacientes[i].nome<> pac_aux) DO
	    BEGIN
	    i := i + 1;
	    END;
           IF (i<cont_p)
	    THEN BEGIN
	         WRITELN('Paciente j  cadastrado! ');
		 READLN;
		 END
	   ELSE BEGIN
		  pacientes[cont_p].nome := pac_aux;
		  WRITE('Digite o nome do m‚dico: ');
		  READLN(pacientes[cont_p].nome_med);
		  WRITE('Digite a data de nascimento: ');
		  READLN(pacientes[cont_p].data_nasc);
		  WRITE('Digite o sexo do paciente (M ou F): ');
                  READLN(pacientes[cont_p].sexo);
		  WRITELN('Paciente cadastrado com sucesso');
		  i:=1;
		  WHILE (i < cont_p) AND (pacientes[cont_p].nome > pac_cres[i].nome) DO
                  BEGIN
		      i:= i + 1;
		   END;
	         IF (i=cont_p)
	         THEN pac_cres[cont_p] := pacientes[cont_p]
 	         ELSE BEGIN
			j := cont_p-1;
			WHILE j >= i DO
			BEGIN
			pac_cres[j+1] := pac_cres[j];
			j := j - 1;
			END;
                        pac_cres[i] := pacientes[cont_p];
                     END;
			i:=1;
			WHILE (i < cont_p) AND
                        (pacientes[cont_p].nome < pac_decres[i].nome) DO
			BEGIN
			i:= i +1;
			END;
			IF (i=cont_p)
			THEN pac_decres[cont_p] := pacientes[cont_p]
			ELSE BEGIN
				j := cont_p-1;
				WHILE j >= i DO
				BEGIN
				pac_decres[j+1]:= pac_decres[j];
				j := j - 1
				END;
                                pac_decres[i] := pacientes[cont_p];
                        END;
			cont_p:= cont_p + 1;
		END;
          END
	  ELSE BEGIN
	     	WRITELN('J  foram cadastrados 10 pacientes! ');
	       	READLN;
		END;
	END;
2: BEGIN
    FOR i:=1 TO cont_p - 1 DO
    BEGIN
    WRITELN('Nome do paciente: ',pacientes[i].nome);
    WRITELN('Nome do m‚dico: ',pacientes[i].nome_med);
    WRITELN('Data de nascimento: ',pacientes[i].data_nasc);
    WRITELN('Sexo do paciente (M ou F): ',pacientes[i].sexo);
    WRITELN('Tecle enter ...');
    READLN;
    END;
   END;
3: BEGIN
    FOR i:=1 TO cont_p - 1 DO
    BEGIN
    WRITELN('Nome do paciente: ',pac_cres[i].nome);
    WRITELN('Nome do m‚dico: ',pac_cres[i].nome_med);
    WRITELN('Data de nascimento: ',pac_cres[i].data_nasc);
    WRITELN('Sexo do paciente (M ou F): ',pac_cres[i].sexo);
    WRITELN('Tecle enter ...');
    READLN;
    END;
    END;
4: BEGIN
    FOR i:=1 TO cont_p - 1 DO
    BEGIN
    WRITELN('Nome do paciente: ',pac_decres[i].nome);
    WRITELN('Nome do m‚dico: ',pac_decres[i].nome_med);
    WRITELN('Data de nascimento: ',pac_decres[i].data_nasc);
    WRITELN('Sexo do paciente (M ou F): ',pac_decres[i].sexo);
    WRITELN('Tecle enter ...');
    READLN;
    END;
    END;
5: BEGIN
     WRITELN('Digite nome do paciente a ser exclu¡do: ');
     READLN(pac_aux);
     i:=1;
     WHILE (pacientes[i].nome <> pac_aux) AND (i<cont_p) DO
	BEGIN
	i := i + 1;
	END;
     IF (i=cont_p)
       THEN BEGIN
     WRITELN('Paciente nÆo cadastrado!');
	     READLN;
	     END
       ELSE BEGIN
	     FOR j:=i TO cont_p -1 DO
		BEGIN
		pacientes[j]:=pacientes[j+1];
		END;
	       i:=1;
	       WHILE (pac_cres[i].nome <> pac_aux) AND (i<cont_p) DO
		BEGIN
		 i := i + 1;
		END;
	       IF (i=cont_p)
	        THEN BEGIN
	              WRITELN('Paciente nÆo cadastrado!');
		      READLN;
		      END
	        ELSE BEGIN
                        WRITELN('Paciente exclu¡do com sucesso');
                        READLN;
			FOR j:= i TO cont_p -1 DO
			BEGIN
			      pac_cres[j]:=pac_cres[j+1];
			 END;
		       END;
	       i:=1;
	       WHILE (pac_decres[i].nome <> pac_aux) AND (i<cont_p) DO
		BEGIN
		 i := i + 1;
		END;
	       IF (i=cont_p)
		THEN BEGIN
	                WRITELN('Paciente nÆo cadastrado!');
		    	READLN;
			END
		 ELSE BEGIN
			  FOR j := i TO cont_p-1 DO
				BEGIN
			      		pac_decres[j]:=pac_decres[j+1];
			      	END;
			  END;
		       cont_p:= cont_p - 1;
		     END;
	END;
6: BEGIN
     WRITELN('Digite o nome do m‚dico: ');
     READLN(med_aux);
     i := 1;
    cont:=cont_p;
    WHILE (i<cont) DO
	BEGIN
	IF (pacientes[i].nome_med = med_aux)
	THEN BEGIN
		FOR  j:=i TO cont-1 DO
		BEGIN
		    pacientes[j]:=pacientes[j+1];
		END;
		cont := cont + 1;
		END
      	 ELSE BEGIN
		i := i  + 1;
		END;
	END;
  IF i = cont_p
  THEN BEGIN
       WRITELN('M‚dico nÆo cadastrado');
       READLN;
       END
  ELSE BEGIN
       WRITELN('Pacientes exclu¡dos com sucesso');
       READLN;
       i:=1;
       cont:=cont_p;
       WHILE (i<cont) DO
	BEGIN
	    IF (pac_cres[i].nome_med= med_aux)
		THEN BEGIN
 	             FOR j :=i TO cont-1 DO
	                BEGIN
		     	pac_cres[j]:=pac_cres[j+1];
		     	END;
			cont := cont - 1;
		     END
		ELSE BEGIN
	             i := i + 1;
	             END;
    	END;
i:=1;
cont:=cont_p;
WHILE (i<cont) DO
BEGIN
	IF (pac_decres[i].nome_med = med_aux)
	THEN BEGIN
		FOR j:=i TO cont-1 DO
	BEGIN
		pac_decres[j]:=pac_decres[j+1];
	     	END;
		cont:= cont - 1;
	           END
             ELSE BEGIN
		i := i + 1;
   	           END;
	END;
  cont_p := cont;
  END;
END;
END;
UNTIL op=7;
END.
