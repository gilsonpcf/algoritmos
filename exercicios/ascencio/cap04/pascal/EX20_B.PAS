PROGRAM EX20;
USES CRT;
VAR cod_prod, cod_pais: INTEGER;
    peso_quilos, peso_gramas, pre_total, imposto, valor_total, pre_grama: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o c¢digo do produto}
WRITELN('Digite o c¢digo do produto, um n£mero entre 1 e 10');
{Recebe o c¢digo do produto}
READLN(cod_prod);
{Mostra mensagem solicitando o peso do produto em quilos}
WRITELN('Digite o peso do produto em quilos');
{Recebe o peso do produto}
READLN(peso_quilos);
{Mostra mensagem solicitando o c¢digo do pa¡s}
WRITELN('Digite o c¢digo do pa¡s, um n£mero entre 1 e 3');
{Recebe o c¢digo do pa¡s}
READLN(cod_pais);
{Calcula o peso em gramas}
peso_gramas := peso_quilos * 1000;
{Mostr o peso em gramas}
WRITELN('Peso em gramas = ', peso_gramas:5:2);
{Calcula o pre‡o da grama}
IF (cod_prod >= 1) AND (cod_prod <= 4)
THEN pre_grama := 10
ELSE IF (cod_prod >= 5) AND (cod_prod <= 7)
     THEN pre_grama := 25
     ELSE IF (cod_prod >= 8) AND (cod_prod <= 10)
          THEN pre_grama := 35;
{Calcula o pre‡o total}
pre_total := peso_gramas * pre_grama;
{Mostra o pre‡o total}
WRITELN('Pre‡o total = ',pre_total:5:2);
{Calcula o imposto}
IF cod_pais = 1
THEN  imposto := 0
ELSE IF cod_pais = 2
     THEN imposto := pre_total * 15/100
     ELSE imposto := pre_total * 25/100;
{Mostra o imposto}
WRITELN('Imposto = ',imposto:5:2);
{Calcula o valor total}
valor_total := pre_total + imposto;
{Mostra o valor total}
WRITELN('Valor Total = ',valor_total:5:2);
{P ra o programa a espera de um ENTER}
READLN;
END.
