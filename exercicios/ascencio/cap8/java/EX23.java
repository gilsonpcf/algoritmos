import java.util.Scanner;
public class EX23
{ 
	public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat[][], vet[], i, j;
	  mat = new int[3][4];
	  vet = new int[12];
	
	  for (i=0; i<3; i++)
  	  {  for (j=0;j<4;j++)
		  {
		  	  System.out.print("Digite o número da posicao " + i + "-" + j + " ");
			  mat[i][j] = entrada.nextInt();
		  }
	  }	
	  gera_vetor(mat, vet);
	  System.out.println("Vetor gerado\n");
	  for (i=0; i<3; i++)
	  { System.out.print("Posiçao " + i + ": " + vet[i]);
	  }
	}

	public static void gera_vetor(int m[][], int v[])
	{ int i, j, k;
	  k = 0;
	  for (i=0; i<3; i++)
	  {  for (j=0;j<4;j++)
		  {  v[k] = m[i][j];
	         k = k + 1;
		  }
	  }
	}
}	   	