PROGRAM EX5;
USES CRT;
TYPE REGISTRO = RECORD
num_horas_trab, valor_hora : REAL;
nome : STRING;
turno, cat : Char;
END;
VAR  func: ARRAY[1..18] OF REGISTRO;
          i, pos_livre, op : INTEGER;
         sal_minimo, sal_inicial, aux_alim, sal_final : REAL;
BEGIN
FOR i := 1 TO 18 DO
BEGIN
func[i].num_horas_trab := 0;
func[i].valor_hora := 0;
func[i].nome := '';
END;
pos_livre := 1;
REPEAT
        CLRSCR;
	WRITELN('Menu de Opá‰es');
	WRITELN('1 - Cadastrar funcion†rios');
	WRITELN('2 - Mostrar folha de pagamento');
	WRITELN('3 - Sair');
	WRITELN('Digite a opá∆o desejada');
	READLN(op);
	IF (op <> 1) AND (op <> 2) AND (op <> 3)
	THEN WRITELN('Opá∆o Inv†lida');
	IF op = 1
	THEN BEGIN
		 IF pos_livre = 19
		 THEN WRITELN('Cadastro de funcion†rios lotado')
		 ELSE BEGIN
		 	  sal_minimo := 380;
		 	  WRITELN('Digite o nome do funcion†rio que deseja incluir');
		 	  READLN(func[pos_livre].nome);
		 	  WRITELN('Digite o n£mero de horas trabalhadas');
		 	  READLN(func[pos_livre].num_horas_trab);
		 	  WRITELN('Digite o turno de trabalho (M-matutino, V-vespertino, N-noturno)');
		 	  READLN(func[pos_livre].turno);
                          func[pos_livre].turno := UpCase(func[pos_livre].turno);
		 	  WHILE (func[pos_livre].turno <> 'M') AND (func[pos_livre].turno  <> 'V')
                                AND (func[pos_livre].turno  <> 'N') DO
                          BEGIN
                          WRITELN('Turno inv†lido. Digite novamente');
                          READLN(func[pos_livre].turno);
                          func[pos_livre].turno := UpCase(func[pos_livre].turno);
                          END;
			  WRITELN('Digite a categoria (O-oper†rio, G-gerente) ');
			  READLN(func[pos_livre].cat);
                          func[pos_livre].cat := UpCase(func[pos_livre].cat);
			  WHILE (func[pos_livre].cat <> 'O') AND (func[pos_livre].cat <> 'G') DO
			  BEGIN
			  WRITELN('Categoria inv†lida. Digite novamente');
			  READLN(func[pos_livre].cat);
                          func[pos_livre].cat := UpCase(func[pos_livre].cat);
			  END;
			  IF func[pos_livre].cat  = 'G'
			  THEN IF func[pos_livre].turno =  'N'
			   	  THEN func[pos_livre].valor_hora := sal_minimo * 18/100
			   	  ELSE func[pos_livre].valor_hora := sal_minimo * 15/100;
			  IF func[pos_livre].cat  = 'O'
			  THEN IF func[pos_livre].turno = 'N'
			   	  THEN func[pos_livre].valor_hora := sal_minimo * 13/100
			   	  ELSE func[pos_livre].valor_hora := sal_minimo * 10/100;
			  WRITELN('Funcion†rio cadastrado com sucesso');
			  pos_livre := pos_livre + 1;
			END;
	        END;
	IF op = 2
	THEN BEGIN
		 WRITELN('Folha de Pagamento');
		 IF pos_livre = 1
		 THEN WRITELN('N∆o existe funcion†rio cadastrado')
		 ELSE BEGIN
		 	  FOR  i := 1 TO (pos_livre - 1) DO
			  BEGIN
			  WRITELN('NOME = ',func[i].nome);
                          WRITELN('NÈMERO DE HORAS TRABALHADAS = ',func[i].num_horas_trab:5:2);
                          WRITELN('VALOR DA HORA TRABALHADA = ',func[i].valor_hora:5:2);
			  sal_inicial := func[i].num_horas_trab * func[i].valor_hora;
			  WRITELN('SALµRIO INICIAL = ',sal_inicial:5:2);
			  IF sal_inicial <= 300
			  THEN aux_alim := sal_inicial * 20/100
			  ELSE IF sal_inicial < 600
				 THEN aux_alim := sal_inicial * 15/100
 				  ELSE aux_alim := sal_inicial * 5/100;
			  WRITELN('AUX÷LIO ALIMENTAÄ«O = ',aux_alim:5:2);
			  sal_final := sal_inicial + aux_alim;
			  WRITELN('SALµRIO FINAL = ',sal_final:5:2);
                          WRITELN('Tecle enter');
                          READLN;
			  END;
			  END;
	        END;
READLN;
UNTIL op = 3;
END.
