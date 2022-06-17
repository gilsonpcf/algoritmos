PROGRAM EX18;
USES CRT;
VAR peso_saco, racao_gato1, racao_gato2, total_final: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do peso do saco de ra‡ao}
WRITE('Digite o peso do saco de ra‡ao em quilos: ');
{Recebe o peso do saco de ra‡ao em quilos}
READLN(peso_saco);
{Mostra mensagem antes da leitura da quantidade de ra‡ao do gato 1}
WRITE('Digite a ra‡ao consumida pelo 1§ gato em gramas: ');
{Recebe a quantidade de ra‡ao do gato 1}
READLN(racao_gato1);
{Mostra mensagem antes da leitura da quantidade de ra‡ao do gato 2}
WRITE('Digite a ra‡ao consumida pelo 2§ gato em gramas: ');
{Recebe a quantidade de ra‡ao do gato 2}
READLN(racao_gato2);
{Converte a quantidade de ra‡ao do gato 1 de gramas para quilos}
racao_gato1 := racao_gato1 / 1000;
{Converte a quantidade de ra‡ao do gato 2 de gramas para quilos}
racao_gato2 := racao_gato2 / 1000;
{Calcula o total final ap¢s 5 dias}
total_final := peso_saco - 5*(racao_gato1 + racao_gato2);
{Mostra o total calculado ap¢s 5 dias}
WRITELN('Total de ra‡ao restante em quilos: ',total_final:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
