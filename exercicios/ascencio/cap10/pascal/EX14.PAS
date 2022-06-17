PROGRAM EX14;
USES CRT;
TYPE REGISTRO1 = RECORD
num_b, ano_f: INTEGER;
nome: STRING;
END;
TYPE REGISTRO2 = RECORD
num_r, cod_venc, hora_i: INTEGER;
data: STRING;
END;
TYPE REGISTRO3 = RECORD
num_r, num_b, hora_c: INTEGER;
END;
VAR barcos:ARRAY[1..6] OF REGISTRO1;
        regatas:ARRAY[1..3] OF REGISTRO2;
        barco_reg:ARRAY[1..12] OF REGISTRO3;
        i, j, k, cont_b, cont_r, cont_rb, cont, reg_aux, bar_aux, op: INTEGER;
BEGIN
cont_b := 1;
cont_r := 1;
cont_rb := 1;
REPEAT
CLRSCR;
WRITELN('1-Cadastrar barco');
WRITELN('2-Cadastrar regata');
WRITELN('3-Cadastrar participantes');	
WRITELN('4-Cadastrar barco vencedor');
WRITELN('5-Mostrar regatas com seus vencedores');
WRITELN('6-Mostrar participantes de uma regata');
WRITELN('7-Finalizar');
WRITELN('Digite sua opá∆o: ');
READLN(op);
IF (op = 1)
THEN BEGIN
     IF (cont_b <= 6)
     THEN BEGIN
	  WRITE('Digite o n£mero do barco a ser cadastrado ');
	  READLN(bar_aux);
	  i := 1;
	  WHILE (i < cont_b) AND (barcos[i].num_b <> bar_aux) DO
	  BEGIN
	  i := i + 1;
	  END;
	  IF (i < cont_b)
	  THEN  WRITELN('Barco j† cadastrado!')
          ELSE BEGIN
		barcos[cont_b].num_b := bar_aux;
		WRITE('Digite o nome do barco ');
		READLN(barcos[cont_b].nome);
		WRITE('Digite o ano do barco ');
		READLN(barcos[cont_b].ano_f);
                cont_b := cont_b + 1;
		WRITELN('Barco cadastrado com sucesso!');
               END;
	  END
     ELSE WRITELN('J† foram cadastrados 6 barcos!');
     END;
IF (op = 2)
THEN BEGIN
     IF (cont_r <= 3)
     THEN BEGIN
          WRITE('Digite o n£mero da regata a ser cadastrada ');
          READLN(reg_aux);
	  i := 1;
	  WHILE (i<cont_r) AND (regatas[i].num_r <> reg_aux) DO
		BEGIN
		i := i + 1;
                END;
          IF (i < cont_r)
	   THEN WRITELN('Regata j† cadastrada!')
           ELSE BEGIN
	        regatas[cont_r].num_r := reg_aux;
	        WRITE('Digite a data da regata ');
	        READLN(regatas[cont_r].data);
	        WRITE('Digite a hora da regata ');
                READLN(regatas[cont_r].hora_i);
                regatas[cont_r].cod_venc := 0;
                cont_r := cont_r + 1;
		WRITELN('Regata cadastrada com sucesso');
                END;
	   END
      ELSE WRITELN('J† foram cadastradas 3 regatas!');
      END;
