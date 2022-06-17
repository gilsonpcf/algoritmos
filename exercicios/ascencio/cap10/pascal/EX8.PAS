PROGRAM EX8;
USES CRT;
TYPE REGISTRO1 = RECORD
     reg, cod_titulo, total_semanal : INTEGER;
     nome : STRING;
     END;
TYPE REGISTRO2 = RECORD
	cod_titulo : INTEGER;
        valor : REAL;
        desc : STRING;
        END;
VAR prof : ARRAY[1..14] OF REGISTRO1;
        titulo : ARRAY[1..5] OF REGISTRO2;
        i, j, achou : INTEGER;
        total_geral : REAL;
BEGIN
CLRSCR;
FOR i := 1 TO 14 DO
BEGIN
prof[i].reg := 0;
prof[i].cod_titulo := 0;
prof[i].total_semanal := 0;
prof[i].nome := '' ;
END;
FOR j := 1 TO 5 DO
BEGIN
titulo[j].cod_titulo := 0;
titulo[j].valor := 0;
titulo[j].desc := '';
END;
WRITELN('Cadastrando os 5 t°tulos');
FOR j := 1 TO 5 DO
BEGIN
WRITELN('Digite o c¢digo do ', j , 'ß t°tulo');
READLN(titulo[j].cod_titulo);
WRITELN('Digite a descriá∆o do ', j , 'ß t°tulo');
READLN(titulo[j].desc);
WRITELN('Digite o valor da hora aula do ', j , 'ß t°tulo');
READLN(titulo[j].valor);
END;
WRITELN('Cadastrando os 14 professores');
FOR i := 1 TO 14 DO
BEGIN
WRITELN('Digite o registro do ', i , 'ß professor');
READLN(prof[i].reg);
WRITELN('Digite o t°tulo do ', i , 'ß professor');
READLN(prof[i].cod_titulo);
achou := 0;
WHILE achou = 0 DO
	BEGIN
	FOR  j := 1 TO 5 DO
	BEGIN
	IF titulo[j].cod_titulo = prof[i].cod_titulo
	THEN achou := 1;
	END;
	IF achou = 0
	THEN BEGIN
                WRITELN('T°tulo n∆o cadastrado, digite novo t°tulo');
		READLN(prof[i].cod_titulo);
	     END;
	END;
WRITELN('Digite a carga hor†ria semanal do ', i , 'ß professor');
READLN(prof[i].total_semanal);
WRITELN('Digite o nome do ', i , 'ß professor');
READLN(prof[i].nome);
END;
WRITELN('Mostrando a relaá∆o de professores');
FOR i := 1 TO 14 DO
BEGIN
WRITE(prof[i].reg, '   ',prof[i].nome,'  ');
FOR j := 1 TO 5 DO
BEGIN
IF prof[i].cod_titulo = titulo[j].cod_titulo
THEN BEGIN
     WRITE(titulo[j].desc, '   ',titulo[j].valor:5:2);
     total_geral := titulo[j].valor * prof[i].total_semanal;
     END;
END;
WRITELN('     ',prof[i].total_semanal,'   ', total_geral:5:2);
END;
READLN;
END.
