PROGRAM EX11;
USES CRT;
VAR temp: ARRAY[1..12] OF REAL;
        maior, menor: REAL;
        cont, maior_mes, menor_mes: INTEGER;
BEGIN
  CLRSCR;
  FOR cont:=1 TO 12 DO
	BEGIN
     	WRITE('Digite a temperatura do ',cont, '§ mˆs ');
       	READLN(temp[cont]);
       	IF (cont = 1)
	THEN BEGIN
	  	maior := temp[cont];
	    	menor := temp[cont];
	    	maior_mes := cont;
	    	menor_mes := cont;
	          END
       	ELSE BEGIN
	  	IF (temp[cont] > maior)
	       	THEN BEGIN
                        maior := temp[cont];
		 	maior_mes := cont;
	       	     END;
	    	IF (temp[cont] < menor)
	       	THEN BEGIN
                        menor := temp[cont];
		 	menor_mes := cont;
	       	     END;
	        END;
   END;
  WRITE('A maior temperatura foi ',maior:5:2, ' verificada em ');
  IF (maior_mes = 1)
    THEN WRITELN('JANEIRO');
  IF (maior_mes = 2)
    THEN WRITELN('FEVEREIRO');
  IF (maior_mes = 3)
    THEN WRITELN('MAR€O');
  IF (maior_mes = 4)
     THEN WRITELN('ABRIL');
  IF (maior_mes = 5)
    THEN WRITELN('MAIO');
  IF (maior_mes = 6)
    THEN WRITELN('JUNHO');
  IF (maior_mes = 7)
    THEN WRITELN('JULHO');
  IF (maior_mes = 8)
    THEN WRITELN('AGOSTO');
  IF (maior_mes = 9)
    THEN WRITELN('SETEMBRO');
  IF (maior_mes = 10)
    THEN WRITELN('OUTUBRO');
  IF (maior_mes = 11)
    THEN WRITELN('NOVEMBRO');
  IF (maior_mes = 12)
    THEN WRITELN('DEZEMBRO');
  WRITE('A menor temperatura foi ',menor:5:2,' verificada em ');

  IF (menor_mes = 1)
   THEN WRITELN('JANEIRO');
  IF (menor_mes = 2)
   THEN WRITELN('FEVEREIRO');
  IF (menor_mes = 3)
    THEN WRITELN('MAR€O');
  IF (menor_mes = 4)
    THEN WRITELN('ABRIL');
  IF (menor_mes = 5)
    THEN WRITELN('MAIO');
  IF (menor_mes = 6)
     THEN WRITELN('JUNHO');
  IF (menor_mes = 7)
  THEN WRITELN('JULHO');
  IF (menor_mes = 8)
    THEN WRITELN('AGOSTO');
  IF (menor_mes = 9)
     THEN WRITELN('SETEMBRO');
  IF (menor_mes = 10)
    THEN WRITELN('OUTUBRO');
  IF (menor_mes = 11)
    THEN WRITELN('NOVEMBRO');
  IF (menor_mes = 12)
     THEN WRITELN('DEZEMBRO');
  READLN;
END.
