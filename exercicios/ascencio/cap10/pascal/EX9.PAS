PROGRAM EX9;
USES CRT;
TYPE REGISTRO1 = RECORD
	cod_cliente : INTEGER;
        ende, fone  : STRING;
END;
TYPE REGISTRO2 = RECORD
     cod_produto, qtde_est : INTEGER;
     preco_unit  : REAL;
     desc, unid : STRING
END;
TYPE REGISTRO3 = RECORD
     numero_nf, cod_cliente : INTEGER;
     total : REAL;
END;
TYPE REGISTRO4 = RECORD
     numero_nf, cod_prod, qtde : INTEGER;
     preco_vend : REAL;
END;
VAR cliente: ARRAY[1..3] OF REGISTRO1; 
        produto: ARRAY[1..6] OF REGISTRO2;
        nota: ARRAY[1..5] OF REGISTRO3;
        itens_nota : ARRAY[1..10] OF REGISTRO4;
        i, j, k, h, cont, achou, op1, op2, posi, codigo_cli : INTEGER;
        livre_cliente, livre_produto, livre_nota, livre_item, codigo, pre, qtde, num_nota : INTEGER;
        valor, valor_inicial, valor_final : REAL;
        endere, telefone, desc, unidade : STRING;
        resp : CHAR;
