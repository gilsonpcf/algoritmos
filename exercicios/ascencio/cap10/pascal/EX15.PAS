PROGRAM EX15;
USES CRT;
TYPE REGISTRO1 = RECORD
fone, nome_cli, endereco, comple, cep: STRING;
END;
TYPE REGISTRO2 = RECORD
cod_piz: INTEGER;
valor: REAL;
nome_piz: STRING;
END;
TYPE REGISTRO3 = RECORD
num_ped, cod_piz, cod_mot, situacao: INTEGER;
            fone: STRING;
	END;
VAR clientes:ARRAY[1..5] OF REGISTRO1; 
        pizzas:ARRAY[1..3] OF REGISTRO2; 
        pedidos:ARRAY[1..6] OF REGISTRO3;
        cont_piz, cont_ped, cont_cli, i, j, k, op, ped_aux, piz_aux, sit_aux: INTEGER;
        total_mot: ARRAY[1..5] OF REAL;
        maior: REAL;
        total_cli:ARRAY[1..5] OF REAL;
        fone_aux:STRING;
BEGIN
cont_piz := 1;
cont_ped := 1;
cont_cli := 1;
REPEAT
CLRSCR;
WRITELN('1-Cadastro de cliente');
WRITELN('2-Cadastro de pizza');
WRITELN('3-Cadastro de pedido');
WRITELN('4-Despachar pizza');
WRITELN('5-Receber pizza');
WRITELN('6-Mostrar total gasto por cliente');
WRITELN('7-Mostrar todas os pedidos com uma determinada situaá∆o');
WRITELN('8-Mostrar motoqueiro que fez mais entregas');
WRITELN('9-Finalizar');
WRITE('Digite sua opá∆o: ');
READLN(op);
IF (op = 1)
THEN BEGIN
     IF (cont_cli <= 5)
      THEN BEGIN
	   WRITE('Digite o telefone do cliente ');
           READLN(fone_aux);
           i := 1;
           WHILE (i<=cont_cli) AND (clientes[i].fone <>  fone_aux) DO
	   BEGIN
           i := i + 1;
           END;
           IF (i <= cont_cli)
           THEN WRITELN('Cliente j† cadastrado!')
           ELSE BEGIN
                clientes[cont_cli].fone := fone_aux;
		WRITE('Digite o nome do cliente ');
                READLN(clientes[cont_cli].nome_cli);
		WRITE('Digite o endereáo do cliente ');
                READLN(clientes[cont_cli].endereco);
		WRITE('Digite o complemento do endereáo ');
                READLN(clientes[cont_cli].comple);
	        WRITE('Digite o CEP ');
                READLN (clientes[cont_cli].cep);
                cont_cli := cont_cli + 1;
		WRITELN('Cliente cadastrado com sucesso');
                END;
	   END
      ELSE WRITELN('J† foram cadastrados 5 clientes!');
      END;
IF (op = 2)
THEN BEGIN
     IF (cont_piz <= 3)
     THEN BEGIN
          WRITE('Digite o n£mero da pizza ');
          READLN(piz_aux);
	  i := 1;
	  WHILE (i <= cont_piz) AND (pizzas[i].cod_piz <> piz_aux) DO
	  BEGIN
	  i := i + 1;
          END;
          IF (i<=cont_piz)
	  THEN WRITELN('Pizza j† cadastrada!')
          ELSE BEGIN
               pizzas[cont_piz].cod_piz := piz_aux;
	       WRITE('Digite o nome da pizza ');
               READLN(pizzas[cont_piz].nome_piz);
	       WRITE('Digite o valor da pizza ');
               READLN(pizzas[cont_piz].valor);
	       cont_piz:=  cont_piz + 1;
	       WRITELN('Pizza cadastrada com sucesso');
               END;
	  END
     ELSE WRITELN('J† foram cadastradas 3 pizzas!');
     END;
IF (op = 3)
THEN BEGIN
     IF (cont_ped <= 6)
     THEN BEGIN
	      WRITE('Digite o n£mero do pedido ');
              READLN(ped_aux);
	      i := 1;
	      WHILE (i <= cont_ped) AND (pedidos[i].num_ped  <> ped_aux) DO
		BEGIN
		  i := i + 1;
                END;
             IF (i <= cont_ped)
             THEN WRITELN('Pedido j† cadastrado!')
             ELSE BEGIN
               	        WRITE('Digite o telefone do cliente ');
                        READLN(pedidos[cont_ped].fone);
			i := 1;
                        WHILE (i<=cont_cli) AND (clientes[i].fone <> pedidos[cont_ped].fone) DO
                        BEGIN
			i := i + 1;
                        END;
			IF (i > cont_cli)
                        THEN WRITELN('Cliente n∆o cadastrado!')
                        ELSE BEGIN
		             WRITE('Digite o n£mero do pizza ');
		             READLN(pedidos[cont_ped].cod_piz);
		             i  := 1;
                             WHILE (i <= cont_piz) AND (pizzas[i].cod_piz <>  pedidos[cont_ped].cod_piz) DO
		             BEGIN
		             i := i + 1;
                             END;
		             IF (i > cont_piz)
                             THEN WRITELN('Pizza n∆o cadastrada!')
                             ELSE BEGIN
                                  pedidos[cont_ped].num_ped := ped_aux;
		                  pedidos[cont_ped].cod_mot := 0;
		                  pedidos[cont_ped].situacao := 1;
		                  cont_ped := cont_ped + 1;
		                  WRITELN('Pedido cadastrado com sucesso');
                                  END;
                            END;
                   END;
     END
     ELSE WRITELN('J† foram cadastrados 6 pedidos!');
     END;
