import java.util.Scanner;
public class EX20
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
	int x, y, matriz[][];
	  float m;
	  matriz = new int[12][12];
	  for (x=0;x<12;x++)
	    { for (y=0;y<12;y++)
			{ System.out.print("Digite o elemento " + x + "-" + y + " ");
			  matriz[x][y] = entrada.nextInt();
			  matriz[x][y]=y;
			}
	    }
	  m = media_aritmetica(matriz);
	  System.out.println("\n\nA media aritmetica e " + m);
	  
  }

  public static float media_aritmetica(int m[][])
  { int i, j, cont;
    float soma, media;
    soma=0;
    cont=0;
    for (i=1;i<12;i++)
        for (j=11;j>(11-i);j--)
	      { soma = soma+ m[i][j];
			cont++;
	      }
	  media = soma/cont;
	  return media;
  }
}	
