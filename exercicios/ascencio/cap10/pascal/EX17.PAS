PROGRAM EX17;
USES CRT;
TYPE REGISTRO = RECORD
cod, dvd_loc, tot_dvd_loc: INTEGER;
nome, sexo, data_nas, RG, CPF, endereco, cidade, estado: STRING;
END;
VAR clientes: ARRAY[1..10] OF REGISTRO;
    cont_c, i, j, cod_aux, qtd, op: INTEGER;
BEGIN
cont_c := 1;

REPEAT
CLRSCR;
WRITELN('1-Cadastrar cliente ');
WRITELN('2-Mostrar clientes ');
WRITELN('3-Remover cliente ');
WRITELN('4-Devoluá∆o de DVDs ');
WRITELN('5-Efetuar locaá∆o ');
WRITELN('6-Mostrar clientes com DVDs locados ');
WRITELN('7-Finalizar ');
WRITE('Digite sua opá∆o: ');
READLN(op);
IF (op = 1)
THEN BEGIN
     IF (cont_c <= 100)
        THEN BEGIN
	     WRITE('Digite o c¢digo do cliente a ser cadastrado ');
             READLN(cod_aux);
	     i :=1;
	     WHILE (i <= cont_c) AND (clientes[i].cod <> cod_aux) DO
	     BEGIN
	          i := i + 1;
             END;
             IF (i <= cont_c)
                THEN WRITELN('Cliente j† cadastrado! ')
                ELSE BEGIN
                     clientes[cont_c].cod := cod_aux;
		     WRITE('Digite o nome do cliente ');
	             READLN(clientes[cont_c].nome);
		     WRITE('Digite o sexo do cliente ');
	             READLN(clientes[cont_c].sexo);
		     WRITE('Digite a data de nascimento do cliente ');
		     READLN (clientes[cont_c].data_nas);
		     WRITE('Digite o RG do cliente ');
                     READLN(clientes[cont_c].RG);
                     WRITE('Digite o CPF do cliente ');
		     READLN(clientes[cont_c].CPF);
		     WRITE('Digite o endereáo do cliente ');
                     READLN(clientes[cont_c].endereco);
                     WRITE('Digite a cidade do cliente ');
		     READLN(clientes[cont_c].cidade);
		     WRITE('Digite o estado do cliente ');
		     READLN(clientes[cont_c].estado);
         	     clientes[cont_c].dvd_loc  := 0;
		     clientes[cont_c].tot_dvd_loc := 0;
   		     cont_c := cont_c + 1;
                     WRITELN('Cliente cadastrado com sucesso');
		END
	     END
        ELSE WRITELN('10 clientes j† foram cadastrados!');
     READLN;
     END;
IF (op = 2)
THEN BEGIN
     FOR i := 1 TO cont_c - 1 DO
         BEGIN
              CLRSCR;
              WRITELN('C¢digo do cliente = ',clientes[i].cod);
              WRITELN('Nome do cliente = ',clientes[i].nome);
	      WRITELN('Sexo do cliente = ',clientes[i].sexo);
	      WRITELN('Data de nascimento = ',clientes[i].data_nas);
              WRITELN('RG do cliente = ', clientes[i].RG);
	      WRITELN('CPF do cliente = ',clientes[i].CPF);
	      WRITELN('Endereáo do cliente = ',clientes[i].endereco);
              WRITELN('Cidade do cliente = ',clientes[i].cidade);
	      WRITELN('Estado do cliente = ',clientes[i].estado);
              WRITELN('Quantidade de DVDs locados = ',clientes[i].dvd_loc);
	      WRITELN('Total de DVDs j† locados = ',clientes[i].tot_dvd_loc);
              WRITELN('Tecle enter ...');
              READLN;
         END;
     END;
