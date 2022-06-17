PROGRAM EX12;
USES CRT;
VAR salario, aumento, novo_sal: REAL;
        cargo: INTEGER;
BEGIN
 {Limpa a tela}
 CLRSCR;
 {Mostra mensagem solicitando o c¢digo do cargo}
 WRITELN('Digite o cargo do funcion rio (1,2,3,4 ou 5)');
 {Recebe o c¢digo do cargo}
 READLN(cargo);
 {Mostra mensagem solicitando o valor do sal rio}
 WRITELN('Digite o valor do sal rio: ');
 {Recebe o valor do sal rio}
 READLN(salario);
 {Mostra o cargo e o novo sal rio de acordo com o cargo}
 CASE cargo OF
 1: BEGIN
    	WRITELN('O cargo ‚ Escritur rio ');
      	aumento := salario * 50 / 100;
      	WRITELN('O valor do aumento ‚: ',aumento:5:2);
      	novo_sal := salario + aumento;
      	WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
    END;
 2: BEGIN
     	WRITELN('O cargo ‚ Secret rio');
	aumento := salario * 35 / 100;
	WRITELN('O valor do aumento ‚: ',aumento:5:2);
	novo_sal := salario + aumento;
	WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
    END;
 3: BEGIN
        WRITELN('O cargo ‚ Caixa ');
        aumento := salario * 20 / 100;
        WRITELN('O valor do aumento ‚: ',aumento:5:2);
        novo_sal := salario + aumento;
        WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
   END;
4: BEGIN
       WRITELN('O cargo ‚ Gerente ');
       aumento := salario * 10 / 100;
       WRITELN('O valor do aumento ‚: ',aumento:5:2);
       novo_sal := salario + aumento;
       WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
   END;
5: BEGIN
       WRITELN('O cargo ‚ Diretor ');
       aumento := salario * 0 / 100;
       WRITELN('O valor do aumento ‚: ',aumento:5:2);
       novo_sal := salario + aumento;
       WRITELN('O novo sal rio ‚: ',novo_sal:5:2);
   END;
ELSE WRITELN('Cargo Inexistente !');
END;
{P ra o programa a espera de um ENTER}
READLN;
END.
