import java.util.*;

public class EXEMP5
{
 public static void main (String[] args)
 {
 String frase;
 char letra;
 String nova;
 int posi;
 Scanner entrada;
 System.out.println("Digite uma frase");
 entrada = new Scanner(System.in);
 frase = entrada.nextLine();
 System.out.print("Digite a letra a ser procurada na frase = ");
 letra = entrada.next().charAt(0);
 posi = frase.indexOf(letra);
 
 System.out.println("PROCURANDO UMA LETRA DO IN�CIO PARA O FIM");
 if (posi == -1)
 System.out.println("A letra procurada n�o se encontra na frase digitada");
 else
 System.out.println("A letra "+letra+" tem primeira ocorr�ncia na posi��o "+posi+" da frase digitada");
 posi = frase.indexOf(letra,25);
 if (posi == -1)
 System.out.println("A letra procurada n�o se encontra na frase digitada ap�s a posi��o 25");
 else
 System.out.println("A letra "+letra+" ocorre pela primeira vez,ap�s a posi��o 25, na posi��o "+posi+" da frase digitada");
 	
 System.out.println("PROCURANDO UMA LETRA DO FIM PARA O COME�O");
 posi = frase.lastIndexOf(letra);
 if (posi == -1)
 System.out.println("A letra procurada n�o se encontra na frase digitada");
 else
 System.out.println("A letra "+letra+" tem primeira ocorr�ncia na posi��o "+posi+" da frase digitada");
 posi = frase.lastIndexOf(letra,25);
 if (posi == -1)
 System.out.println("A letra procurada n�o se encontra na frase digitada antes da posi��o 25");
 else
 System.out.println("A letra "+letra+" ocorre pela primeira vez, antes da posi��o 25, na posi��o "+posi); 

System.out.print("Digite a palavra a ser procurada na frase = ");
nova = entrada.next();
posi = frase.indexOf(nova);

System.out.println("PROCURANDO UMA STRING DO IN�CIO PARA O FIM");
if (posi == -1)
System.out.println("A palavra procurada n�o se encontra na frase digitada");
else
System.out.println("A palavra "+nova+" come�a na posi��o "+posi+" da frase digitada");
posi = frase.indexOf(nova,25);
if (posi == -1)
System.out.println("A palavra procurada n�o se encontra na frase digitada ap�s a posi��o 25");
else
System.out.println("A palavra "+nova+" come�a pela primeira vez, ap�s a posi��o 25, na posi��o "+posi+" da frase digitada");
System.out.println("PROCURANDO UMA STRING DO FIM PARA O COME�O");
posi = frase.lastIndexOf(nova);
if (posi == -1)
System.out.println("A palavra procurada n�o se encontra na frase digitada");
else
System.out.println("A palavra "+nova+" come�a na posi��o "+posi+" da frase digitada");
posi = frase.lastIndexOf(nova,25); 
if (posi == -1)
System.out.println("A palavra procurada n�o se encontra na frase digitada antes a posi��o 25");
else
System.out.println("A palavra "+nova+" come�a pela primeira vez, antes da posi��o 25, na posi��o "+posi); 
 }
}
