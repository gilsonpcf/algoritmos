PROGRAM EX7;
USES CRT;
VAR frase, frase_nova, palavra1, palavra2: STRING;
    achou, comeco, tam1, tam2, i, j: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase ');
READLN(frase);
frase := frase + ' ';
frase_nova := '';
palavra1:='';
palavra2:='';
tam1:=length(frase);
FOR i :=1 TO tam1 DO
BEGIN
    palavra2:='';
    IF (COPY(frase,i,1) <> ' ')
     THEN BEGIN
          palavra1:= palavra1 + COPY(frase,i, 1);
	  END
      ELSE BEGIN
           tam2:= LENGTH(frase_nova);
	   IF (tam2=0)
	   THEN begin
                frase_nova := palavra1 + ' ';
                end
	   ELSE BEGIN
                achou:=0;
                j := 1;
                comeco := 1;
	    	WHILE  (j<=tam2) AND (achou=0) DO
		BEGIN
		IF (COPY(frase_nova,j,1) <> ' ')
                  THEN BEGIN
		     	palavra2 := palavra2 + COPY(frase_nova, j, 1);
		        j := j + 1;
                       END
		 ELSE BEGIN
                        comeco := j - length(palavra2);
		   	IF palavra1 < palavra2
			THEN BEGIN
                             achou:=1;
                             palavra1:=palavra1+' ';
                             insert(palavra1,frase_nova,comeco);
                             END
                        ELSE palavra2 := '';
                        j := j + 1;
			END;
	       END;
               if achou = 0
               then frase_nova:=frase_nova + palavra1+' ';
	END;
  palavra1:='';
  END;
END;
WRITELN(frase_nova);
READLN;
END.
