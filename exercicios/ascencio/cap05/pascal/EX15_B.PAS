PROGRAM EX15;
USES CRT;
VAR preco, custo_est, imp, preco_final : REAL;
    adicional, maior_p, menor_p, tot_imp:REAL;
    i, qtd_b, qtd_n, qtd_c:INTEGER;
    refri, categ: CHAR;
BEGIN
  CLRSCR;
  adicional := 0;
  tot_imp := 0;
  qtd_b := 0;
  qtd_n := 0;
  qtd_c := 0;
  i := 1;
  REPEAT
     WRITELN('Digite o pre‡o unit rio do produto ');
     READLN(preco);
     WRITELN('Este produto necessita de refrigera‡ao ');
     READLN(refri);
     WRITELN('Digite a categoria do produto (A-alimenta‡ao, L-limpeza, V-vestu rio) ');
     READLN(categ);
     IF (preco <= 20)
     THEN BEGIN
	     IF (categ = 'A')
	      THEN custo_est := 2;
	     IF (categ = 'L')
	      THEN custo_est := 3;
 	     IF (categ = 'V')
	      THEN custo_est := 4;
	     END;
      IF ((preco > 20) AND (preco <= 50))
       THEN BEGIN
	        IF (refri = 'S')
	          THEN custo_est := 6
                  ELSE custo_est := 0;
	       END;
      IF (preco > 50)
        THEN BEGIN
         IF (refri = 'S')
	           THEN BEGIN
                         IF (categ = 'A')
		   	   THEN custo_est := 5;
			 IF (categ = 'L')
		   	   THEN custo_est := 2;
			 IF (categ = 'V')
		   	   THEN custo_est := 4;
	      		 END
       ELSE BEGIN
	       IF ((categ = 'A') OR (categ = 'V'))
	        THEN custo_est := 0;
	       IF (categ = 'L')
	        THEN custo_est := 1;
	      END;
	   END;
	   IF ((categ <> 'A') AND (refri <> 'S'))
	     THEN imp := preco * 2 / 100
	     ELSE  imp := preco * 4 / 100;
	preco_final := preco + custo_est + imp;
	WRITELN('Custo de estocagem = ',custo_est:5:2);
	WRITELN('Valor do imposto = ', imp:5:2);
	WRITELN('Pre‡o final = ',preco_final:5:2);
	IF (preco_final <= 20)
	  THEN BEGIN
               qtd_b := qtd_b + 1;
	       WRITELN('Classifica‡ao Barato');
	       END;
	IF ((preco_final > 20) AND (preco_final <= 100))
	  THEN BEGIN
               qtd_n := qtd_n + 1;
	       WRITELN('Classifica‡ao Normal');
	       END;
	IF (preco_final > 100)
	  THEN BEGIN
               qtd_c := qtd_c + 1;
	       WRITELN('Classifica‡ao Caro');
	       END;
	adicional := adicional + custo_est + imp;
	tot_imp := tot_imp + imp;
	IF (i = 1)
	   THEN BEGIN
                maior_p := preco_final;
	        menor_p := preco_final;
	        END
	  ELSE BEGIN
	   	  IF (preco_final > maior_p)
		   THEN maior_p := preco_final;
	     	  IF (preco_final < menor_p)
		   THEN menor_p := preco_final;
	   	END;
   i := i + 1;
   UNTIL i = 13;
   adicional := adicional / 12;
   WRITELN(' Valor adicional = ', adicional:5:2);
   WRITELN(' Maior pre‡o final = ',  maior_p:5:2);
   WRITELN(' Menor pre‡o final = ', menor_p:5:2);
   WRITELN(' Total dos impostos = ', tot_imp:5:2);
   WRITELN(' Quantidade de produtos baratos ', qtd_b);
   WRITELN(' Quantidade de produtos normais ', qtd_n);
   WRITELN(' Quantidade de produtos caros ',qtd_c);
   READLN;
 END.
