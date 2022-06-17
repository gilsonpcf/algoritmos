import java.util.Scanner;

public class EX20
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     float vet[] = new float[5];
     int i, cod; 

     for (i=0;i<5;i++)
     {
     	System.out.println("Digite o " + (i+1) + "o numero");
     	vet[i] = entrada.nextFloat();
     }

   	 System.out.println("Digite o valor do código (0, 1 ou 2)");
     cod = entrada.nextInt();

     if (cod == 0)
   	    System.out.println("Fim");     

   	 if (cod == 1)
   	    {
          System.out.println("Valores na ordem de digitação");
          for (i=0;i<5;i++)
          {
     	    System.out.println(vet[i]);
     	  }
     	}    

   	 if (cod == 2)
   	    {
          System.out.println("Valores na ordem inversa a da digitação");
          for (i=4;i>=0;i--)
          {
     	    System.out.println(vet[i]);
     	  }
     	}    
     
     if (cod < 0 || cod > 2)
        System.out.println("Código invalido");

   }
}                       