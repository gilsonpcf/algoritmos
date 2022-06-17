PROGRAM EX24;
USES CRT;
VAR op: INTEGER;
        sal, imp, aum, novo_sal: REAL;
BEGIN
  REPEAT
    CLRSCR;
      WRITELN('1- Imposto ');
      WRITELN('2- Novo Sal rio ');
      WRITELN('3- Classifica‡Ao ');
      WRITELN('4- Finalizar o programa ');
      WRITELN('Digite a op‡Ao desejada ');
      READLN(op);
      IF ((op < 1) OR (op > 4))
        THEN WRITELN('Op‡Ao inv lida !')
        ELSE BEGIN
	        IF (op = 1)
	         THEN BEGIN
                        WRITELN('Digite o valor do sal rio ');
		        READLN(sal);
		        IF (sal < 500)
		   	THEN imp := sal * 5 / 100;
		        IF ((sal >= 500) AND (sal <= 850))
		   	THEN imp := sal * 10 / 100;
		        IF (sal > 850)
		   	THEN imp := sal * 15 / 100;
		        WRITELN('Valor do imposto a ser pago =' ,imp:5:2);
	      	        END;
	        IF (op = 2)
		THEN BEGIN
	      		 WRITELN('Digite o valor do sal rio ');
			 READLN(sal);
			 IF (sal > 1500)
		   	   THEN aum := 25;
			 IF ((sal >= 750) AND (sal <= 1500))
		   	   THEN aum := 50;
			IF ((sal >= 450) AND (sal <750))
		   	   THEN aum := 75;
			IF (sal < 450)
		   	   THEN aum := 100;
			novo_sal := sal + aum;
			WRITELN('Valor do sal rio com aumento = ',novo_sal:5:2);
	      		END;
	       IF (op = 3)
	          THEN BEGIN
                        WRITELN('Digite o valor do sal rio ');
			READLN(sal);
			IF (sal <= 700)
		   	 THEN WRITELN('Mal Remunerado ')
			 ELSE WRITELN('Bem Remunerado ');
	      		END;
	 END;
      READLN;
   UNTIL op = 4;
END.
