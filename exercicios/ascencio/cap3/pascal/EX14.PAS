PROGRAM EX14;
USES CRT;
VAR ano_atual, ano_nascimento, idade_atual, idade_2050: INTEGER;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do ano atual}
WRITELN('Digite o ano atual');
{Recebe o ano atual}
READLN(ano_atual);
{Mensagem antes da leitura do ano de nascimento}
WRITELN('Digite o ano de nascimento');
{Recebe o ano de nascimento}
READLN(ano_nascimento);
{Calcula a idade atual}
idade_atual := ano_atual - ano_nascimento;
{Calcula a idade em 2050}
idade_2050 := 2050 - ano_nascimento;
{Mostra a idade atual}
WRITELN('Idade atual = ',idade_atual);
{Mostra a idade em 2050}
WRITELN('Idade em 2050 = ',idade_2050);
{P ra o programa a espera de um enter}
READLN;
END.
