PROGRAM EXEMPLO11;
     USES CRT;
     VAR TEXTO1 : STRING;
         TAMANHO, I : INTEGER;
     	BEGIN
         {Este exemplo troca todas as vogais da cadeia
          TEXTO1 pelo caractere ?}
         {A vari�vel TEXTO1 recebe a cadeia de caracteres:
          PROGRAMA DE COMPUTADOR}
         TEXTO1:='PROGRAMA DE COMPUTADOR';
         {A fun��o LENGTH retorna o tamanho da cadeia TEXTO1}
         TAMANHO:=LENGTH(TEXTO1);
         {A estrutura de repeti��o abaixo passa por todos os
          caracteres da cadeia TEXTO1}
	   {Cada caractere vogal � substitu�do pelo caractere ?}
         FOR I:=1 TO TAMANHO DO
         BEGIN
              IF (TEXTO1[I] = 'A') OR (TEXTO1[I] = 'E')
              OR (TEXTO1[I] = 'I') OR (TEXTO1[I] = 'O')
              OR (TEXTO1[I] = 'U')
              THEN TEXTO1[I]:='?';
         END;
         {Mostra o conte�do da vari�vel TEXTO1}
         WRITELN('Nova cadeia TEXTO1 = ',TEXTO1);
         READLN;
     END.





