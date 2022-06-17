PROGRAM EX11;
USES CRT;
TYPE REGISTRO1 = RECORD
	cod_a, serie: INTEGER;
        nome: STRING;
        END;
TYPE REGISTRO2 = RECORD
     cod_d, carga_hor: INTEGER;
     descr: STRING;
     END;
TYPE REGISTRO3 = RECORD
     cod_a, cod_d, faltas: INTEGER;
     nota: REAL;
     END;
VAR alunos: ARRAY[1..10] OF REGISTRO1;
    disciplinas: ARRAY[1..6] OF REGISTRO2;
    matriculas: ARRAY[1..30] OF REGISTRO3;
    cont_a, cont_d, cont_m, cont, alu_aux, dis_aux, achou, i, j, k, op: INTEGER;
    perc:REAL;

BEGIN
cont_a := 1;
cont_d := 1;
cont_m := 1;
REPEAT
CLRSCR;
WRITELN('1-Cadastrar disciplinas');
WRITELN('2-Cadastrar alunos');
WRITELN('3-Realizar matr°culas');
WRITELN('4-Lanáar notas e faltas');
WRITELN('5-Consultar alunos reprovados');
WRITELN('6-Mostrar disciplinas cursadas por aluno');
WRITELN('7-Finalizar');
WRITELN('Digite sua opá∆o: ');
READLN(op);
IF (op = 1)
THEN BEGIN
      	 IF (cont_d <= 6)
             THEN BEGIN
                  WRITE('Digite o n£mero da disciplina a ser cadastrada ');
		  READLN(dis_aux);
	       	   i:=1;
		   WHILE (i < cont_d) AND (dis_aux <> disciplinas[i].cod_d) DO
			BEGIN
			 i := i + 1;
                      	END;
		   IF (i < cont_d)
                   THEN WRITELN('Disciplina j† cadastrada! ')
	       	   ELSE BEGIN
			    disciplinas[cont_d].cod_d := dis_aux;
                            WRITE('Digite a descriá∆o da disciplina ');
			    READLN(disciplinas[cont_d].descr);
                            WRITE('Digite a carga hor†ria da disciplina ');
			    READLN(disciplinas[cont_d].carga_hor);
			    cont_d := cont_d + 1;
                            WRITELN('Disciplina cadastrada');
		       	 END
	           END
           ELSE WRITELN('J† foram cadastradas as 6 disciplinas! ');
           READLN;
          END;
IF (op = 2)
THEN BEGIN
         IF (cont_a <= 10)
         THEN BEGIN
              WRITE('Digite o n£mero do aluno a ser cadastrado ');
 	      READLN(alu_aux);
  	      i := 1;
	      WHILE (i < cont_a) AND (alu_aux <> alunos[i].cod_a) DO
		BEGIN
		 i := i + 1;
                END;
	      IF (i < cont_a)
               THEN WRITELN('Aluno j† cadastrado! ')
               ELSE BEGIN
		     alunos[cont_a].cod_a := alu_aux;
                     WRITE('Digite o nome do aluno ');
		     READLN(alunos[cont_a].nome);
		     REPEAT
                        WRITE('Digite a sÇrie do aluno - 5¶ a 9¶ ');
                        READLN(alunos[cont_a].serie);
		     UNTIL (alunos[cont_a].serie >= 5) AND (alunos[cont_a].serie <= 9);
		     cont_a := cont_a + 1;
                     WRITELN('Aluno cadastrado com sucesso');
	            END;
	     END
	 ELSE WRITELN('J† foram cadastrados os 10 alunos! ');
         READLN;
     END;
IF (op=3)
THEN BEGIN
         IF (cont_m <= 30)
         THEN BEGIN
              WRITE('Digite o c¢digo do aluno ');
	      READLN(alu_aux);
	      i := 1;
	      WHILE (i < cont_a) AND (alunos[i].cod_a <> alu_aux) DO
		BEGIN
		i := i + 1;
		END;
	      IF (i = cont_a)
	      THEN WRITELN('Aluno n∆o cadastrado! ')
              ELSE BEGIN
		      cont := 0;
		      FOR  i :=1 TO cont_m-1 DO
		      BEGIN
			IF (matriculas[i].cod_a = alu_aux)
			THEN cont := cont + 1;
               	      END;
		      IF (cont >= 3)
		      THEN WRITELN('Aluno j† est† matriculado em 3 disciplinas ')
                      ELSE BEGIN
                           WRITE('Digite o c¢digo da disciplina ');
			   READLN(dis_aux);
			   j := 1;
			   WHILE  (j<cont_d)  AND (disciplinas[j].cod_d <> dis_aux) DO
                           BEGIN
				j := j + 1;
                           END;
		           IF  (j = cont_d)
                            THEN BEGIN
			     	  WRITELN('Disciplina n∆o cadastrada! ');
                               	  achou := 1;
				 END
                            ELSE BEGIN
	         	          j := 1;
				  achou := 0;
				  WHILE (j < cont_m) AND (achou = 0) DO
					BEGIN
					IF (matriculas[j].cod_a = alu_aux)
                                        AND (matriculas[j].cod_d = dis_aux)
                                        THEN  achou := 1;
                                        j := j + 1;
					END;
				  IF (achou = 1)
		                  THEN WRITELN('Aluno j† est† nesta disciplina')
				  ELSE BEGIN
			               matriculas[cont_m].cod_a := alu_aux;
		  	               matriculas[cont_m].cod_d :=dis_aux;
			               matriculas[cont_m].faltas :=0;
			               matriculas[cont_m].nota :=0;
			               cont_m := cont_m + 1;
                                       WRITELN('Matr°cula efetuada');
			               END;
                                  END;
                        END
		   END
              END
	      ELSE WRITELN('N∆o existe espaáo para mais matr°culas!');
        READLN;
	END;
