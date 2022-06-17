PROGRAM  EX21;
USES CRT;
VAR cod_est, cod_carga: INTEGER;
peso_toneladas, peso_quilos, pre_carga, imposto, valor_total: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o c¢digo do estado}
WRITELN('Digite o c¢digo do estado - um n£mero entre 1 e 5');
{Recebe o c¢digo do estado}
READLN(cod_est);
{Mostra mensagem solicitando o peso da carga}
WRITELN('Digite o peso da carga em toneladas');
{Recebe o peso da carga}
READLN(peso_toneladas);
{Mostra mensagem solicitando o c¢digo da carga}
WRITELN('Digite o c¢digo da carga - um n£mero entre 10 e 40');
{Recebe o c¢digo da carga}
READLN(cod_carga);
{Calcula o peso em quilos}
peso_quilos := peso_toneladas * 1000;
{Mostra o peso em quilos}
WRITELN('Peso da carga em quilos = ',peso_quilos:5:2);
{Calcula o pre‡o da carga}
CASE cod_carga OF
10..20: pre_carga := 100 * peso_quilos;
21..30: pre_carga := 250 * peso_quilos;
31..40: pre_carga := 340 * peso_quilos;
END;
{Mostra o pre‡o da carga}
WRITELN('Pre‡o da carga = ',pre_carga:5:2);
{Calcula o imposto}
CASE cod_est OF
1: imposto := pre_carga * 35/100;
2: imposto := pre_carga * 25/100;
3: imposto := pre_carga * 15/100;
4: imposto := pre_carga * 5/100;
ELSE imposto := 0;
END;
{Mostra o imposto}
WRITELN('Valor do imposto = ',imposto:5:2);
{Calcula o valor total}
valor_total := pre_carga + imposto;
{Mostra o valor total}
WRITELN('Valor total da carga = ',valor_total:5:2);
{P ra o programa a espera de um ENTER}
READLN;
END.
