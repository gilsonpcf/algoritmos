PROGRAM EX22;
USES CRT;
VAR idade, tot_f, tot_m, soma1: INTEGER;
        cont_m1, cont_m2, cont_m3, cont_m4, cont_f1, menor_idade: INTEGER;
        media_idade, calc: REAL;
       sexo, exp: CHAR;
BEGIN
  CLRSCR;
  tot_f := 0;
  tot_m := 0;
  soma1 := 0;
  cont_m1 := 0;
  cont_m2 := 0;
  cont_f1 := 0;
  menor_idade := 0;
  REPEAT
  WRITELN('Digite a idade do candidato ');
  READLN(idade);
    IF idade > 0
   THEN BEGIN
    WRITELN('Digite o sexo do candidato (M ou F) ');
    READLN(sexo);
    WRITELN('Este candidato possui experiˆncia no servi‡o (S ou N) ? ');
    READLN(exp);
    IF ((sexo = 'F') AND (exp = 'S'))
      THEN BEGIN
       IF (tot_f = 0)
       THEN menor_idade := idade
       ELSE BEGIN
            IF (idade < menor_idade)
            THEN menor_idade := idade;
	    END;
	   END;
    IF (sexo = 'M')
      THEN tot_m := tot_m + 1;
    IF (sexo = 'F')
       THEN tot_f := tot_f + 1;
    IF ((sexo = 'F') AND (idade < 35) AND (exp = 'S'))
       THEN cont_f1 := cont_f1 + 1;
    IF ((sexo = 'M') AND (idade > 45))
       THEN cont_m1 := cont_m1 + 1;
    IF ((sexo = 'M') AND (exp = 'S'))
       THEN BEGIN
        soma1 := soma1 + idade;
	        cont_m2 := cont_m2 + 1;
	       END;
  END;
  UNTIL idade <> 0;
  WRITELN('Total de mulheres = ', tot_f);
  WRITELN('Total de homens = ', tot_m);
    IF (cont_m2 = 0)
     THEN WRITELN('Nenhum homem com experiˆncia')
     ELSE BEGIN
          calc := soma1 / cont_m2;
          WRITELN('M‚dia das idades dos homens com experiˆncia no servi‡o = ',calc:5:2);
          END;
  IF (tot_m = 0)
     THEN WRITELN('Nenhum homem')
     ELSE BEGIN
          calc := cont_m1 * 100 / tot_m;
          WRITELN('Percentual de homens com mais de 45 anos = ', calc:5:2);
          END;
  WRITELN('Total de mulheres com menos de 35 anos e com experiˆncia no servi‡o = ', cont_f1);
  WRITELN('Menor idade entre as mulheres com experiˆncia no servi‡o = ', menor_idade);
READLN;
END.