IF (op = 4)
THEN BEGIN
         WRITE('Digite o c¢digo do aluno ');
         READLN(alu_aux);
       	 i := 1;
	 WHILE (i < cont_a) AND (alunos[i].cod_a <> alu_aux) DO
		BEGIN
		    i := i + 1;
                END;
	IF (i = cont_a)
	THEN WRITELN('N∆o existe aluno com este c¢digo! ')
        ELSE BEGIN
                 WRITELN('Digite o c¢digo da disciplina');
		 READLN(dis_aux);
	       	 i := 1;
		 WHILE (i < cont_d) AND (disciplinas[i].cod_d <> dis_aux) DO
			BEGIN
			 i := i + 1;
                       	END;
	         IF (i = cont_d)
		 THEN WRITELN('N∆o existe disciplina com este c¢digo! ')
                 ELSE BEGIN
			i := 1;
			WHILE  (i<cont_m) AND ((matriculas[i].cod_a <> alu_aux) OR (matriculas[i].cod_d <> dis_aux)) DO
			BEGIN
			  i := i + 1;
			END;
			IF (i = cont_m)
			THEN WRITELN('Matr°cula inv†lida! ')
                        ELSE BEGIN
                             WRITE('Digite o n£mero de faltas ');
			     READLN(matriculas[i].faltas);
                             WRITE('Digite a nota ');
			     READLN(matriculas[i].nota);
                             WRITE('Lanáamento efetuado ');
                             END;
		     END;
	         END;
         READLN;
         END;
IF  (op = 5)
THEN BEGIN
     FOR i := 1 TO cont_m - 1 DO
	BEGIN
        j := 1;
	WHILE (j < cont_d) AND (matriculas[i].cod_d <> disciplinas[j].cod_d) DO
	BEGIN
	j := j + 1;
        END;
	perc := disciplinas[j].carga_hor * 25 / 100;
	IF (matriculas[i].faltas>perc) OR (matriculas[i].nota < 7)
         THEN BEGIN
	  	K := 1;
	   	WHILE (k<cont_a) AND (matriculas[i].cod_a <> alunos[k].cod_a) DO
                BEGIN
		k := k + 1;
                END;
                WRITE('Aluno: ',alunos[k].nome);
                WRITE('    Disciplina: ',disciplinas[j].descr);
                WRITE('    Faltas: ',matriculas[i].faltas);
                WRITELN('  Nota: ',matriculas[i].nota:5:2);
	      END;
        END;
        READLN;
        END;
IF (op = 6)
THEN BEGIN
     WRITE('Digite o c¢digo do aluno ');
     READLN(alu_aux);
     i := 1;
     WHILE (i < cont_a) AND (alunos[i].cod_a <> alu_aux) DO
	BEGIN
	    i := i + 1;
        END;
    IF  (i = cont_a)
    THEN WRITELN('Este aluno n∆o est† cadastrado!')
    ELSE BEGIN
         WRITELN(alunos[i].nome);
         FOR i := 1 TO cont_m - 1 DO
		BEGIN
		IF (matriculas[i].cod_a = alu_aux)
		THEN BEGIN
                     j := 1;
                     WHILE (j < cont_d) AND (disciplinas[j].cod_d <> matriculas[i].cod_d) DO
		     BEGIN
			j := j + 1;
                     END;
		     WRITE('Disciplina: ',disciplinas[j].descr);
                     WRITE('  Faltas: ',matriculas[i].faltas);
                     WRITE('  Nota: ',matriculas[i].nota:5:2);
		     perc:=disciplinas[j].carga_hor * 25 / 100;
		     IF ((matriculas[i].faltas > perc) OR (matriculas[i].nota < 7))
		     THEN WRITELN('   Reprovado')
		     ELSE WRITELN('   Aprovado');
                     END;
              END;
       	END;
      READLN;
      END;
UNTIL (op = 7);
END.
