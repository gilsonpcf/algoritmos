PROGRAM EX5;
USES CRT;
VAR precoantigo, precoatual, acrescimo: REAL;

FUNCTION calculo_reajuste(PA, PN:REAL): REAL;
BEGIN
calculo_reajuste := (100 * PN - 100 * PA) / PA;
END;
BEGIN
CLRSCR;
WRITE('Digite o pre‡o antigo: ');
READLN(precoantigo);
WRITE('Digite o pre‡o final: ');
READLN(precoatual);
acrescimo := calculo_reajuste(precoantigo, precoatual);
WRITELN('O reajuste foi de ', acrescimo:5:2, '%');
READLN;
END.