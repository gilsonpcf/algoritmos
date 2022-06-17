PROGRAM EX25;
USES CRT;
VAR angulo : INTEGER;
    voltas: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando a medida do ƒngulo}
WRITELN('Digite a medida do ƒngulo: ');
{Recebe o ƒngulo}
READLN(angulo);
{Calcula as voltas}
IF (angulo > 360) OR (angulo < -360)
 THEN BEGIN
        voltas := angulo / 360;
       	angulo := angulo MOD 360;
     	END
  ELSE voltas := 0;
  {Mostra o quadrante}
  IF (angulo = 0) OR (angulo = 90) OR (angulo = 180) OR (angulo = 270) OR (angulo = 360)
     OR (angulo = -90) OR (angulo = -180) OR (angulo = -270) OR (angulo = -360)
  THEN WRITELN('Est  em cima de algum dos eixos');
  IF ((angulo > 0) AND (angulo < 90)) OR ((angulo < -270) AND (angulo > -360))
   THEN WRITELN('1§ Quadrante');
  IF ((angulo > 90) AND (angulo < 180)) OR ((angulo < -180) AND (angulo > -270))
   THEN WRITELN('2§ Quadrante');
  IF ((angulo > 180) AND (angulo < 270)) OR ((angulo < -90) AND (angulo > -180))
   THEN WRITELN('3§ Quadrante');
  IF ((angulo > 270) AND (angulo < 360)) OR ((angulo < 0) AND (angulo > -90))
   THEN WRITELN('4§ Quadrante');
  {Mostra o sentido das voltas}
  WRITE(abs(trunc(voltas)), ' volta(s) no sentido ');
  IF (angulo < 0)
     THEN WRITELN('hor rio')
     ELSE WRITELN('anti-hor rio');
{P ra o programa a espera de um ENTER}
READLN;
END.
