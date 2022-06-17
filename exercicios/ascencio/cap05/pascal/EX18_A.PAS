PROGRAM EX18;
USES CRT;
VAR linhas: INTEGER;
        num, quad, cubo, raiz: REAL;
BEGIN
  CLRSCR;
  GOTOXY(1,1);
  WRITELN('Digite um n£mero ');
  READLN(num);
  linhas := 3;
  GOTOXY(1,linhas);
  WRITELN('Valor');
  GOTOXY(20,linhas);
  WRITELN('Quadrado');
  GOTOXY(40,linhas);
  WRITELN('Cubo');
  GOTOXY(70,linhas);
  WRITELN('Raiz');
  linhas:= linhas + 1;
  WHILE (num > 0) DO
   BEGIN     
   quad := SQR(num);
   cubo := EXP (3 * LN(num));
   raiz:= SQRT(num);
   IF ((linhas-3) <= 20)
     THEN BEGIN
	     GOTOXY(1,linhas);
	     WRITELN(num:5:2);
	     GOTOXY(20,linhas);
	     WRITELN(quad:5:2);
	     GOTOXY(40,linhas);
	     WRITELN(cubo:5:2);
	     GOTOXY(70,linhas);
	     WRITELN(raiz:5:2);
	     linhas := linhas + 1;
	     END
       ELSE BEGIN
	       CLRSCR;
               linhas:=3;
	       GOTOXY(1,linhas);
   	       WRITELN('Valor');
	       GOTOXY(20,linhas);
	       WRITELN('Quadrado');
	       GOTOXY(40,linhas);
	       WRITELN('Cubo');
	       GOTOXY(70,linhas);
	       WRITELN('Raiz');
	       linhas := linhas + 1;
	       GOTOXY(1,linhas);
	       WRITELN(num:5:2);
	       GOTOXY(20,linhas);
	       WRITELN(quad:5:2);
	       GOTOXY(40,linhas);
	       WRITELN(cubo:5:2);
	       GOTOXY(70,linhas);
	       WRITELN(raiz:5:2);
	       linhas := linhas + 1;
            END;
GOTOXY(1,1);
WRITELN('Digite um n£mero ');
CLREOL;
READLN(num);
END;
READLN;
END.
