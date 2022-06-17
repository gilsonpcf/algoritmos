PROGRAM EX16;
USES CRT;
TYPE REGISTRO = RECORD
num_insc, idade, pontos, cod_curso: INTEGER;
	END;
VAR cand:ARRAY[1..6,1..40] OF REGISTRO;
         cont:ARRAY[1..6] OF INTEGER;
          i, j, k, insc_aux, idade_aux, pontos_aux, curso_aux: INTEGER;
BEGIN
CLRSCR;
FOR i := 1 TO 6 DO
	BEGIN
     	cont[i] := 40;
  	END;
WRITE('Digite o n£mero da inscri‡Æo ');
READLN(insc_aux);
WHILE (insc_aux > 0) DO
	BEGIN
	WRITE('Digite a idade do candidato ');
        READLN(idade_aux);
       	REPEAT
	WRITE('Digite os pontos ');
        READLN(pontos_aux);
       	UNTIL ((pontos_aux >= 0) AND (pontos_aux <= 5000));
       	REPEAT
		WRITE('Digite o curso ');
             	READLN(curso_aux);
        	UNTIL ((curso_aux >= 1) AND (curso_aux <= 6));
        	i := curso_aux;
        	IF (cont[i] = 40)
                THEN BEGIN
        	     cand[i,40].num_insc := insc_aux;
	             cand[i,40].idade := idade_aux;
	             cand[i,40].pontos := pontos_aux;
	             cand[i,40].cod_curso := curso_aux;
	             cont[i]:= cont[i] - 1;
	             END
                ELSE BEGIN
	 	     j := 40;
	             WHILE ((cand[i][j].pontos < pontos_aux)
                     AND (j>cont[i])) DO
			BEGIN
	              	  j := j - 1;
                        END;
                     IF cont[i] <= 0
                          THEN BEGIN
                                FOR k := 40 DOWNTO j+1 DO
				  BEGIN
		                  cand[i,k]:= cand[i,k-1];
                                  END;
	                          cand[i,j+1].num_insc := insc_aux;
	                          cand[i,j+1].idade := idade_aux;;
	                          cand[i,j+1].pontos := pontos_aux;;
	                          cand[i,j+1].cod_curso := curso_aux;
	                          cont[i] :=cont[i] - 1;
                              END
                     ELSE IF j = cont[i]
                     THEN BEGIN
                          cand[i,j].num_insc := insc_aux;
	                  cand[i,j].idade := idade_aux;;
	                  cand[i,j].pontos := pontos_aux;;
	                  cand[i,j].cod_curso := curso_aux;
	                  cont[i] :=cont[i] - 1;
                          END
                     ELSE BEGIN
                          WHILE ((cand[i,j].pontos = pontos_aux) AND
                          (cand[i,j].idade < idade_aux) AND (j>cont[i])) DO
		          BEGIN
	                  j := j - 1;
                          END;
		          IF (j >= cont[i])
                          THEN BEGIN
		               FOR k := cont[i] downTO j-1 DO
				  BEGIN
		                  cand[i,k]:= cand[i,k+1];
                                  END;
	                          cand[i,j].num_insc := insc_aux;
	                          cand[i,j].idade := idade_aux;;
	                          cand[i,j].pontos := pontos_aux;;
	                          cand[i,j].cod_curso := curso_aux;
	                          cont[i] :=cont[i] - 1;
                              END
                    ELSE BEGIN
                         cand[i,j].num_insc := insc_aux;
	                 cand[i,j].idade := idade_aux;;
	                 cand[i,j].pontos := pontos_aux;;
	                 cand[i,j].cod_curso := curso_aux;
	                 cont[i] :=cont[i] - 1;
                         END;
                         END;
                 END;
  	WRITE('Digite o n£mero da inscri‡Æo ');
        READLN(insc_aux);
  	END;
FOR i := 1 TO 6 DO
	BEGIN
        IF cont[i] <> 40
        THEN BEGIN
        WRITELN('Lista de aprovados no curso ',i);
        IF cont[i] <= 0
        THEN BEGIN
           	FOR j := 1 TO 40  DO
		BEGIN
	 	WRITELN('N£mero de inscri‡Æo: ', cand[i][j].num_insc);
	 	WRITELN('Idade: ', cand[i][j].idade);
	 	WRITELN('Pontos alcan‡ados: ', cand[i][j].pontos);
       		END;
            END;
       IF cont[i] > 0
        THEN BEGIN
           	FOR j := cont[i]+1 TO 40  DO
		BEGIN
	 	WRITELN('N£mero de inscri‡Æo: ', cand[i][j].num_insc);
	 	WRITELN('Idade: ', cand[i][j].idade);
	 	WRITELN('Pontos alcan‡ados: ', cand[i][j].pontos);
       		END;
            END;
        END;
  	END;
READLN;
END.
