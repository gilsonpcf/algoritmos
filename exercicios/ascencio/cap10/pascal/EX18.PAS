PROGRAM EX18;
USES CRT;
TYPE REGISTRO = RECORD
nome: STRING;
sexo: CHAR;
idade: INTEGER;
altura, peso: REAL;
END;
VAR pac:ARRAY[1..20] OF REGISTRO;
        op, i, j, cont_p: INTEGER; 
        maior_peso, peso_ideal, dif: REAL;
        nome_aux: STRING;

BEGIN
cont_p := 1;
REPEAT
CLRSCR;
WRITELN('1-Cadastrar paciente');
WRITELN('2-Determinar paciente mais pesado');
WRITELN('3-Mostrar pacientes acima do peso ideal');
WRITELN('4-Mostrar pacientes abaixo do peso ideal');
WRITELN('5-Finalizar');
WRITE('Digite sua op‡Æo: ');
READLN(op);
IF op = 1
THEN BEGIN
     IF cont_p < 20
     THEN BEGIN
          WRITE('Digite o nome do paciente: ');
	  READLN(pac[cont_p].nome);
	  REPEAT
	  WRITE('Digite o sexo do paciente (M ou F): ');
	  READLN(pac[cont_p].sexo);
          pac[cont_p].sexo := upcase(pac[cont_p].sexo);
	  UNTIL (pac[cont_p].sexo = 'F')  OR (pac[cont_p].sexo = 'M');
	  WRITE('Digite a idade do paciente: ');
	  READLN(pac[cont_p].idade);
	  WRITE('Digite a altura do paciente (em metros): ');
	  READLN(pac[cont_p].altura);
	  WRITE('Digite o peso do paciente (em Kg): ');
	  READLN(pac[cont_p].peso);
	  cont_p := cont_p + 1;
          WRITELN('Paciente cadastrado com sucesso');
	  END
     ELSE WRITELN('J  foram cadastrados 20 pacientes!');
     END;
IF op =  2
THEN BEGIN
     IF cont_p = 1
     THEN WRITELN('Nenhum paciente foi cadastrado')
     ELSE BEGIN
          FOR i := 1 TO cont_p-1 DO
          BEGIN
            IF  i = 1
	        THEN BEGIN
	 	     maior_peso := pac[i].peso;
		     nome_aux := pac[i].nome;
		     END
		     ELSE BEGIN
		          IF (pac[i].peso > maior_peso)
			  THEN BEGIN
                               maior_peso := pac[i].peso;
			       nome_aux := pac[i].nome;
			       END;
			  END;
		     END;
            WRITELN('Nome do paciente mais pesado: ',nome_aux);
            WRITELN('Peso: ',maior_peso:5:3);
          END;
          END;
IF op = 3
THEN BEGIN
     IF cont_p = 1
     THEN WRITELN('Nenhum paciente foi cadastrado')
     ELSE BEGIN
          FOR i := 1 TO cont_p -1 DO
	  BEGIN
	  IF pac[i].sexo = 'F'
	     THEN peso_ideal := (62.1 * pac[i].altura) - 44.7
	     ELSE peso_ideal := (72.7 * pac[i].altura) - 58;
	     IF (pac[i].peso > peso_ideal)
	        THEN BEGIN
                    dif := pac[i].peso - peso_ideal;
 	 	     WRITELN('Nome do paciente: ',pac[i].nome);
		     WRITELN('Sexo do paciente: ',pac[i].sexo);
		     WRITELN('Idade do paciente: ',pac[i].idade);
		     WRITELN('Altura do paciente (em metros): ',pac[i].altura:5:2);
		     WRITELN('Peso do paciente (em Kg): ',pac[i].peso:5:3);
                     WRITELN('Precisa emagrecer ', dif:5:3, ' Kg para atingir o peso ideal');
                     WRITELN('Tecle enter...');
                     READLN;
		     END;
	  END;
          END;
     END;
IF op =  4
THEN BEGIN
     IF cont_p = 1
     THEN WRITELN('Nenhum paciente foi cadastrado')
     ELSE BEGIN
          j := 0;
          FOR i := 1 TO cont_p - 1 DO
          BEGIN
	       IF pac[i].sexo  = 'F'
	       THEN peso_ideal := (62.1 * pac[i].altura) - 44.7
	       ELSE peso_ideal := (72.7 * pac[i].altura) - 58;
	       IF (pac[i].peso < peso_ideal)
	       THEN BEGIN
                    j := 1;
		    dif := peso_ideal - pac[i].peso;
 	 	    WRITELN('Nome do paciente: ',pac[i].nome);
		    WRITELN('Sexo do paciente: ',pac[i].sexo);
		    WRITELN('Idade do paciente: ',pac[i].idade);
		    WRITELN('Altura do paciente (em metros): ',pac[i].altura:5:2);
		    WRITELN('Peso do paciente (em Kg): ',pac[i].peso:5:3);
		    WRITELN('Nome do paciente: ',pac[cont_p].nome);
		    WRITELN('Peso atual: ',pac[i].peso:5:3);
		    WRITELN('Precisa adquirir ',dif:5:3, ' Kg para atingir seu peso ideal');
		    END;
	  END;
          IF j = 0
             THEN WRITELN('Nenhuma pessoa est  abaixo do peso ideal');
          END;
     END;
READLN;
UNTIL op = 5;
END.
