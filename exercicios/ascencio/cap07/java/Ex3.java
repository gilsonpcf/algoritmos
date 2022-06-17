import java.util.Scanner;
public class Ex3
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    String lojas[], produtos[];
    float pre[][];
    int i, j;

    lojas = new String[8];
    produtos = new String[4];
    pre = new float[4][8];
  
    for (j=0;j<8;j++)
    { System.out.print("\nDigite o nome da " + (j+1) + "a loja ");
      lojas[j] = entrada.nextLine();
    }
    
    for (i=0;i<4;i++)
    { System.out.print("\nDigite o nome do " + (i+1) + "o produto ");
      produtos[i] = entrada.nextLine();
    }
    
    for (i=0;i<4;i++)
    { for (j=0;j<8;j++)
	  { System.out.print("\nDigite o preço do produto " + produtos[i] + " na loja " + lojas[j] + " ");
        pre[i][j] = entrada.nextFloat();
       }
    }

    System.out.println("\nListagem dos produtos e respectivas lojas cujos preços não ultrapassam R$ 120,00");
    for (i=0;i<4;i++)
    { for (j=0;j<8;j++)
          { if (pre[i][j] < 120)
	            System.out.println("\n" + "Produto: " + produtos[i] + " Loja: " + lojas[j]);
	      }
    }
  }
}  