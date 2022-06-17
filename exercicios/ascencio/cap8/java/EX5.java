import java.util.Scanner;
public class EX5
{
  public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  float preçoantigo, preçoatual, acréscimo;
	  System.out.print("Digite o preço antigo: ");
	  preçoantigo = entrada.nextInt();
	  System.out.print("Digite o preço final: ");
	  preçoatual = entrada.nextInt();	  
	  acréscimo = cálculo_reajuste(preçoantigo, preçoatual);
      System.out.println("\nO reajuste foi de " + acréscimo + "%");	  
	}

  public static float cálculo_reajuste(float PA, float PN)
	{ float result;
      result = (100 * PN - 100 * PA) / PA;
      return result;
	}
}	