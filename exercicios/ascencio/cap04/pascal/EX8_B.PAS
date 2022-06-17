PROGRAM EX8;
USES CRT;
VAR num1,num2,soma, raiz: REAL;
        op: INTEGER;
BEGIN
 {Limpa a tela}
 CLRSCR;
 {Mostra o menu de op‡oes}
 WRITELN('MENU');
 WRITELN('1- Somar dois n£meros');
 WRITELN('2- Raiz quadrada de um n£mero');
 WRITE('Digite sua op‡ao: ');
 {Recebe a op‡ao do usu rio}
 READLN(op);
 {Executa a op‡ao escolhida}
 IF op = 1
   THEN BEGIN
      	WRITELN('Digite um valor para o primeiro n£mero: ');
      	READLN(num1);
	WRITELN('Digite um valor para o segundo n£mero: ');
	READLN(num2);
	soma := num1 + num2;
      	WRITELN('A soma de ',num1:4:2,' e ' ,num2:4:2,' ‚ ', soma:4:2);
    	END
   ELSE IF op = 2
    	THEN BEGIN
      	  	WRITELN('Digite um valor: ');
      	  	READLN(num1);
      	  	raiz := SQRT(num1);
  		WRITELN('A raiz quadrada de ',num1:4:2, ' ‚ ',raiz:4:2);
   	     END
 	ELSE WRITELN('Op‡ao inv lida !');
{P ra o programa a espera de um ENTER}
READLN;
END.
