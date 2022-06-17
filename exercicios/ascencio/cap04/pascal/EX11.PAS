PROGRAM EX11;
USES CRT;
VAR hora_i, min_i, hora_f, min_f, hora_d, min_d: INTEGER;
BEGIN
 {Limpa a tela}
 CLRSCR;
 {Mostra mensagem solicitando o hor rio inicial}
 WRITELN('Digite o hor rio inicial ');
 {Mostra mensagem solicitando a hora inicial}
 WRITELN('hora: ');
 {Recebe a hora inicial}
 READLN(hora_i);
 {Mostra mensagem solicitando os minutos iniciais}
 WRITELN('minuto: ');
 {Recebe os minutos iniciais}
 READLN(min_i);
 {Mostra mensagem solicitando o hor rio final}
 WRITELN('Digite o hor rio final ');
 {Mostra mensagem solicitando a hora final}
 WRITELN('hora: ');
 {Recebe a hora final}
 READLN(hora_f);
 {Mostra mensagem solicitando os minutos finais}
 WRITELN('minuto: ');
 {Recebe os minutos finais}
 READLN(min_f);
 {Calcula a dura‡ao do jogo}
 IF min_i > min_f
    THEN BEGIN
  	  min_f := min_f + 60;
      	  hora_f := hora_f - 1;
    	  END;
 IF hora_i > hora_f
    THEN hora_f := hora_f + 24;
 min_d := min_f - min_i;
 hora_d := hora_f - hora_i;
 {Mostra a dura‡ao do jogo}
 WRITELN('O jogo durou ',hora_d,' hora(s) e ',min_d,' minuto(s)');
 {P ra o programa a espera de um ENTER}
 READLN;
END.
