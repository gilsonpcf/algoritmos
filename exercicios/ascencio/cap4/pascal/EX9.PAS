PROGRAM EX9;
USES CRT, DOS;
VAR dia, dia_semana, mes, ano, hora, min, seg, cen_seg: WORD;
  BEGIN
  {Limpa a tela}
  CLRSCR;
  {A fun‡ao GETDATE busca a data do sistema
   e coloca o ano na vari vel ano, o mˆs na vari vel mes,
   o dia na vari vel dia e o dia da semana na vari vel dia_semana,
   sendo que o dia da semana tem o domingo como zero}
   GETDATE(ano, mes, dia, dia_semana);
   {Mostra a data atual}
   {A condicional abaixo mostra o dia com dois d¡gitos}
   IF dia < 10
   THEN WRITE('Data Atual: 0', dia)
   ELSE WRITE('Data Atual: ', dia);
   {A condicional abaixo mostra o mˆs com dois d¡gitos}
   IF mes < 10
   THEN WRITE('/0',mes,'/',ano, ' - ')
   ELSE WRITE('/',mes,'/',ano, ' - ');
   {Mostra o mˆs por extenso}
   CASE mes OF
    1: WRITELN('janeiro');
    2: WRITELN('fevereiro');
    3: WRITELN('mar‡o');
    4: WRITELN('abril');
    5: WRITELN('maio');
    6: WRITELN('junho');
    7: WRITELN('julho');
    8: WRITELN('agosto');
    9: WRITELN('setembro');
    10: WRITELN('outubro');
    11: WRITELN('novembro');
    12: WRITELN('dezembro');
    END;
    {A fun‡ao GETTIME busca a hora do sistema
     e coloca o hora na vari vel hora, os minutos na vari vel
     min, os segundos na vari vel seg e os cent‚simos de segundos
     na vari vel cen_seg}
  GETTIME(hora, min, seg, cen_seg);
  {Mostra a hora do sistema}
  {A condicional abaixo mostra a hora com dois d¡gitos}
  IF hora < 10
  THEN WRITE('Hora Atual: 0',hora)
  ELSE WRITE('Hora Atual: ',hora);
  {A condicional abaixo mostra os minutos com dois d¡gitos}
  IF min < 10
  THEN WRITELN(':0',min)
  ELSE WRITELN(':',min);
  {P ra o programa a espera de um ENTER}
  READLN;
END.
