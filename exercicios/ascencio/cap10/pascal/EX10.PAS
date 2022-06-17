PROGRAM EX10;
USES STRINGS, CRT;
TYPE REGISTRO1 = RECORD
	numero_filial : INTEGER;
nome_filial  : STRING;
END;
TYPE REGISTRO2 = RECORD
numero_filial, cod_func : INTEGER;
salario : REAL;
nome_func, cargo : STRING;
END;
VAR filial: ARRAY[1..4] OF REGISTRO1;
    func: ARRAY[1..20] OF REGISTRO2;
    i, j, livre_filial, livre_func, num_filial,cont, op, achou, numero : INTEGER;
    total_geral, total_filial, sal : REAL;
    nome, cargo: STRING;
BEGIN
FOR i := 1 TO 4 DO
BEGIN
filial[i].numero_filial := 0;
filial[i].nome_filial := '';
END;
FOR i := 1 TO 20 DO
BEGIN
func[i].numero_filial := 0;
func[i].cod_func := 0;
func[i].salario := 0;
func[i].cargo := '';
func[i].nome_func := '';
END;
livre_func := 1;
livre_filial := 1;
total_geral := 0;
REPEAT
CLRSCR;
WRITELN('Menu de Opá‰es');
WRITELN('1 - Cadastrar filial');
WRITELN('2 - Cadastrar funcion†rio');
WRITELN('3 - Consultar filiais');
WRITELN('4 - Sair');
WRITE('Digite a opá∆o desejada ');
READLN(op);
IF op = 1
THEN BEGIN
	WRITELN('Cadastro de filiais');
	IF livre_filial = 5
	THEN WRITELN('Cadastro de filiais lotado')
	ELSE BEGIN
		WRITE('Digite o n£mero da filial ');
		READLN(numero);
		achou := 0;
		FOR i := 1 TO (livre_filial - 1) DO
		BEGIN
		IF filial[i].numero_filial = numero
		THEN achou := 1;
		END;
		IF achou = 1
		THEN WRITELN('J† existe filial cadastrada com este n£mero')
		ELSE BEGIN
			WRITE('Digite o nome da filial ');
			READLN(nome);
			filial[livre_filial].numero_filial := numero;
			filial[livre_filial].nome_filial := nome;
			WRITELN('Filial cadastrada com sucesso!');
			livre_filial := livre_filial + 1;
			END;
		END;
	READLN;
	END;
IF op = 2
THEN BEGIN
	 WRITELN('Cadastro de funcion†rios');
	 IF livre_func = 21
	 THEN WRITELN('Cadastro de funcion†rios lotado')
	 ELSE BEGIN
		  WRITE('Digite o n£mero do funcion†rio a ser cadastrado ');
		  READLN(numero);
		  achou := 0;
		  FOR i := 1 TO (livre_func - 1) DO
			BEGIN
			IF func[i].cod_func = numero
			THEN achou := 1;
			END;
		IF achou = 1
		THEN WRITELN('J† existe funcion†rio cadastrado com este c¢digo')
		ELSE BEGIN
			WRITE('Digite o n£mero da filial deste funcion†rio ');
			READLN(num_filial);
			achou := 0;
			FOR i := 1 TO (livre_filial - 1) DO
				BEGIN
				IF filial[i].numero_filial = num_filial
				THEN achou := 1;
				END;
			IF achou = 0
			THEN WRITELN('Esta filial n∆o est† cadastrada')
			ELSE BEGIN
				cont := 0;
				FOR i := 1 TO (livre_func - 1) DO
					BEGIN
					IF func[i].numero_filial = num_filial
					THEN cont := cont + 1;
					END;
				IF cont = 5
				THEN WRITELN('Esta filial j† est† com todos os funcion†rios')
				ELSE BEGIN
                                        REPEAT
					WRITE('Digite o cargo do funcion†rio ');
					READLN(cargo);
                                        FOR I:=1 TO LENGTH(cargo) DO
                                            cargo[i] := UpCase(cargo[i]);
                                        UNTIL (cargo = 'GERENTE') OR (cargo = 'VENDEDOR');
					IF cargo = 'GERENTE'
					THEN BEGIN
						cont := 0;
						FOR i := 1 TO (livre_func - 1) DO
						BEGIN
						IF (func[i].numero_filial = num_filial)
                                                AND (func[i].cargo = cargo)
						  THEN cont := cont + 1;
						END;
						IF cont = 1
						THEN BEGIN
                                                      WRITELN('Esta filial j† possui gerente');
					             END
                                                ELSE cont := 0;
						END;
					IF cargo = 'VENDEDOR'
					THEN BEGIN
						cont := 0;
						FOR i := 1 TO (livre_func - 1) DO
						BEGIN
						IF (func[i].numero_filial = num_filial)
                                                AND (func[i].cargo = cargo)
						  THEN cont := cont + 1;
						END;
						IF cont = 4
						THEN BEGIN
                                                     WRITELN('Esta filial j† possui 4 vendedores');
						     END
                                                ELSE cont := 0;
						END;
					IF cont = 0
					THEN BEGIN
						WRITE('Digite o sal†rio ');
						READLN(sal);
						WRITE('Digite o nome do funcion†rio ');
						READLN(nome);
						func[livre_func].numero_filial := num_filial;
						func[livre_func].cod_func := numero;
						func[livre_func].salario := sal;
						func[livre_func].cargo := cargo;
						func[livre_func].nome_func := nome;
						WRITELN('Funcion†rio cadastrado com sucesso!');
						livre_func := livre_func + 1;
						END;
					END;
				END;
			END;
		 END;
	READLN;
	END;
IF op = 3
THEN BEGIN
	IF livre_filial = 1
	THEN WRITELN('Cadastro de filiais vazio')
	ELSE IF livre_func = 1
		THEN WRITELN('Cadastro de funcion†rios vazio')
		ELSE BEGIN
                        CLRSCR;
			FOR i := 1 TO (livre_filial - 1) DO
			BEGIN
			WRITELN('Filial n£mero: ', filial[i].numero_filial,' nome: ', filial[i].nome_filial);
			total_filial := 0;
			FOR j := 1 TO (livre_func - 1) DO
				BEGIN
				IF func[j].numero_filial = filial[i].numero_filial
				THEN BEGIN
					WRITE('Funcion†rio: ', func[j].nome_func);
					WRITELN('    Cargo: ', func[j].cargo);
					total_filial := total_filial + func[j].salario;				 					END;
				END;
			WRITELN('Total de sal†rio da filial = ', total_filial:5:2);
			total_geral := total_geral + total_filial;
                        WRITELN;
			END;
			WRITELN('Total dos sal†rios de todas as filiais = ', total_geral:5:2);
			END;
	READLN;
	END;
UNTIL op = 4;
END.