IF (op = 3)
THEN BEGIN
     WRITE('Digite o n£mero da regata para posteriormente cadastrar participante ');
     READLN(reg_aux);
     i := 1;
     WHILE (i<cont_r) AND (regatas[i].num_r <> reg_aux) DO
	BEGIN
        i := i + 1;
        END;
     IF (i = cont_r)
     THEN WRITELN('Regata n∆o cadastrada!')
     ELSE BEGIN
	   cont := 0;
	   FOR i := 1 TO cont_rb - 1 DO
		BEGIN
		IF (barco_reg[i].num_r = reg_aux)
                THEN cont :=cont + 1;
                END;
           IF (cont = 4)
           THEN WRITELN('J† foram cadastrados 4 participantes nesta regata!')
           ELSE BEGIN
	          WRITE('Digite o n£mero do barco participante ');
                  READLN(bar_aux);
		  i := 1;
		  WHILE (i<cont_rb) AND (barcos[i].num_b <> bar_aux) DO
		  BEGIN
		  i := i + 1;
                  END;
                  IF (i = cont_b)
                  THEN WRITELN('Barco n∆o cadastrado!')
                  ELSE BEGIN
		       i := 1;
		       WHILE (i<cont_rb) DO
                       BEGIN
                       IF (bar_aux =  barco_reg[i].num_b)
                       AND (barco_reg[i].num_r = reg_aux)
                       THEN i := cont_rb + 1
                       ELSE i := i + 1;
                       END;
                       IF (i>cont_rb)
                       THEN WRITELN('Este barco j† est† nesta regata!')
                       ELSE BEGIN
			    barco_reg[cont_rb].num_r := reg_aux;
		            barco_reg[cont_rb].num_b := bar_aux;
			    WRITE('Digite a hora da chegada ');
		            READLN(barco_reg[cont_rb].hora_c);
                            cont_rb := cont_rb + 1 ;
			    WRITELN('Participante cadastrado com sucesso');
                            END;
                       END;
              END;
         END;
       END;
IF (op = 4)
THEN BEGIN
	  WRITE('Digite o n£mero da regata para posteriormente cadastrar vencedor ');
          READLN(reg_aux);
          i := 0;
          WHILE (i<cont_r) AND (regatas[i].num_r <> reg_aux) DO
          BEGIN
          i := i + 1;
          END;
          IF (i = cont_r)
          THEN WRITELN('Regata n∆o cadastrada!')
          ELSE BEGIN
		WRITE('Digite o n£mero do barco vencedor ');
                READLN(bar_aux);
                j := 1;
                WHILE (j<cont_rb) AND ((barco_reg[j].num_b <> bar_aux) OR (barco_reg[j].num_r <> reg_aux)) DO
		BEGIN
		j := j + 1;
                END;
                IF (j = cont_rb)
                THEN WRITELN('Este barco n∆o participou desta regata!')
                ELSE BEGIN
                     regatas[i].cod_venc := bar_aux;
                     WRITELN('Barco vencedor cadastrado com sucesso');
                     END;
            END;
          END;
IF (op = 5)
THEN BEGIN
     FOR i := 1 TO  cont_r - 1 DO
     BEGIN
     WRITELN('N£mero da regata = ',regatas[i].num_r);
     WRITELN('Data da regata = ',regatas[i].data);
     IF (regatas[i].cod_venc = 0)
     THEN WRITELN('Ainda n∆o foi cadastrado o barco vencedor!')
     ELSE BEGIN
	  j := 1;
	  WHILE (j<cont_b) AND (regatas[i].cod_venc <> barcos[j].num_b) DO
	  BEGIN
	  j := j + 1;
          END;
          IF (j = cont_b)
          THEN WRITELN('Barco vencedor n∆o cadastrado!')
          ELSE WRITELN('Nome do barco = ',barcos[j].nome);
          END;
    END;
    END;
IF (op = 6)
THEN BEGIN
	WRITE('Digite o n£mero da regata a ser consultada ');
        READLN(reg_aux);
        i := 1;
        WHILE (i<cont_r) AND (regatas[i].num_r <>  reg_aux) DO
	BEGIN
	i := i + 1;
        END;
        IF (i = cont_r)
        THEN WRITELN('Regata n∆o cadastrada!')
        ELSE BEGIN
       	      WRITELN('N£mero da regata = ',regatas[i].num_r);
              WRITELN('Data da regata = ',regatas[i].data);
              FOR j := 1 TO cont_rb - 1 DO
		BEGIN
                 IF (barco_reg[j].num_r = reg_aux)
                  THEN BEGIN
                    	  k := 1;
		          WHILE (k<cont_b) AND (barcos[k].num_b <> barco_reg[j].num_b) DO
	                  BEGIN
			  k := k + 1;
                          END;
                          IF (k<cont_b)
                          THEN BEGIN
                               WRITELN('N£mero do barco = ', barcos[k].num_b);
                               WRITELN('Ano do barco = ',barcos[k].ano_f);
                               END;
                       END;
               END;
             END;
     END;
READLN;
UNTIL  op=7;
END.
