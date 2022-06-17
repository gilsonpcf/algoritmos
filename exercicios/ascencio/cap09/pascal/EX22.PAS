PROGRAM EX22;
USES CRT,STRINGS;
VAR frase, nova, meio: array[0..100] of char;
    senha: STRING;
    texto: STRING[3];
    tam,i,j,num: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite um nome');
READLN(frase);
tam:=LENGTH(frase);
STRUPPER(frase);
nova[0]:=frase[0];
j:=1;
FOR i:=1 TO tam DO
BEGIN
     if frase[i] = ' '
     THEN BEGIN
          nova[j]:=frase[i+1];
          j:=j+1;
          END;
END;
meio:= nova;
STRLOWER(meio);
FOR i:=0 to j-1 DO
BEGIN
     nova[j]:=meio[i];
     j:=j+1;
END;
senha:='';
FOR i:=0 TO j-1 DO
BEGIN
 num:=ORD(nova[i]);
 str(num,texto);
 senha:=senha+texto;
END;
WRITELN('Login = ',nova);
WRITELN('Senha = ',senha);
READLN;
END.