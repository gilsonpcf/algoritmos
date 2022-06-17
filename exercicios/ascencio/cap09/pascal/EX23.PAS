PROGRAM EX23;
USES CRT;
VAR frase, nova, crip:STRING;
    letra, letra2:STRING;
    l:char;
    tam,i,num: INTEGER;
BEGIN
CLRSCR;
crip:='';
WRITELN('Digite um nome');
READLN(frase);
nova:='';
for i:=1 to length(frase) do
    nova:= nova+UPCASE(frase[i]);
tam:=LENGTH(frase);
i:=1;
WHILE i <= length(nova) DO
BEGIN
     letra:=copy(nova,i,1);
     IF letra = 'X'
     THEN letra2:='A';
     IF letra = 'Y'
     THEN letra2:='B';
     IF letra = 'Z'
     THEN letra2:='C';
     IF letra <> ' '
     THEN BEGIN
          l:=letra[1];
          num:=ORD(l);
          num:=num+3;
          IF (l = 'X') OR (l = 'Y') OR (l = 'Z')
          THEN BEGIN
               l:=letra2[1];
               num:=ORD(l);
               END;
          crip:=crip + CHR(num);
          END;
      IF letra = ' '
      THEN BEGIN
           crip:=crip +  letra;
           END;
i:=i+1;
END;
WRITELN('Frase cripitografada');
WRITELN(crip);
READLN;
END.