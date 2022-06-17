PROGRAM EX24;
USES CRT;
VAR pre, valor_adic, imposto, pre_custo, desconto, novo_pre: REAL;
        tipo, refrig: CHAR;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o pre‡o do produto}
WRITELN('Digite o pre‡o do produto');
{Recebe o pre‡o do produto}
READLN(pre);
{Mostra mensagem solicitando o tipo do produto}
WRITELN('Digite o tipo do produto, A - Alimenta‡ao, L - Limpeza e V - Vestu rio');
{Recebe o tipo do produto}
READLN(tipo);
{Mostra mensagem solicitando a refrigera‡ao}
WRITELN('Digite S ou N para a necessidade de refrigera‡ao do produto');
{Recebe a refrigera‡ao}
READLN(refrig);
{Calcula o valor adicional}
IF refrig = 'N'
THEN BEGIN
	    IF tipo = 'A'
	    THEN BEGIN
		  IF pre < 15
		  THEN valor_adic := 2
	 	  ELSE valor_adic := 5;
		  END;
	   IF tipo = 'L'
	   THEN BEGIN
		 IF pre < 10
		  THEN valor_adic := 1.50
		  ELSE valor_adic := 2.50;
		 END;
	   IF tipo = 'V'
	   THEN BEGIN
		 IF pre < 30
		 THEN valor_adic := 3
	 	 ELSE valor_adic := 2.5;
		 END;
	END
ELSE BEGIN
   IF tipo = 'A'
	    THEN valor_adic := 8;
	   IF tipo = 'L'
	    THEN valor_adic := 0;
	   IF tipo = 'V'
	    THEN valor_adic := 0;
          END;
{Mostra o valor adicional}
WRITELN('Valor adicional = ',valor_adic:5:2);
{Calcula o imposto}
IF pre < 25
THEN imposto := pre*5/100
ELSE imposto := pre*8/100;
{Mostra o imposto}
WRITELN('Valor do imposto = ',imposto:5:2);
{Calcula o pre‡o de custo}
pre_custo := pre + imposto;
{Mostra o pre‡o de custo}
WRITELN('Valor do pre‡o de custo = ',pre_custo:5:2);
{Calcula o desconto}
IF (tipo <> 'A') AND (refrig <> 'S')
THEN desconto := pre_custo*3/100
ELSE desconto := 0;
{Mostra o desconto}
WRITELN('Valor do desconto =' ,desconto:5:2);
{Calcula o novo pre‡o}
novo_pre := pre + valor_adic - desconto;
{Mostra o novo pre‡o}
WRITELN('Valor do novo pre‡o = ',novo_pre:5:2);
{Mostra a classifica‡ao}
IF novo_pre <= 50
THEN WRITELN('Barato')
ELSE IF novo_pre < 100
	THEN WRITELN('Normal')
	 ELSE WRITELN('Caro');
{P ra o programa a espera de um ENTER}
READLN;
END.
