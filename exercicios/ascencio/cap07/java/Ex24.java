import java.util.Scanner;
public class Ex24
{
  public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    float medias[][][], media_aluno, media_turma;
    int i, j, k;

    medias = new float[3][8][4];
	
    for (i=0;i<3;i++)
    { 
      System.out.println("Notas da turma " + (i+1));
	  for (j=0;j<8;j++)
	  {
		for (k=0;k<4;k++)
		  {
			 System.out.print("Média do aluno "+(j+1)+ " na disciplina " + (k+1) + ": ");
			 medias[i][j][k] = entrada.nextFloat();
		  }
	  }
	}	  	 
  
    for (i=0;i<3;i++)
    {
	  for (j=0;j<8;j++)
	  { 
	    media_aluno = 0;
		for (k=0;k<4;k++)
		  {
		  	media_aluno = media_aluno + medias[i][j][k];
		  }
		media_aluno = media_aluno / 4;  
		System.out.println ("A média do aluno "+ (j+1) + " na turma " + (i+1) + " = " + media_aluno);
      }
    }

    for (i=0;i<3;i++)
    {
      media_turma = 0;	
	  for (j=0;j<8;j++)
	  { 
		for (k=0;k<4;k++)
		  {
		  	media_turma = media_turma + medias[i][j][k];
		  }
      }
	 media_turma = media_turma / (8 * 4) ;  
	 System.out.println("A média da turma "+(i+1)+ " = " + media_turma);
      
    }
  }
}  
