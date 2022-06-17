PROGRAM EX3;
USES CRT;
TYPE REGISTRO1 = RECORD
cod_cli : INTEGER;
nome, fone, ende : STRING;
END;
TYPE REGISTRO2 = RECORD
	num_doc, cod_cli, dv, mv, av, dp, mp, ap : INTEGER;
valor, juros : REAL;
END;
VAR  clientes: ARRAY[1..15] OF REGISTRO1;
         docs: ARRAY[1..30] OF REGISTRO2;
         posi,op, i, cliente_livre, doc_livre, achou, codigo, numero, diav, mesv, anov : INTEGER;
         diap, mesp, anop, k,J : INTEGER;
         valor, juros, total : REAL;
         nome, fone, ende : STRING;
         dia_inicial, mes_inicial, ano_inicial: INTEGER;
         dia_final, mes_final, ano_final: INTEGER;
BEGIN
FOR i :=1 TO 15 DO 
BEGIN
clientes[i].cod_cli := 0;
clientes[i].nome := '';
clientes[i].fone := '';
clientes[i].ende := '';
END;
cliente_livre := 1;
FOR i := 1 TO 30 DO 
BEGIN
docs[i].num_doc := 0;
docs[i].cod_cli := 0;
docs[i].dv := 0;
docs[i].mv := 0;
docs[i].av := 0;
docs[i].dp := 0;
docs[i].mp := 0;
docs[i].ap := 0;
docs[i].valor := 0;
docs[i].juros := 0;
END;
doc_livre := 1;
REPEAT
	CLRSCR;
	WRITELN('Menu de Opá‰es');
	WRITELN('1 - Cadastrar clientes');
	WRITELN('2 - Cadastrar documentos');
	WRITELN('3 - Excluir clientes');
	WRITELN('4 - Excluir documentos individuais');
	WRITELN('5 - Excluir documentos por cliente');
	WRITELN('6 - Excluir documentos por per°odo');
	WRITELN('7 - Alterar clientes');
	WRITELN('8 - Totalizar documentos');
	WRITELN('9 - Sair');
	WRITELN('Digite sua opá∆o');
	READLN(op);
	IF (op < 1) OR (op > 9)
	THEN WRITELN('Opá∆o inv†lida');
	IF op = 1
	THEN BEGIN
		IF cliente_livre = 16
		THEN WRITELN('Cadastro de clientes lotado')
		ELSE BEGIN
			WRITE('Digite o c¢digo do cliente a ser cadastrado ');
			READLN(codigo);
			achou := 0;
			FOR i := 1 TO 15 DO
			BEGIN
			IF clientes[i].cod_cli = codigo
			THEN achou := 1;
			END;
			IF achou = 1
			THEN WRITELN('J† existe cliente cadastrado com esse c¢digo')
			ELSE BEGIN
			 	WRITE('Digite o nome do cliente ');
			 	READLN( nome);
			 	WRITE('Digite o telefone do cliente ');
			 	READLN( fone);
			 	WRITE('Digite o endereáo do cliente ');
			 	READLN( ende);
			 	clientes[cliente_livre].cod_cli := codigo;
			 	clientes[cliente_livre].nome := nome;
			 	clientes[cliente_livre].fone := fone;
			 	clientes[cliente_livre].ende := ende;
			 	WRITELN('Cliente cadastrado com sucesso');
			 	cliente_livre := cliente_livre + 1;
				END;
			END;
		 READLN;
		END;
	IF op = 2
	THEN BEGIN
		 IF doc_livre = 31
		 THEN WRITELN('Cadastro de documentos lotado')
		 ELSE BEGIN
		 	  WRITE('Digite o n£mero do documento a ser cadastrado ');
		 	  READLN(numero);
		 	  achou := 0;
		 	  FOR i := 1 TO 30 DO
		 	  BEGIN
		 	  IF docs[i].num_doc = numero
		 	  THEN achou := 1;
		 	  END;
		 	  IF achou = 1
		 	  THEN WRITELN('J† existe um documento cadastrado com esse c¢digo')
		 	  ELSE BEGIN
			   	   WRITE('Digite o c¢digo do cliente dono do documento ');
			   	   READLN(codigo);
			   	   achou := 0;
			   	   FOR i := 1 TO 15 DO
			   	   BEGIN
			   	   IF clientes[i].cod_cli = codigo
			   	   THEN achou := 1;
			   	   END;
			   	   IF achou = 0
			   	   THEN WRITELN('N∆o existe cliente cadastrado com esse c¢digo')
			   	   ELSE BEGIN
				     	    WRITELN('Digite a data do vencimento do documento ');
                                            WRITE('dia ==> ');
				     	    READLN(diav);
                                            WRITE('mes ==> ');
                                            READLN(mesv);
                                            WRITE('ano ==> ');
                                            READLN(anov);
				     	    WRITELN('Digite a data do pagamento do documento');
                                            WRITE('dia ==> ');
				     	    READLN(diap);
                                            WRITE('mes ==> ');
                                            READLN(mesp);
                                            WRITE('ano ==> ');
                                            READLN(anop);
				     	    WRITE('Digite o valor do documento ');
				     	    READLN(valor);
				     	    IF anop > anov
				     	    THEN juros := valor * 5/100
				     	    ELSE IF mesp > mesv
					      	     THEN juros := valor * 5/100
					      	     ELSE IF diap > diav
					      		      THEN juros := valor * 5/100
					      		      ELSE juros := 0;
				     	   docs[doc_livre].num_doc := numero;
				     	   docs[doc_livre].cod_cli := codigo;
                                       	   docs[doc_livre].dv := diav;
                                       	   docs[doc_livre].mv := mesv;
                                       	   docs[doc_livre].av := anov;
                                       	   docs[doc_livre].dp := diap;
                                       	   docs[doc_livre].mp := mesp;
                                       	   docs[doc_livre].ap := anop;
                                       	   docs[doc_livre].valor := valor;
                                       	   docs[doc_livre].juros := juros;
				     	   WRITELN('Documento cadastrado com sucesso');
				     	   doc_livre := doc_livre + 1;
				    	   END;
				END;
			  END;
		READLN;
		END;
	IF op = 3
	THEN BEGIN
		WRITE('Digite o c¢digo do cliente a ser exclu°do ');
		READLN( codigo);
		achou := 0;
		FOR i := 1 TO 15 DO
		BEGIN
		IF clientes[i].cod_cli = codigo
		THEN BEGIN
                     achou := 1;
                     posi := i;
                     END;
		END;
		IF achou = 0
		THEN WRITELN('N∆o existe cliente cadastrado com esse c¢digo')
		ELSE BEGIN
			 achou := 0;
			 FOR i := 1 TO 30 DO
			 BEGIN
			 IF docs[i].cod_cli = codigo
			 THEN achou := 1;
			 END;
			 IF achou = 1
			 THEN WRITELN('Este cliente n∆o pode ser exclu°do, existe documento')
			 ELSE BEGIN
				   FOR i := posi TO (cliente_livre-2) DO
				   BEGIN
				   clientes[i].cod_cli := clientes[i+1].cod_cli;
                                   clientes[i].nome := clientes[i+1].nome;
                                   clientes[i].fone := clientes[i+1].fone;
                                   clientes[i].ende := clientes[i+1].ende;
                                   END;
                                   clientes[cliente_livre - 1].cod_cli := 0;
                                   clientes[cliente_livre - 1].nome := '';
                                   clientes[cliente_livre - 1].fone := '';
                                   clientes[cliente_livre - 1].ende := '';
				   cliente_livre := cliente_livre -1;
				   WRITELN('Cliente exclu°do com sucesso');
				  END;
			 END;
		 READLN;
		END;
	IF op = 4
	THEN BEGIN
                WRITE('Digite o n£mero do documento a ser exclu°do ');
		READLN( numero);
		achou := 0;
		FOR i := 1 TO 30 DO
		BEGIN
		IF docs[i].num_doc = numero
		THEN BEGIN
			 achou := 1;
			 posi := i;
			 END;
		END;
		IF achou = 0
		THEN WRITELN('N∆o existe documento cadastrado com esse n£mero')
                ELSE BEGIN
			 FOR i := posi TO (doc_livre - 2) DO
			 BEGIN
			  docs[i].num_doc := docs[i+1].num_doc;
                          docs[i].cod_cli := docs[i+1].cod_cli;
                          docs[i].dv := docs[i+1].dv;
                          docs[i].mv := docs[i+1].mv;
                          docs[i].av := docs[i+1].av;
                          docs[i].dp := docs[i+1].dp;
                          docs[i].mp := docs[i+1].mp;
                          docs[i].ap := docs[i+1].ap;
                          docs[i].valor := docs[i+1].valor;
                          docs[i].juros := docs[i+1].juros;
		         END;
                         docs[doc_livre - 1].num_doc := 0;
                         docs[doc_livre - 1].cod_cli := 0;
                         docs[doc_livre - 1].dv := 0;
                         docs[doc_livre - 1].mv := 0;
                         docs[doc_livre - 1].av := 0;
                         docs[doc_livre - 1].dp := 0;
                         docs[doc_livre - 1].mp := 0;
                         docs[doc_livre - 1].ap := 0;
                         docs[doc_livre - 1].valor := 0;
                         docs[doc_livre - 1].juros := 0;
			 WRITELN('Documento exclu°do com sucesso');
			 doc_livre := doc_livre - 1;
			 END;
		READLN;
		END;
	IF op = 5
	THEN BEGIN
		WRITE('Digite o c¢digo do cliente do qual deseja excluir os documentos ');
		READLN( codigo);
		achou := 0;
		FOR i := 1 TO 15 DO
		BEGIN
		IF clientes[i].cod_cli = codigo
		THEN achou := 1;
		END;
		IF achou = 0
		THEN WRITELN('N∆o existe cliente cadastrado com esse c¢digo')
		ELSE BEGIN
			 IF doc_livre = 1
			 THEN WRITELN('N∆o existe nenhum documento cadastrado')
			 ELSE BEGIN
				 k := 1;
                                 achou := 0;
			 	 WHILE (k <= (doc_livre - 1)) DO
				 BEGIN
                                 IF codigo = docs[k].cod_cli
				 THEN BEGIN
                                         achou := 1;
					 FOR i := k TO (doc_livre - 2) DO
					  BEGIN
				 	  docs[i].num_doc := docs[i+1].num_doc;
                               	 	  docs[i].cod_cli := docs[i+1].cod_cli;
                               	 	  docs[i].dv := docs[i+1].dv;
                               	 	  docs[i].mv := docs[i+1].mv;
                               	 	  docs[i].av := docs[i+1].av;
                               	 	  docs[i].dp := docs[i+1].dp;
                               	 	  docs[i].mp := docs[i+1].mp;
                               	 	  docs[i].ap := docs[i+1].ap;
                               	 	  docs[i].valor := docs[i+1].valor;
                               	 	  docs[i].juros := docs[i+1].juros;
					  END;
                                         docs[doc_livre - 1].num_doc := 0;
                                         docs[doc_livre - 1].cod_cli := 0;
                                         docs[doc_livre - 1].dv := 0;
                                         docs[doc_livre - 1].mv := 0;
                                         docs[doc_livre - 1].av := 0;
                                         docs[doc_livre - 1].dp := 0;
                                         docs[doc_livre - 1].mp := 0;
                                         docs[doc_livre - 1].ap := 0;
                                         docs[doc_livre - 1].valor := 0;
                                         docs[doc_livre - 1].juros := 0;
					 doc_livre := doc_livre - 1;
					 k := 1;
					END
				 ELSE k := k + 1;
				 END;
                                 IF achou = 1
                                 THEN WRITELN('Documentos exclu°dos com sucesso')
                                 ELSE WRITELN('N∆o existe documento cadastrado para este cliente');
			 	END;
			END;
		READLN;
		END;
	IF op = 6
	THEN BEGIN
		 WRITELN('Digite a data inicial dos documentos que ser∆o exclu°dos');
                 WRITE('dia ==> ');
		 READLN(dia_inicial);
                 WRITE('mes ==> ');
		 READLN(mes_inicial);
                 WRITE('ano ==> ');
		 READLN(ano_inicial);
		 WRITELN('Digite a data final dos documentos que ser∆o exclu°dos');
                 WRITE('dia ==> ');
		 READLN(dia_final);
                 WRITE('mes ==> ');
		 READLN(mes_final);
                 WRITE('ano ==> ');
		 READLN(ano_final);
                 achou := 0;
		 FOR i := 1 TO 30 DO
		 BEGIN
                 IF (docs[i].av >= ano_inicial) AND (docs[i].av <= ano_final)
		  THEN IF (docs[i].mv >= mes_inicial) AND (docs[i].mv <= mes_final)
			    THEN IF (docs[i].dv >= dia_inicial) AND (docs[i].dv <= dia_final)
				      THEN BEGIN
					        posi := i;
                                                achou := 1;
					       END;
                  IF achou = 1
                  THEN BEGIN
		  FOR j := posi TO (doc_livre - 2) DO
		  BEGIN
	 	  docs[j].num_doc := docs[j+1].num_doc;
       	 	  docs[j].cod_cli := docs[j+1].cod_cli;
       	 	  docs[j].dv := docs[j+1].dv;
       	 	  docs[j].mv := docs[j+1].mv;
       	 	  docs[j].av := docs[j+1].av;
       	 	  docs[j].dp := docs[j+1].dp;
       	 	  docs[j].mp := docs[j+1].mp;
       	 	  docs[j].ap := docs[j+1].ap;
       	 	  docs[j].valor := docs[j+1].valor;
       	 	  docs[j].juros := docs[j+1].juros;
                  END;
                  docs[doc_livre - 1].num_doc := 0;
                  docs[doc_livre - 1].cod_cli := 0;
                  docs[doc_livre - 1].dv := 0;
                  docs[doc_livre - 1].mv := 0;
                  docs[doc_livre - 1].av := 0;
                  docs[doc_livre - 1].dp := 0;
                  docs[doc_livre - 1].mp := 0;
                  docs[doc_livre - 1].ap := 0;
                  docs[doc_livre - 1].valor := 0;
                  docs[doc_livre - 1].juros := 0;
		  doc_livre := doc_livre - 1;
                  END
                  END;
                IF achou = 0
                THEN WRITELN('N∆o existe documento cadastrado neste per°odo')
                ELSE WRITELN('Documentos do per°odo exclu°dos com sucesso');
		READLN;
		END;
	IF op = 7
	THEN BEGIN
		WRITE('Digite o c¢digo do cliente a ser alterado ');
		READLN( codigo);
		achou := 0;
		FOR i := 1 TO 15 DO
		BEGIN
		IF clientes[i].cod_cli = codigo
		THEN BEGIN
                        achou := 1;
			posi:= i;
			END;
		END;
		IF achou = 0
		THEN WRITELN('N∆o existe cliente cadastrado com esse c¢digo para ser alterado')
		ELSE BEGIN
		 	WRITE('Digite o novo nome do cliente ');
		 	READLN(nome);
		 	WRITE('Digite o novo telefone do cliente ');
		 	READLN( fone);
		 	WRITE('Digite o novo endereco do cliente ');
		 	READLN( ende);
		 	clientes[posi].nome := nome;
			clientes[posi].fone := fone;
			clientes[posi].ende := ende;
			WRITELN('Cliente alterado com sucesso');
			END;
		READLN;
		END;
	IF op = 8
	THEN BEGIN
                WRITE('Digite o c¢digo do cliente do qual deseja totalizar os documentos ');
		READLN( codigo);
		achou := 0;
		FOR i := 1 TO 15 DO
		BEGIN
		IF clientes[i].cod_cli = codigo
		THEN achou := 1;
		END;
		IF achou = 0
		THEN WRITELN('N∆o existe cliente cadastrado com esse c¢digo')
		ELSE BEGIN
			 total := 0;
			 FOR i := 1 TO 30 DO
		 	 BEGIN
			 IF docs[i].cod_cli = codigo
			 THEN BEGIN
                                  total := total + docs[i].valor;
				  total := total + docs[i].juros;
				  END;
			 END;
			 WRITELN('Total dos documentos do cliente de c¢digo ', codigo,' = ', total:5:2);
			 END;
		READLN;
		END;
UNTIL  OP = 9;
END.
