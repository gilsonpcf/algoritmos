import java.util.Scanner;
public class EX5
{
  public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  float pre�oantigo, pre�oatual, acr�scimo;
	  System.out.print("Digite o pre�o antigo: ");
	  pre�oantigo = entrada.nextInt();
	  System.out.print("Digite o pre�o final: ");
	  pre�oatual = entrada.nextInt();	  
	  acr�scimo = c�lculo_reajuste(pre�oantigo, pre�oatual);
      System.out.println("\nO reajuste foi de " + acr�scimo + "%");	  
	}

  public static float c�lculo_reajuste(float PA, float PN)
	{ float result;
      result = (100 * PN - 100 * PA) / PA;
      return result;
	}
}	