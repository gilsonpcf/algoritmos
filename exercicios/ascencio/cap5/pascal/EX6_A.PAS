PROGRAM EX6;
USES CRT;
VAR cont, codigo: INTEGER; 
    nht, valor, sal_min, sal_inicial, aux, sal_final: REAL;
    turno, categoria: CHAR;
BEGIN
CLRSCR;
sal_min := 450;
FOR cont := 1 TO 10 DO
BEGIN
WRITELN('Digite o c¢digo do ',cont,'§ funcion rio');
READLN(codigo);
WRITELN('Digite o n£mero de horas trabalhadas do ',cont,'§ funcion rio');
READLN(nht);
WRITELN('Digite o turno de trabalho do ',cont,'§ funcion rio');
READLN(turno);
	WHILE (turno <> 'M') AND (turno <> 'V') AND (turno <> 'N') DO
		BEGIN
		WRITELN('Turno inv lido, digite novamente');
		READLN(turno);
		END;
WRITELN('Digite a categoria do ',cont,'§ funcion rio');
READLN(categoria);
	WHILE (categoria <> 'G') AND (categoria <> 'O') DO
		BEGIN
		WRITELN('Categoria inv lida, digite novamente');
		READLN(categoria);
		END;
	IF categoria = 'G'
	THEN BEGIN
		    IF turno = 'N'
		     THEN valor := 18/100 * sal_min
 		     ELSE valor := 15/100 * sal_min;
	           END
	ELSE BEGIN
		   IF turno = 'N'
		    THEN valor := 13/100 * sal_min
		    ELSE  valor := 10/100 * sal_min;
	          END;
   sal_inicial := nht * valor;
   IF sal_inicial <= 300
      THEN aux := 20/100 * sal_inicial
      ELSE IF sal_inicial < 600
	      THEN aux := 15/100 * sal_inicial
	      ELSE aux := 5/100 * sal_inicial;
   sal_final := sal_inicial + aux;
   WRITELN('C¢digo = ',codigo);
   WRITELN('N£mero de horas trabalhadas = ',nht:5:2);
   WRITELN('Valor do hora trabalhada = ',valor:5:2);
   WRITELN('Sal rio inicial = ',sal_inicial:5:2);
   WRITELN('Aux¡lio comida = ',aux:5:2);
   WRITELN('Sal rio Final = ',sal_final:5:2);
END;
READLN;
END.
