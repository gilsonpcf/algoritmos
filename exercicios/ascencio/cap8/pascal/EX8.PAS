PROGRAM EX8;
USES CRT;
VAR hora_i, min_i, hora_f, min_f, minutos: INTEGER;

FUNCTION calculo(h_i, m_i, h_f, m_f: INTEGER):INTEGER;
VAR tot_h, tot_m, total: INTEGER;
BEGIN
IF m_f < m_i
   THEN BEGIN
        m_f := m_f + 60;
	h_f := h_f - 1;
	END;
IF h_f < h_i
   THEN h_f := h_f + 24;
tot_h := h_f - h_i;
tot_m := m_f - m_i;
total := tot_h * 60 + tot_m;
calculo := total;
END;
BEGIN
CLRSCR;
gotoxy(2,2);
WRITE('In¡cio do jogo ==> ');
gotoxy(21,2);
READ(hora_i);
gotoxy(24,2);
WRITE(':');
gotoxy(27,2);
READ(min_i);
gotoxy(2,3);
WRITE('Fim do jogo ==> ');
gotoxy(21,3);
READ(hora_f);
gotoxy(24,3);
WRITE(':');
gotoxy(27,3);
READ(min_f);
minutos := calculo(hora_i, min_i, hora_f, min_f);
gotoxy(2,5);
WRITELN('A dura‡ao do jogo foi de ', minutos, ' minutos');
READLN;
READLN;
END.