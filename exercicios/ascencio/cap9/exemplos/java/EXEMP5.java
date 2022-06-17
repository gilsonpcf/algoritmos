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
 
 System.out.println("PROCURANDO UMA LETRA DO INÍCIO PARA O FIM");
 if (posi == -1)
 System.out.println("A letra procurada não se encontra na frase digitada");
 else
 System.out.println("A letra "+letra+" tem primeira ocorrência na posição "+posi+" da frase digitada");
 posi = frase.indexOf(letra,25);
 if (posi == -1)
 System.out.println("A letra procurada não se encontra na frase digitada após a posição 25");
 else
 System.out.println("A letra "+letra+" ocorre pela primeira vez,após a posição 25, na posição "+posi+" da frase digitada");
 	
 System.out.println("PROCURANDO UMA LETRA DO FIM PARA O COMEÇO");
 posi = frase.lastIndexOf(letra);
 if (posi == -1)
 System.out.println("A letra procurada não se encontra na frase digitada");
 else
 System.out.println("A letra "+letra+" tem primeira ocorrência na posição "+posi+" da frase digitada");
 posi = frase.lastIndexOf(letra,25);
 if (posi == -1)
 System.out.println("A letra procurada não se encontra na frase digitada antes da posição 25");
 else
 System.out.println("A letra "+letra+" ocorre pela primeira vez, antes da posição 25, na posição "+posi); 

System.out.print("Digite a palavra a ser procurada na frase = ");
nova = entrada.next();
posi = frase.indexOf(nova);

System.out.println("PROCURANDO UMA STRING DO INÍCIO PARA O FIM");
if (posi == -1)
System.out.println("A palavra procurada não se encontra na frase digitada");
else
System.out.println("A palavra "+nova+" começa na posição "+posi+" da frase digitada");
posi = frase.indexOf(nova,25);
if (posi == -1)
System.out.println("A palavra procurada não se encontra na frase digitada após a posição 25");
else
System.out.println("A palavra "+nova+" começa pela primeira vez, após a posição 25, na posição "+posi+" da frase digitada");
System.out.println("PROCURANDO UMA STRING DO FIM PARA O COMEÇO");
posi = frase.lastIndexOf(nova);
if (posi == -1)
System.out.println("A palavra procurada não se encontra na frase digitada");
else
System.out.println("A palavra "+nova+" começa na posição "+posi+" da frase digitada");
posi = frase.lastIndexOf(nova,25); 
if (posi == -1)
System.out.println("A palavra procurada não se encontra na frase digitada antes a posição 25");
else
System.out.println("A palavra "+nova+" começa pela primeira vez, antes da posição 25, na posição "+posi); 
 }
}
