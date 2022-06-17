PROGRAM EX19;
USES CRT;
TYPE REGISTRO = RECORD
	cod, qtd_est, est_min: INTEGER;
p_compra, p_venda: REAL;
            descr: STRING;
	END;
VAR brinquedos:ARRAY[1..40] OF REGISTRO;
         i, cont_b, op, cod_aux, achou: INTEGER;
         lucro, perc: REAL;
BEGIN
cont_b := 1;
REPEAT
CLRSCR;
WRITELN('1-Cadastrar brinquedo');
WRITELN('2-Mostrar lucro');
WRITELN('3-Mostrar produtos com estoque abaixo do estoque m¡nimo');
WRITELN('4-Finalizar');
WRITE('Digite sua op‡Æo: ');
READLN(op);
IF (op = 1)
THEN BEGIN
     IF (cont_b = 41)
        THEN WRITELN('J  foram cadastrados os 40 brinquedos!')
        ELSE BEGIN
	     WRITE('Digite o c¢digo do brinquedo ');
             READLN(cod_aux);
	     i :=1;
	     WHILE (i<=cont_b) AND (brinquedos[i].cod <> cod_aux) DO
	     BEGIN
	     i := i + 1;
             END;
             IF (i <= cont_b)
                THEN WRITELN('J  existe brinquedo com este c¢digo!')
                ELSE BEGIN
		     brinquedos[cont_b].cod := cod_aux;
		     WRITE('Digite a descri‡Æo do brinquedo ');
                     READLN(brinquedos[cont_b].descr);
                     WRITE('Digite a quantidade em estoque ');
		     READLN(brinquedos[cont_b].qtd_est);
		     WRITE('Digite o estoque m¡nimo ');
		     READLN(brinquedos[cont_b].est_min);
		     WRITE('Digite o pre‡o de compra ');
		     READLN(brinquedos[cont_b].p_compra);
		     WRITE('Digite o pre‡o de venda ');
		     READLN (brinquedos[cont_b].p_venda);
		     cont_b := cont_b + 1;
		     WRITELN('Brinquedo cadastrado com sucesso');
                     END;
             END;
     END;
IF (op = 2)
THEN BEGIN
     WRITE('Digite o c¢digo do brinquedo ');
     READLN(cod_aux);
     i := 1;
     WHILE (i <= cont_b) AND (brinquedos[i].cod <> cod_aux) DO
     BEGIN
     i := i + 1;
     END;
     IF (i <= cont_b)
        THEN BEGIN
             lucro := brinquedos[i].p_venda - brinquedos[i].p_compra;
	     perc := lucro / brinquedos[i].p_compra * 100;
             WRITELN;
             WRITELN('Pre‡o de compra: ', brinquedos[i].p_compra:5:2, '  Pre‡o de venda: ', brinquedos[i].p_venda:5:2);
             WRITELN('O lucro o obtido com a venda: ', lucro:5:2);
             WRITELN('Este valor corresponde a ', perc:5:2, '%');
	     END
        ELSE WRITELN('Brinquedo nÆo cadastrado!');
     END;
IF (op = 3)
THEN BEGIN
     achou :=0;
     FOR i := 1 TO cont_b - 1 DO
     BEGIN
     IF (brinquedos[i].qtd_est < brinquedos[i].est_min)
        THEN BEGIN
             achou := 1;
             WRITELN;
             WRITELN('C¢digo do brinquedo = ',brinquedos[i].cod);
	     WRITELN('Descri‡Æo = ',brinquedos[i].descr);
	     WRITELN('Quantidade em estoque = ',brinquedos[i].qtd_est);
	     WRITELN('Estoque m¡nimo = ',brinquedos[i].est_min);
             END;
     END;
     IF achou = 0
        THEN WRITELN('Nenhum brinquedo est  com estoque inferior ao estoque m¡nimo ');
     END;
READLN;
UNTIL (op = 4);
END.
