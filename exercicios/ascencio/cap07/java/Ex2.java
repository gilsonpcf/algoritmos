import java.util.Scanner;
public class Ex2
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
   
    float notas[][], menor;
    int q1, q2, q3, prova_menor, i, j;
    
    notas = new float[10][3];
     
	for (i=0;i<10;i++)
	  { for (j=0;j<3;j++)
		 { System.out.print("\nDigite a "+(j+1)+"a nota do aluno "+ (i+1) + " ");
		   notas[i][j]= entrada.nextFloat();
		 }
      }
     q1 = 0;
     q2 = 0;
     q3 = 0;
     for (i=0;i<10;i++)
      { System.out.println("\nAluno número "+ (i+1));
        menor = notas[i][0];
        prova_menor = 0;
        for (j=0;j<3;j++)
          { if (notas[i][j] < menor)
             { menor = notas[i][j];
               prova_menor = j;
             }
          }
        System.out.println("\nA menor nota do aluno " + (i+1) + " foi na " + (prova_menor+1) + "a prova ");
        if (prova_menor == 0)
            q1 = q1 + 1;
        if (prova_menor == 1)
            q2 = q2 + 1;
        if (prova_menor == 2)
           q3 = q3 + 1;
      }
     System.out.println("\nQuantidade de alunos com menor nota na prova 1 = " + q1);
     System.out.println("\nQuantidade de alunos com menor nota na prova 2 = " + q2);
     System.out.println("\nQuantidade de alunos com menor nota na prova 3 = " + q3);
        
  }
}
