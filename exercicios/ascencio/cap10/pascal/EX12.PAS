PROGRAM EX12;
USES CRT;
TYPE REGISTRO = RECORD
            hora_ini, min_ini, hora_fim, min_fim: REAL;
END;
VAR tempo: REGISTRO;
    hora_total,min_total,min,seg: REAL;
BEGIN
CLRSCR;
  REPEAT
       WRITE('Digite a hora inicial do jogo: ');
       READLN(tempo.hora_ini);
 UNTIL (tempo.hora_ini <= 23) AND (tempo.hora_ini >= 0);
 REPEAT
       WRITE('Digite o minuto inicial do jogo: ');
       READLN(tempo.min_ini);
 UNTIL (tempo.min_ini <= 59) AND (tempo.min_ini >= 0);
 REPEAT
       WRITE('Digite a hora final do jogo: ');
       READLN(tempo.hora_fim);
 UNTIL (tempo.hora_fim <= 23) AND (tempo.hora_fim >= 0);
 REPEAT
        WRITE('Digite o minuto final do jogo: ');
       READLN(tempo.min_fim);
 UNTIL (tempo.min_fim <= 59) AND (tempo.min_fim >= 0);
 IF (tempo.min_fim < tempo.min_ini)
 THEN BEGIN
    	tempo.min_fim := tempo.min_fim + 60;
       	tempo.hora_fim := tempo.hora_fim - 1;
     END;
 IF (tempo.hora_fim < tempo.hora_ini)
    THEN tempo.hora_fim := tempo.hora_fim + 24;
 hora_total := tempo.hora_fim - tempo.hora_ini;
 min_total := tempo.min_fim - tempo.min_ini;
 WRITELN('A dura‡Æo do jogo foi de: ',hora_total:2:0,' hora(s) e ',min_total:2:0,' minuto(s)');
 min := hora_total * 60 + min_total;
 WRITELN('A dura‡Æo do jogo expressa somente em minutos foi de: ',min:2:0,'  minuto(s)');
 seg := min * 60;
 WRITELN('A dura‡Æo do jogo expressa somente em segundos foi de: ',seg:2:0,' segundo(s)');
 READLN;
END.
