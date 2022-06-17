PROGRAM EX15;
USES CRT,STRINGS;
VAR NOME:ARRAY[0..80] OF CHAR;
    LOGIN:STRING;
    ACHOU, I, TAM, POSI, QTDE: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite o nome');
READLN(NOME);
TAM:=LENGTH(NOME);
STRLOWER(NOME);
LOGIN:='';
LOGIN:=COPY(NOME,0,1);
QTDE:=0;
FOR I:=0 TO TAM DO
BEGIN
     IF NOME[I] = ' '
     THEN BEGIN
          QTDE:=QTDE+1;
          POSI:=I;
          END;
END;
IF QTDE = 1
THEN LOGIN:=LOGIN+COPY(NOME,POSI+2,TAM-POSI)
ELSE BEGIN
     ACHOU:=0;
     I:=0;
     WHILE (ACHOU = 0) DO
     BEGIN
          IF NOME[I] = ' '
          THEN BEGIN
               ACHOU:=1;
               POSI:=I;
               END;
         I:=I+1;
    END;
    LOGIN:=LOGIN+COPY(NOME,POSI+2,1);
    ACHOU:=0;
    I:=TAM;
     WHILE (ACHOU = 0) DO
     BEGIN
          IF NOME[I] = ' '
          THEN BEGIN
               ACHOU:=1;
               POSI:=I;
               END;
         I:=I-1;
     END;
     LOGIN:=LOGIN+COPY(NOME,POSI+2,TAM-POSI);
     END;
WRITELN('Nome = ',nome);
WRITELN('Login = ',login);
READLN;
END.
