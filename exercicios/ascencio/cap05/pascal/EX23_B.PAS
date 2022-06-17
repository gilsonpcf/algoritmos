PROGRAM EX23;
USES CRT;
VAR sal, qtd, tipo, valor_kw, gasto, acresc, total, tot_geral, qtd_cons: REAL;
BEGIN
  CLRSCR;
  tot_geral := 0;
  qtd_cons := 0;
  WRITELN('Digite o valor do sal rio m¡nimo ');
  READLN(sal);
  valor_kw := sal / 8;
  REPEAT
  WRITELN('Digite a quantidade de Kw consumida ');
  READLN(qtd);
  IF qtd > 0
  THEN BEGIN
    gasto := qtd * valor_kw;
    WRITELN('Digite o tipo do consumidor (1- Residencial, 2- Comercial, 3-Industrial) ');
    READLN(tipo);
    IF (tipo = 1)
      THEN acresc := gasto * 5 / 100;
     IF (tipo = 2)
       THEN acresc := gasto * 10 / 100;
     IF (tipo = 3)
       THEN acresc := gasto * 15 / 100;
      total := gasto + acresc;
      tot_geral := tot_geral + total;
      IF ((total >= 500) AND (total <=1000))
        THEN qtd_cons := qtd_cons + 1;
      WRITELN('Valor gasto = ', gasto:5:2);
      WRITELN('Valor acr‚scimo = ', acresc:5:2);
      WRITELN('Valor final = ', total:5:2);
      END;
   UNTIL qtd <> 0;
 WRITELN('Total geral consumido = ',tot_geral:5:2);
 WRITELN('Total de consumidores que pagam entre 500 e 1000 reais = ', qtd_cons:5:2);
READLN;
END.
