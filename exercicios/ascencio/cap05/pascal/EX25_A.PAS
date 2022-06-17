PROGRAM EX25;
USES CRT;
VAR preco, imp, transp, seguro, final, total_imp, origem: REAL;
        meio_t, carga: CHAR;
BEGIN
  CLRSCR;
  WRITELN('Digite o pre‡o unit rio ');
  READLN(preco);
  WHILE (preco > 0) DO
  BEGIN
   WRITELN('Digite a origem do produto (1-EUA, 2-M‚xico, 3-outros) ');
   READLN(origem);
   WRITELN('Digite o meio de transporte utilizado (T-Terrestre, F-Fluvial, A-A‚reo) ');
   READLN(meio_t);
   WRITELN('Trata-se de uma carga perigosa (S ou N) ?');
   READLN(carga);
   IF (preco <= 100)
     THEN imp := preco * 5 / 100
      ELSE imp := preco * 10 / 100;
    IF (carga = 'S')
      THEN BEGIN
      IF (origem = 1)
	      THEN transp := 50;
	      IF (origem = 2)
	      THEN transp := 35;
	      IF (origem = 3)
	      THEN transp := 24;
	      END;
      IF (carga = 'N')
        THEN BEGIN
	        IF (origem = 1)
	          THEN transp := 12;
	        IF (origem = 2)
	           THEN transp := 35;
	        IF (origem = 3)
	           THEN transp := 60;
	        END;
       IF ((origem = 2) OR  (meio_t = 'A'))
         THEN seguro := preco/2
         ELSE  seguro := 0;
       final := preco +imp + transp + seguro;
       total_imp := total_imp + imp;
       WRITELN('Valor do imposto = ', imp:5:2);
       WRITELN('Valor transporte = ', transp:5:2);
       WRITELN('Valor seguro = ', seguro:5:2);
       WRITELN('Pre‡o final do produto ', final:5:2);
       WRITELN('Digite o pre‡o unit rio ');
       READLN(preco);
    END;
  WRITELN('Total geral dos impostos = ', total_imp:5:2);
  READLN;
END.