IF (op = 4)
THEN BEGIN
     WRITE('Digite o n£mero do pedido ');
     READLN(ped_aux);
     i := 1;
     WHILE (i <= cont_ped) AND (pedidos[i].num_ped  <> ped_aux) DO
	BEGIN
	i := i + 1;
        END;
     IF (i > cont_ped)
        THEN WRITELN('Pedido n∆o cadastrado!')
        ELSE BEGIN
             IF (pedidos[i].situacao <> 1)
                THEN WRITELN('Pedido j† foi despachado!')
                ELSE BEGIN
                     REPEAT
	             WRITE('Digite o n£mero do motoqueiro (entre 1 e 5)');
                     READLN(pedidos[i].cod_mot);
                     UNTIL (pedidos[i].cod_mot >= 1) AND (pedidos[i].cod_mot <= 5);
		     pedidos[i].situacao := 2;
                     END;
             END;
      END;
IF (op = 5)
THEN BEGIN
     WRITE('Digite o n£mero do pedido ');
     READLN(ped_aux);
     i :=1;
     WHILE (i <= cont_ped) AND (pedidos[i].num_ped <> ped_aux) DO
	BEGIN
	i := i + 1;
        END;
        IF (i > cont_ped)
           THEN WRITELN('Pedido n∆o cadastrado!')
           ELSE BEGIN
                IF (pedidos[i].situacao = 1)
                   THEN WRITELN('Pedido ainda n∆o foi despachado!')
                   ELSE IF (pedidos[i].situacao = 3)
                        THEN WRITELN('Pedido j† foi entregue!')
                        ELSE pedidos[i].situacao := 3;
                END;
     END;
IF (op = 6)
THEN BEGIN
     FOR i := 1 TO 5 DO
	 BEGIN
	 total_cli[i] := 0;
         END;
         FOR i := 1 TO cont_ped-1 DO
	 BEGIN
	 j := 1;
	 WHILE (j <= cont_cli) AND (clientes[j].fone <> pedidos[i].fone) DO
	 BEGIN
	   j := j + 1;
         END;
         k := 1;
         WHILE (k <= cont_piz) AND (pizzas[k].cod_piz <> pedidos[i].cod_piz) DO
	 BEGIN
	    k := k + 1;
         END;
	 total_cli[j] := total_cli[j]+pizzas[k].valor;
     END;
     FOR i := 1 TO cont_cli-1 DO
	 BEGIN
	 WRITELN('Nome do cliente = ',clientes[i].nome_cli);
	 WRITELN('Total = ',total_cli[i]:5:2);
         END;
     END;
IF (op = 7)
THEN BEGIN
     IF cont_ped = 1
        THEN WRITELN('Nenhum pedido foi cadastrado')
        ELSE BEGIN
	     WRITELN('Digite a situaá∆o (1-Em preparo, 2- A caminho, 3- Entregue)');
             READLN(sit_aux);
             IF (sit_aux <> 1) AND (sit_aux <> 2) AND (sit_aux <> 3)
                THEN WRITELN('Situaá∆o inexistente')
                ELSE BEGIN
                     j := 0;
                     FOR i := 1 TO cont_ped-1 DO
                         BEGIN
                              IF (pedidos[i].situacao = sit_aux)
                                 THEN BEGIN
                                      WRITELN('N£mero do pedido = ',pedidos[i].num_ped);
                                      j := 1;
                                      WHILE (j <= cont_piz) AND (pizzas[j].cod_piz <> pedidos[i].cod_piz) DO
                                            BEGIN
                                                 j := j + 1;
                                            END;
			              WRITELN('Nome da pizza = ',pizzas[j].nome_piz);
                                      END;
                         END;
                     IF j = 0
                        THEN WRITELN('Nenhum pedido nesta situaá∆o');
                     END;
             END;
     END;
IF (op = 8)
THEN BEGIN
     FOR i := 1 TO 5 DO
         BEGIN
	      total_mot[i] :=0;
         END;
     FOR i := 1 TO cont_ped-1 DO
         BEGIN
              total_mot[pedidos[i].cod_mot] := total_mot[pedidos[i].cod_mot] + 1;
         END;
     FOR i := 1 TO 5 DO
         BEGIN
              IF (i = 1)
                 THEN BEGIN
		      maior := total_mot[i];
		      j := i;
		      END
                 ELSE BEGIN
                      IF (total_mot[i] > maior)
                         THEN BEGIN
                              maior := total_mot[i];
			      j := i;
			      END;
                      END;
         END;
     IF MAIOR = 0
        THEN WRITELN('Nenhuma entrega foi realizada')
     ELSE BEGIN
          WRITELN('O motoqueiro ', j, ' fez mais entregas');
          WRITELN('Total geral de entregas: ', maior:5:2);
          END;
     END;
READLN;
UNTIL (op = 9);
END.
