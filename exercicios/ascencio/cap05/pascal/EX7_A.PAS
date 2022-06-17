PROGRAM EX7;
USES CRT;
VAR cont, num1, num2, res: INTEGER;
BEGIN
CLRSCR;
num1 := 0;
num2 := 1;
WRITELN(num1);
WRITELN(num2);
FOR cont := 3 TO 8 DO
	BEGIN
	res := num1 + num2;
	WRITELN(res);
	num1 := num2;
	num2 := res;
	END;
READLN;
END.
