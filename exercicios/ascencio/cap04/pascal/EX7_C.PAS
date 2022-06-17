PROGRAM EX7;
USES CRT;
VAR A,B,C: REAL;
        I: INTEGER;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o valor de A}
WRITELN('Digite um valor para A: ');
{Recebe o valor de A}
READLN(A);
{Mostra mensagem solicitando o valor de B}
WRITELN('Digite um valor para B: ');
{Recebe o valor de B}
READLN(B);
{Mostra mensagem solicitando o valor de C}
WRITELN('Digite um valor para C: ');
{Recebe o valor de C}
READLN(C);
{Mostra mensagem solicitando o valor de I}
WRITELN('Digite um valor para I (1, 2 ou 3): ');
{Recebe o valor de I}
READLN(I);
{Mostra os n£meros em ordem}
 CASE I OF
 1: BEGIN
    	IF (A<B) AND (A<C)
       	THEN BEGIN
             IF B<C
	  	THEN WRITELN('A ordem crescente ‚: ', A:5:2, ' - ' ,B:5:2,' - ' ,C:5:2)
     		ELSE WRITELN('A ordem crescente ‚: ', A:5:2, ' - ' ,C:5:2,' - ' ,B:5:2);
             END;
    	IF (B<A) AND (B<C)
	THEN BEGIN
             IF A<C
		THEN WRITELN('A ordem crescente ‚: ',B:5:2, ' - ' ,A:5:2,' - ' ,C:5:2)
                ELSE WRITELN('A ordem crescente ‚: ', B:5:2, ' - ' ,C:5:2,' - ' ,A:5:2);
	     END;
    	IF (C<A) AND (C<B)
	THEN BEGIN
             IF A<B
		THEN WRITELN('A ordem crescente ‚: ', C:5:2, ' - ' ,A:5:2,' - ' ,B:5:2)
		ELSE WRITELN('A ordem crescente ‚: ', C:5:2, ' - ' ,B:5:2,' - ' ,A:5:2);
	     END;
  END;
 2: BEGIN
    	IF (A>B) AND (A>C)
	THEN BEGIN
          IF B>C
	 	THEN WRITELN('A ordem decrescente ‚: ',A:5:2, ' - ' ,B:5:2,' - ' ,C:5:2)
    		ELSE WRITELN('A ordem decrescente ‚: ',A:5:2, ' - ' ,C:5:2,' - ' ,B:5:2);
	     END;
    	  IF (B>A) AND (B>C)
	   THEN BEGIN
    	       	IF A>C
             	THEN WRITELN('A ordem decrescente ‚: ',B:5:2, ' - ' ,A:5:2,' - ' ,C:5:2)
            	ELSE WRITELN('A ordem decrescente ‚: ',B:5:2, ' - ' ,C:5:2,' - ' ,A:5:2);
         	END;
    	  IF (C>A) AND (C>B)
	   THEN BEGIN
                IF A>B
	  	THEN WRITELN('A ordem decrescente ‚: ',C:5:2, ' - ' ,A:5:2,' - ' ,B:5:2)
		ELSE WRITELN('A ordem decrescente ‚: ',C:5:2, ' - ' ,B:5:2,' - ' ,A:5:2);
	        END;
    END;
 3: BEGIN
	IF (A>B) AND (A>C)
       	THEN WRITELN('A ordem desejada ‚: ',B:5:2, ' - ' ,A:5:2,' - ' ,C:5:2);
	IF (B>A) AND (B>C)
	THEN WRITELN('A ordem desejada ‚: ',A:5:2, ' - ' ,B:5:2,' - ' ,C:5:2);
	IF (C>A) AND (C>B)
	THEN WRITELN('A ordem desejada ‚: ',A:5:2, ' - ' ,C:5:2,' - ' ,B:5:2);
    END;
END;
{P ra o programa a espera de um ENTER}
READLN;
END.