IF (op = 3)
THEN BEGIN
	WRITE('Digite o c¢digo do cliente ');
	READLN(cod_aux);
	i := 1;
	WHILE (i <= cont_c) AND (clientes[i].cod <> cod_aux) DO
	      BEGIN
	           i := i + 1;
              END;
        IF (i <= cont_c)
           THEN BEGIN
                IF (clientes[i].dvd_loc > 0)
                   THEN WRITELN('Cliente n∆o pode ser exclu°do, possui DVDs locados! ')
                   ELSE BEGIN
		        FOR j := i+1 TO cont_c - 1 DO
			    BEGIN
                            clientes[j-1] := clientes[j];
                            END;
		            cont_c := cont_c - 1;
                            WRITELN('Cliente removido com sucesso');
                            END;
		        END
                   ELSE WRITELN('Cliente n∆o cadastrado! ');
        READLN;
     END;
IF (op = 4)
THEN BEGIN
     WRITE('Digite o c¢digo do cliente ');
     READLN(cod_aux);
     i := 1;
     WHILE (i <= cont_c) AND (clientes[i].cod <> cod_aux) DO
           BEGIN
	   i := i + 1;
           END;
     IF (i <= cont_c)
        THEN BEGIN
             IF clientes[i].dvd_loc = 0
                THEN WRITELN('Este cliente n∆o possui DVDs locados')
                ELSE BEGIN
	             REPEAT
		           WRITE('Digite a quantidade de DVDs devolvidos ');
                           READLN(qtd);
                           IF (qtd > clientes[i].dvd_loc)
		              THEN BEGIN
                                   WRITELN('Cliente possui apenas ', clientes[i].dvd_loc, ' locados ');
                                   WRITE('Digite a quantidade correta ');
                                   READLN(qtd);
                                   END;
		     UNTIL (qtd <= clientes[i].dvd_loc);
                     clientes[i].dvd_loc := clientes[i].dvd_loc - qtd;
                     WRITELN('Devoluá∆o efetuada com sucesso');
                     END;
	     END
        ELSE WRITELN('Cliente n∆o cadastrado! ');
        READLN;
     END;
IF (op = 5)
THEN BEGIN
     WRITE('Digite o c¢digo do cliente ');
     READLN(cod_aux);
     i := 1;
     WHILE (i <= cont_c) AND (clientes[i].cod <> cod_aux) DO
           BEGIN
           i := i + 1;
           END;
     IF (i <= cont_c)
        THEN BEGIN
             IF (clientes[i].dvd_loc > 0)
                THEN BEGIN
                     WRITELN('Este cliente n∆o pode fazer novas locaá‰es');
                     WRITELN('pois possui DVDs em seu poder');
                     END
                ELSE BEGIN
		     WRITE('Digite a quantidade de DVDs que serao locados ');
		     READLN(qtd);
		     clientes[i].dvd_loc := qtd;
		     clientes[i].tot_dvd_loc := clientes[i].tot_dvd_loc + qtd;
                     WRITELN('Locaá∆o efetuada com sucesso');
                     END;
	     END
        ELSE WRITELN('Cliente n∆o cadastrado! ');
     READLN;
     END;
IF (op = 6)
THEN BEGIN
     FOR i := 1 TO cont_c - 1 DO
         BEGIN
         IF (clientes[i].dvd_loc > 0)
            THEN BEGIN
                 WRITELN('C¢digo do cliente = ',clientes[i].cod);
		 WRITELN('Nome do cliente = ',clientes[i].nome);
		 WRITELN('Sexo do cliente = ',clientes[i].sexo);
		 WRITELN('Data de nascimento = ',clientes[i].data_nas);
		 WRITELN('RG do cliente = ',clientes[i].RG);
		 WRITELN('CPF do cliente = ',clientes[i].CPF);
		 WRITELN('Endereáo do cliente = ',clientes[i].endereco);
		 WRITELN('Cidade do cliente = ',clientes[i].cidade);
		 WRITELN('Estado do cliente = ',clientes[i].estado);
		 WRITELN('Quantidade de DVDs locados = ',clientes[i].dvd_loc);
		 WRITELN('Total de DVDs locados = ',clientes[i].tot_dvd_loc);
                 READLN;
                 END;
         END;
     END;
UNTIL (op = 7);
END.
