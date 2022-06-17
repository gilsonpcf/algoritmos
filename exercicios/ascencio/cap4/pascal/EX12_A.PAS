PROGRAM EX12;
USES CRT;
VAR salario, aumento, novo_sal: REAL;
        cargo: INTEGER;
BEGIN
 {Limpa a tela}
 CLRSCR;
 {Mostra mensagem solicitando o cardo do funcion rio}
 WRITELN('Digite o cargo do funcion rio (1,2,3,4 ou 5)');
 {Recebe o cargo do funcion rio}
 READLN(cargo);
 {Mostra mensagem solicitando o valor do sal rio}
 WRITELN('Digite o valor do sal rio: ');
 {Recebe o valor do sal rio}
 READLN(salario);
 {Mostra o cargo e o novo sal rio de acordo com o cargo}
 IF cargo = 1
 THEN BEGIN
    	WRITELN('O cargo ‚ Escritur rio ');
      	aumento := salario * 50 / 100;
      	WRITELN('O valor do aumento ‚: ',aumento:5:2);
      	novo_sal := salario + aumento;
      	WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
       END
 ELSE IF cargo = 2
	THEN BEGIN
      		WRITELN('O cargo ‚ Secret rio');
		aumento := salario * 35 / 100;
		WRITELN('O valor do aumento ‚: ',aumento:5:2);
		novo_sal := salario + aumento;
		WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
      	     END
 	ELSE IF cargo = 3
		THEN BEGIN
                  	WRITELN('O cargo ‚ Caixa ');
	          	aumento := salario * 20 / 100;
	          	WRITELN('O valor do aumento ‚: ',aumento:5:2);
	          	novo_sal := salario + aumento;
	          	WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
	             END
		ELSE IF cargo = 4
	  		THEN BEGIN
                             	WRITELN('O cargo ‚ Gerente ');
	    	          	aumento := salario * 10 / 100;
	    	          	WRITELN('O valor do aumento ‚: ',aumento:5:2);
	    	          	novo_sal := salario + aumento;
	    	          	WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
	  	             END
            		ELSE IF cargo = 5
	    			THEN BEGIN
                                	WRITELN('O cargo ‚ Diretor ');
	      		           	aumento := salario * 0 / 100;
                                        WRITELN('O valor do aumento ‚: ',aumento:5:2);
	      		           	novo_sal := salario + aumento;
	      		           	WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
			             END
	 			ELSE WRITELN('Cargo Inexistente !');
{P ra o programa a espera de um ENTER}
READLN;
END.
