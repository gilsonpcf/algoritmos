PROGRAM EX21;
USES CRT;
VAR soma, maior, menor, soma_par, media, perc: REAL;
    num, qtd, qtd_par, qtd_impar: INTEGER;
BEGIN
  CLRSCR;
  qtd := 0;
  qtd_par := 0;
  soma_par := 0;
  qtd_impar := 0;
   REPEAT
   WRITELN('Digite um valor ');
   READLN(num);
     IF (qtd = 0)
      THEN BEGIN
      maior := num;
	      menor := num;
	      END
      ELSE BEGIN
	      IF (num > maior)
	      THEN maior := num;
	      IF (num < menor)
	      THEN menor := num;
	      END;
     soma := soma + num;
     qtd := qtd + 1;
     IF (num MOD 2 = 0)
       THEN BEGIN
	        soma_par := soma_par + num;
	        qtd_par := qtd_par + 1;
	        END
       ELSE BEGIN
	       qtd_impar := qtd_impar + 1;
	       END;
     WRITELN('Digite um valor ');
     READLN(num);
  UNTIL num <> 30000;
  WRITELN('Soma dos valores = ', soma:5:2);
  WRITELN('Quantidade de valores digitados = ', qtd);
    IF (qtd = 0)
     THEN WRITELN('Nenhum n£mero digitado')
     ELSE BEGIN
          media := soma / qtd;
          WRITELN('M‚dia dos valores digitados = ', media:5:2);
          WRITELN('Maior valor digitado = ',maior:5:2);
          WRITELN('Menor valor digitado = ',menor:5:2);
          IF (qtd_par = 0)
          THEN WRITELN('Nenhum n£mero par')
          ELSE BEGIN
               media := soma_par / qtd_par;
               WRITELN('M‚dia dos n£meros pares = ', media:5:2);
               END;
          perc := qtd_impar * 100 / qtd;
          WRITELN('Percentual de n£meros ¡mpares digitados = ', perc:5:2);
          END;
READLN;
END.
