PROGRAM EX8;
USES CRT;
VAR i, num_termos, num1, num2, num3: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite o n£mero de termos da seqÅància');
READLN(num_termos);
num1 := 2;
num2 := 7;
num3 := 3;
i := 1;
IF i <= num_termos
THEN BEGIN
     	WRITELN(num1);
       	i := i + 1;
       	IF i <= num_termos
	  THEN BEGIN
               WRITELN(num2);
	    	i := i + 1;
	    	IF i <= num_termos
		THEN BEGIN
	       		WRITELN(num3);
		 	i := i + 1;
	       		END;
	  	END;
     END;
  WHILE i <= num_termos DO
	BEGIN
    	num1 := num1 * 2;
      	WRITELN(num1);
      	i := i + 1;
      	IF i <= num_termos
	 THEN BEGIN
                num2 := num2 * 3;
	   	WRITELN(num2);
	   	i := i + 1;
	   	IF i <= num_termos
	      	THEN BEGIN
                     num3 := num3 * 4;
			WRITELN(num3);
			i := i + 1;
	      	          END;
	  	END;
     	END;
 READLN;
END.