BEGIN
FOR  i := 1 TO 3 DO
BEGIN
cliente[i].cod_cliente := 0;
cliente[i].ende := '';
cliente[i].fone := '';
END;
FOR  i := 1 TO 6 DO
BEGIN
produto[i].cod_produto := 0;
produto[i].preco_unit := 0;
produto[i].qtde_est := 0;
produto[i].desc := '';
produto[i].unid := '';
END;
FOR  i := 1 TO 5 DO
BEGIN
nota[i].numero_nf := 0;
nota[i]. cod_cliente := 0;
nota[i].total := 0;
END;
FOR  i := 1 TO 10 DO
BEGIN
itens_nota[i].numero_nf := 0;
itens_nota[i].cod_prod := 0;
itens_nota[i].qtde := 0;
itens_nota[i].preco_vend := 0;
END;
livre_cliente := 1;
livre_produto := 1;
livre_nota := 1;
livre_item := 1;
REPEAT
	CLRSCR;
	WRITELN('Menu de Opáoes');
	WRITELN('1 - Cadastros');
	WRITELN('2 - Movimentaáoes');
	WRITELN('3 - Consultas');
	WRITELN('4 - Sair');
	WRITELN('Digite sua opáao');
	READLN(op1);
	IF (op1 < 1) OR (op1 > 4)
	THEN  WRITELN('Opáao inv†lida, digite novamente');
	IF op1 = 1
	THEN  BEGIN
		 REPEAT
                 CLRSCR;
		 WRITELN('Sub-menu de Opáoes');
		 WRITELN('1 - Incluir clientes');
		 WRITELN('2 - Alterar clientes');
		 WRITELN('3 - Excluir clientes');
		 WRITELN('4 - Incluir produtos');
		 WRITELN('5 - Alterar produtos');
		 WRITELN('6 - Excluir produtos');
		 WRITELN('7 - Sair ');
		 WRITELN('Digite sua opáao');
		 READLN(op2);
		 IF (op2 < 1) OR (op2 > 7)
		 THEN  WRITELN('Opá∆o inv†lida, digite novamente');
		 IF op2 = 1
		 THEN  BEGIN
			  WRITELN('Inclusao de Clientes');
			   IF livre_cliente = 4
			   THEN  WRITELN('Cadastro de clientes lotado')
			   ELSE BEGIN
				    WRITELN('Digite o c¢digo do cliente a ser inclu°do');
				    READLN(codigo);
				    achou := 0;
				    FOR  i := 1 TO 3 DO
				    BEGIN
				    IF cliente[i].cod_cliente = codigo
				    THEN  achou := 1;
				    END;
				    IF achou = 1
				    THEN  WRITELN('J† existe cliente com este c¢digo')
				    ELSE BEGIN
					     WRITELN('Digite o endereáo do cliente');
					     READLN(endere);
					     WRITELN('Digite o telefone do cliente');
					     READLN(telefone);
					     cliente[livre_cliente].cod_cliente := codigo;
					     cliente[livre_cliente].ende := endere;
					     cliente[livre_cliente].fone := telefone;
					     WRITELN('Cliente cadastrado com sucesso!');
					     livre_cliente := livre_cliente + 1;
					     END;
				    END;
                          READLN;
			  END;
		 IF op2 = 2
		 THEN  BEGIN
			  WRITELN('Alteraáao de Clientes');
			   IF livre_cliente = 1
			   THEN  WRITELN('Cadastro de clientes vazio')
			   ELSE BEGIN
				    WRITELN('Digite o c¢digo do cliente a ser alterado');
				    READLN(codigo);
				    achou := 0;
				    FOR  i := 1 TO 3 DO
				    BEGIN
				    IF cliente[i].cod_cliente = codigo
				    THEN  BEGIN
                          		     achou := 1;
					     posi := i;
					    END;
				    END;
				    IF achou = 0
				    THEN  WRITELN('Nao existe cliente com esse c¢digo')
				    ELSE BEGIN
					     WRITELN('Digite o novo endereáo do cliente');
					     READLN(endere);
					     WRITELN('Digite o novo telefone do cliente');
					     READLN(telefone);
					     cliente[posi].ende := endere;
					     cliente[posi].fone := telefone;
					     WRITELN('Cliente alterado com sucesso!');
					     END;
			    END;
                          READLN;
			  END;
		 IF op2 = 3
		 THEN  BEGIN
			  WRITELN('Exclus∆o de Clientes');
			   IF livre_cliente = 1
			   THEN  WRITELN('Cadastro de clientes vazio')
			   ELSE BEGIN
				    WRITELN('Digite o c¢digo do cliente a ser exclu°do');
				    READLN(codigo);
				    achou := 0;
				    FOR  i := 1 TO 3 DO
				    BEGIN
				    IF cliente[i].cod_cliente = codigo
				    THEN  BEGIN
                          	          achou := 1;
					  posi := i;
					  END;
				    END;
				    IF achou = 0
				    THEN  WRITELN('Nao existe cliente com este c¢digo')
				    ELSE BEGIN
					     achou := 0;
					     FOR  j := 1 TO (livre_nota - 1) DO
					     BEGIN
					     IF nota[j].cod_cliente = codigo
 					     THEN  achou := 1;
					     END;
					     IF achou = 1
					     THEN  BEGIN
                                                   WRITELN('Cliente nao pode ser exclu°do, possui notas');
                                                   END
					     ELSE BEGIN
						      IF posi = 3
						      THEN  BEGIN
							       cliente[j].cod_cliente := 0;
                                                       	       cliente[j].ende := '';
                                                       	       cliente[j].fone := '';
							      END;
						      FOR  j := posi TO (livre_cliente - 2) DO
						      BEGIN
					              cliente[j].cod_cliente:=cliente[j+1].cod_cliente;
                                                      cliente[j].ende := cliente[j+1].ende;
                                                      cliente[j].fone := cliente[j+1].fone;
						      END;
                                                      cliente[livre_cliente-1].cod_cliente := 0;
                                                      cliente[livre_cliente-1].ende := '';
                                                      cliente[livre_cliente-1].fone := '';
 					      WRITELN('Cliente exclu°do com sucesso!');
					      livre_cliente := livre_cliente - 1;							      END;
					     END;
				    END;
                          READLN;
			  END;
		 IF op2 = 4
		 THEN  BEGIN
			  WRITELN('Inclusao de Produtos');
			   IF livre_produto = 7
			   THEN  WRITELN('Cadastro de produtos lotado')
			   ELSE BEGIN
				    WRITELN('Digite o c¢digo do produto a ser inclu°do');
				    READLN(codigo);
				    achou := 0;
				    FOR  i := 1 TO 6 DO
				    BEGIN
				    IF produto[i].cod_produto = codigo
				    THEN  achou := 1;
				    END;
				    IF achou = 1
				    THEN  WRITELN('J† existe produto com este c¢digo')
				    ELSE BEGIN
					     WRITELN('Digite a descriáao do produto');
					     READLN(desc);
					     WRITELN('Digite a unidade do produto');
					     READLN(unidade);
					     WRITELN('Digite o preáo unit†rio do produto');
					     READLN(pre);
					     WRITELN('Digite a quantidade de estoque do produto');
					     READLN(qtde);
					     produto[livre_produto].cod_produto := codigo;
					     produto [livre_produto].desc := desc;
					     produto [livre_produto].unid := unidade;
					     produto [livre_produto].preco_unit := pre;
					     produto [livre_produto].qtde_est := qtde;
					     WRITELN('Produto cadastrado com sucesso!');
					     livre_produto := livre_produto + 1;
					     END;
				    END;
                          READLN;
			  END;
		 IF op2 = 5
		 THEN  BEGIN
			  WRITELN('Alteraáao de Produtos');
			   IF livre_produto = 1
			   THEN  WRITELN('Cadastro de produtos vazio')
			   ELSE BEGIN
				    WRITELN('Digite o c¢digo do produto a ser alterado');
				    READLN(codigo);
				    achou := 0;
				    FOR  i := 1 TO 6 DO
				    BEGIN
				    IF cliente[i].cod_cliente = codigo
				    THEN  BEGIN
                          		  achou := 1;
					  posi := i;
					  END;
				    END;
				    IF achou = 0
				    THEN  WRITELN('Nao existe produto com este c¢digo')
				    ELSE BEGIN
					     WRITELN('Digite a nova descriáao do produto');
					     READLN(desc);
					     WRITELN('Digite a nova unidade do produto');
					     READLN(unidade);
					     WRITELN('Digite o novo preáo unit†rio');
					     READLN(pre);
					     WRITELN('Digite a nova quantidade em estoque');
					     READLN(qtde);
					     produto [livre_produto].desc := desc;
					     produto [livre_produto].unid := unidade;
					     produto [livre_produto].preco_unit := pre;
					     produto [livre_produto].qtde_est := qtde;
					     WRITELN('Produto alterado com sucesso!');
					     END;
			    END;
                          READLN;
			  END;
		 IF op2 = 6
		 THEN  BEGIN
			  WRITELN('Exclusao de Produtos');
			   IF livre_produto = 1
			   THEN  WRITELN('Cadastro de produtos vazio')
			   ELSE BEGIN
				    WRITELN('Digite o c¢digo do produto a ser exclu°do');
				    READLN(codigo);
				    achou := 0;
				    FOR  i := 1 TO 6 DO
				    BEGIN
				    IF produto[i].cod_produto = codigo
				    THEN  BEGIN
                          	          achou := 1;
					  posi := i;
					  END;
				    END;
				    IF achou = 0
				    THEN  WRITELN('Nao existe produto com este c¢digo')
				    ELSE BEGIN
					     achou := 0;
					     FOR  j := 1 TO (livre_item - 1) DO
					     BEGIN
					     IF itens_nota[j].cod_prod = codigo
 					     THEN  achou := 1;
					     END;
					     IF achou = 1
					     THEN  BEGIN
                                                   WRITELN('Nao pode excluir produto, est† em notas');
						   END
					     ELSE BEGIN
						      IF posi = 6
						      THEN  BEGIN
							       produto [posi].cod_produto := 0;
                                                               produto [posi].desc:=  '';
					    		       produto [posi].unid:=  '';
					     		       produto [posi].preco_unit := 0;
				     		               produto [posi].qtde_est := 0;
				      			    END;
						      FOR  j := posi TO (livre_produto - 2) DO
						      BEGIN
                                                      produto [j].cod_produto := produto [j+1].cod_produto;
                                                      produto [j].desc := produto [j+1].desc;
					    	      produto [j].unid := produto [j+1].unid;
					     	      produto [j].preco_unit := produto [j+1].preco_unit;
                                                      produto [j].qtde_est := produto [j+1].qtde_est;
						      END;
						      produto [livre_produto - 1].cod_produto := 0;
                                                                                   produto [livre_produto - 1].desc := '';
	 			    	 	      produto [livre_produto - 1].unid := '';
					 	      produto [livre_produto - 1].preco_unit := 0;
                                                      produto [livre_produto - 1].qtde_est := 0;
						      WRITELN('Produto exclu°do com sucesso!');
                                                      livre_produto := livre_produto - 1;
					      END;
					     END;
				    END;
                          READLN;
			  END;
		 UNTIL op2 = 7
		END;
	IF op1 = 2
	THEN  BEGIN
		WRITELN('Cadastro de notas de sa°da');
		WRITELN('Digite o n£mero da nota');
		READLN(num_nota);
		IF livre_nota = 6
		THEN  WRITELN('Cadastro de notas lotado')
		ELSE BEGIN
			 achou := 0;
			 FOR  i := 1 TO 5 DO
			 BEGIN
			 IF nota[i].numero_nf = num_nota
			 THEN  achou := 1;
			 END;
			 IF achou = 1
			 THEN  WRITELN('J† existe nota fiscal cadastrada com esse n£mero')
			 ELSE BEGIN
				  WRITELN('Digite o c¢digo do cliente');
				  READLN(codigo_cli);
				  achou := 0;
                                  WHILE achou = 0 DO
                                  BEGIN
				  FOR  i := 1 TO 3 DO
				  BEGIN
				  IF cliente[i].cod_cliente = codigo_cli
				  THEN  achou := 1;
				  END;
				  IF achou = 0
				  THEN  BEGIN
                                        WRITELN('Este cliente nao est† cadastrado');
                                        WRITELN('Digite outro cliente');
                                        READLN(codigo_cli);
                                        END;
                                  END;
				  cont := 0;
				  resp := 'S' ;
				  WHILE (cont < 2) AND (resp = 'S') DO
					   BEGIN
					   WRITELN('Digite o c¢digo do produto');
					   READLN(codigo);
                                           achou := 0;
					   FOR  k := 1 TO livre_produto DO
					   BEGIN
					  	IF produto[k].cod_produto = codigo
						THEN  BEGIN
                                                         IF produto[k].qtde_est = 0
                                                         THEN achou := 2
                                                         ELSE BEGIN
							 achou := 1;
                                                         posi := k;
							 FOR  h := 1 TO livre_item DO
							 BEGIN
	                                                 iF (itens_nota[h].numero_nf = num_nota) AND (itens_nota[h].cod_prod = codigo)
							  THEN  BEGIN
                                                                  WRITELN('Produto j† existe nesta nota');
								  achou := 0;
								  END
                                                          END;
                                                      END;
                                            END;
                                            END;
                                            IF achou = 0
                                                THEN BEGIN
                                                     WRITELN('Este produto nao est† cadastrado');
                                                     END;
                                            IF achou = 2
                                            THEN BEGIN
                                                     WRITELN('Este produto est† com estoque zerado');
                                                     END;
					    IF achou = 1
                                            THEN  BEGIN
						  WRITELN('Digite a quantidade');
						  READLN(qtde);
                                                  WHILE qtde > produto[posi].qtde_est DO
                                                  BEGIN
                                                  WRITELN('Estoque insuficiente');
                                                  WRITELN('Digite outra quantidade');
                                                  READLN(qtde);
                                                  END;
						  nota[livre_nota].numero_nf := num_nota;
			  			  nota[livre_nota].cod_cliente := codigo_cli;
						  nota[livre_nota].total := nota[livre_nota].total + (qtde * produto[posi].preco_unit);
                                                  itens_nota[livre_item].numero_nf := num_nota;
						  itens_nota[livre_item].cod_prod := codigo;
						  itens_nota[livre_item].qtde := qtde;
						  itens_nota[livre_item].preco_vend := qtde * produto[posi].preco_unit;
						  livre_item := livre_item + 1;
                                                  WRITELN('Produto inclu°do na nota com sucesso');
                                                  produto[posi].qtde_est := produto[posi].qtde_est - qtde;
                                                  cont := cont + 1;
					         END;
					   IF cont < 2
					   THEN  BEGIN
					   	    WRITELN('Deseja cadastrar outro produto nesta nota');
                                                    WRITELN('s - sim ou n - nao');
					   	    READLN(resp);
                                                    resp := UpCase(resp);
						    END;
                                  END;
                                  IF cont >= 1
                                  THEN BEGIN
                                       livre_nota := livre_nota + 1;
                                       WRITELN('Nota cadastrada com sucesso ');
                                       END;
                                 END;
		    END;
                READLN;
		END;
	IF op1 = 3
	THEN  BEGIN
		REPEAT
		 WRITELN('Sub-menu de Opáoes');
		 WRITELN('1 - Consultar todos os produtos com preáos entre dois valores');
                 WRITELN('2 - Consultar todas as notas de um cliente');
		 WRITELN('3 - Consultar todas as notas com total superior a um determinado valor');
		 WRITELN('4 - Sair ');
		 WRITELN('Digite sua opáao');
		 READLN(op2);
		 IF (op2 < 1) OR (op2 > 4)
		 THEN  WRITELN('Opcao inv†lida, digite novamente');
		 IF op2 = 1
		 THEN  BEGIN
			  WRITELN('Consultar todos os produtos com preáos entre dois valores');
			  WRITELN('Digite o valor inicial');
			  READLN(valor_inicial);
			  WRITELN('Digite o valor final');
			  READLN(valor_final);
			  IF livre_produto = 1
			  THEN  WRITELN('Nenhum produto est† cadastrado')
			  ELSE BEGIN
				    achou := 0;
				    FOR  i := 1 TO (livre_produto - 1) DO
					BEGIN
					IF (produto[i].preco_unit >= valor_inicial)
                                        AND (produto[i].preco_unit <= valor_final)
					THEN  BEGIN
						 achou := 1;
						 WRITELN('C¢digo: ', produto[i].cod_produto,'   Descriá∆o: ', produto[i].desc);
						 END;
					END;
				   IF achou = 0
				   THEN  WRITELN('Nenhum produto foi cadastrado com estes preáos');
                               END;
                          READLN;
			  END;
		 IF op2 = 2
		 THEN  BEGIN
			  WRITELN('Consultar todas as notas e itens da nota de um cliente');
			  WRITELN('Digite o c¢digo do cliente');
			  READLN(codigo);
			  IF livre_cliente = 1
			  THEN  WRITELN('Nao existe cliente cadastrado')
			  ELSE BEGIN
				   achou := 0;
			  	   FOR  i := 1 TO (livre_cliente - 1) DO
					BEGIN
					IF cliente[i].cod_cliente = codigo
					THEN  BEGIN
						achou := 1;
						posi := i;
						END;
					END;
				  IF achou = 0
				  THEN  WRITELN('Este cliente nao est† cadastrado')
				  ELSE BEGIN
					IF livre_nota = 1
					THEN  WRITELN('Nenhuma nota cadastrada')
					ELSE BEGIN
						achou := 0;
						FOR  i := 1 TO (livre_nota - 1) DO
						BEGIN
						 IF nota[i].cod_cliente = codigo
						 THEN  BEGIN
							  achou := 1;
							  WRITELN('Nß da nota: ',nota[i].numero_nf, '   Total: ',nota[i].total:5:2);
							  FOR  j := 1 TO (livre_item - 1) DO
							  BEGIN
							  IF itens_nota[j].numero_nf = nota[i].numero_nf
							  THEN  BEGIN
                                                                WRITE('  Produto: ',itens_nota[j].cod_prod);
                                                                WRITE('  Quantide: ',itens_nota[j].qtde);
                                                                WRITE('  Preáo: ',itens_nota[j].preco_vend:5:2);
                                                                WRITELN;
								  END;
  							  END;
							  END;
						END;
						IF achou = 0
						THEN  WRITELN('Nenhuma nota cadastrada');
					END;
				  END;
			  END;
                   READLN;
                   END;
		 IF op2 = 3
		 THEN  BEGIN
			  WRITELN('Consultar todas as notas e itens da nota com total superior a um valor');
			  WRITELN('Digite o valor');
			  READLN(valor);
			  IF livre_nota = 1
			  THEN  WRITELN('Nao existe nota cadastrada')
			  ELSE BEGIN
				   achou := 0;
				   FOR  i := 1 TO (livre_nota - 1) DO
				 	BEGIN
					IF nota[i].total > valor
					 THEN  BEGIN
						  achou := 1;
						  WRITELN('Nß da nota: ',nota[i].numero_nf, '   Valor total: ',nota[i].total:5:2);
						  FOR  j := 1 TO (livre_item - 1) DO
						  BEGIN
						  IF (itens_nota[j].numero_nf = nota[i].numero_nf)
						  THEN  BEGIN
                                                         WRITE('Produto: ',itens_nota[j].cod_prod);
                                                         WRITE('   Quantidade: ',itens_nota[j].qtde);
                                                         WRITELN('  Preáo: ',itens_nota[j].preco_vend:5:2);
							  END;
  						  END;
						  END;
					END;
				IF achou = 0
				THEN  WRITELN('Nenhuma nota cadastrada');
				END;
                         READLN;
			 END;
                UNTIL op2 = 4
		END;
UNTIL op1 = 4
END.
