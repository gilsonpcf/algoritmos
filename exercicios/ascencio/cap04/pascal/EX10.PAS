PROGRAM EX10;
USES CRT;
VAR d1,m1,a1,d2,m2,a2: INTEGER;
BEGIN
 {Limpa a tela}
 CLRSCR;
 {Mostra mensagem solicitando a primeira data}
 WRITELN('Digite a primeira data');
 {Mostra mensagem solicitando o dia da primeira data}
 WRITELN('dia (dd): ');
 {Recebe o dia da primeira data}
 READLN(d1);
 {Mostra mensagem solicitando o mˆs da primeira data}
 WRITELN('mˆs (mm): ');
 {Recebe o mˆs da primeira data}
 READLN(m1);
 {Mostra mensagem solicitando o ano da primeira data}
 WRITELN('ano (aaaa): ');
 {Recebe o ano da primeira data}
 READLN(a1);
 {Mostra mensagem solicitando a segunda data}
 WRITELN('Digite a seguda data ');
 {Mostra mensagem solicitando o dia da segunda data}
 WRITELN('dia (dd): ');
 {Recebe o dia da segunda data}
 READLN(d2);
 {Mostra mensagem solicitando o mˆs da segunda data}
 WRITELN('mˆs (mm): ');
 {Recebe o mˆs da segunda data}
 READLN(m2);
 {Mostra mensagem solicitando o ano da segunda data}
 WRITELN('ano (aaaa): ');
 {Recebe o ano da segunda data}
 READLN(a2);
 {Mostra a data maior}
 IF a1>a2
   THEN WRITELN(' A maior data ‚: ', d1, '-' ,m1,'-', a1)
   ELSE IF a2>a1
      	THEN WRITELN(' A maior data ‚: ', d2,'-',m2,'-',a2)
   	ELSE IF m1>m2
	     THEN WRITELN('A maior data ‚: ',d1,'-',m1,'-',a1)
             ELSE IF m2>m1
	  	  THEN WRITELN('A maior data ‚: ',d2,'-',m2,'-',a2)
                  ELSE IF d1>d2
           	       THEN WRITELN('A maior data ‚: ',d1,'-',m1,'-',a1)
	 	       ELSE IF d2>d1
 			    THEN WRITELN('A maior data ‚: ',d2,'-',m2,'-',a2)
			    ELSE WRITELN('As datas sao iguais !');
 {P ra o programa a espera de um ENTER}
 READLN;
END.
