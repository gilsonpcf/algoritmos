PROGRAM EX1;
USES CRT;
VAR i, ano_atual: INTEGER;
    salario, novo_salario, percentual: REAL;
BEGIN
CLRSCR;
WRITELN('Digite o ano atual');
READLN(ano_atual);
salario := 1000;
percentual := 1.5/100;
novo_salario := salario + percentual * salario;
i := 2007;
WHILE i <= ano_atual DO
BEGIN
percentual := 2 * percentual;
novo_salario := novo_salario + percentual * novo_salario;
i := i + 1;
END;
WRITELN('Novo sal rio = ',novo_salario:5:2);
READLN;
END.
