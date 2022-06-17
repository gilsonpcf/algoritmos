PROGRAM EX12;
USES CRT;
VAR num_op, pecas_op, num_maior, cont_m, cont_f, tot_pecas, cont: INTEGER;
    media_m, media_f, salario_op, salario_maior, tot_folha: REAL;
    sexo_op: CHAR;
BEGIN
  CLRSCR;
  tot_folha := 0;
  tot_pecas := 0;
  media_m := 0;
  media_f := 0;
  cont_m := 0;
  cont_f  := 0;
  FOR cont :=1 TO 15 DO
  BEGIN
   WRITELN('Digite o n£mero do ', cont, '§ oper rio ');
   READLN(num_op);
   WRITELN('Digite o sexo do oper rio (M ou F) ');
   READLN(sexo_op);
   WRITELN('Digite o total de pe‡as fabricadas pelo ', cont, '§ oper rio ');
   READLN(pecas_op);
   IF pecas_op <= 30
   THEN salario_op := 450;
   IF (pecas_op > 30) AND (pecas_op <=35)
   THEN salario_op := 450 + ((pecas_op - 30) * 3 / 100 * 450);
   IF (pecas_op > 35)
   THEN salario_op := 450 + ((pecas_op - 35) * 5 / 100 * 450);
   WRITELN('O oper rio de n£mero ',num_op, ' recebe sal rio = ', salario_op:5:2);
   tot_folha := tot_folha + salario_op;
   tot_pecas := tot_pecas + pecas_op;
      IF sexo_op = 'M'
      THEN BEGIN
           media_m := media_m + pecas_op;
           cont_m := cont_m + 1;
	   END
      ELSE BEGIN
	   media_f := media_f + pecas_op;
	   cont_f := cont_f + 1;
	   END;
      IF cont = 1
      THEN BEGIN
           salario_maior := salario_op;
	   num_maior := num_op;
           END
      ELSE BEGIN
	    IF salario_op > salario_maior
	      THEN BEGIN
	           salario_maior := salario_op;
		   num_maior := num_op;
	      	   END;
	     END;
  END;
  WRITELN('Total da folha de pagamento = ', tot_folha:5:2);
  WRITELN('Total de pe‡as fabricadas no mˆs = ', tot_pecas);
  IF cont_m = 0
  THEN WRITELN('Nenhum homem')
  ELSE BEGIN
       media_m := media_m / cont_m;
       WRITELN('M‚dia de pe‡as fabricadas por homens = ', media_m:5:2);;
       END;
  IF cont_f = 0
  THEN WRITELN('Nenhuma mulher')
  ELSE BEGIN
       media_f := media_f / cont_f;
       WRITELN('M‚dia de pe‡as fabricadas por mulheres = ', media_f:5:2);
       END;
  WRITELN('O n£mero do oper rio com maior sal rio ‚ ',  num_maior);
  READLN;
END.
