PROGRAM EX12;
USES CRT;
VAR frase, nova: STRING;
    tam, i: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase');
READLN(frase);
tam := LENGTH(frase);
nova:='';
FOR i:= tam DOWNTO 1 DO
BEGIN
nova:=nova+copy(frase,i,1);
END;
WRITELN('Nova frase = ',nova);
READLN;
END.
