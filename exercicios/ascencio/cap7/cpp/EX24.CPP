#include <stdio.h>

int main()
{ float medias[3][8][4], media_aluno, media_turma;
  int i, j, k;

  for (i=0;i<3;i++)
  { 
    printf("\nNotas da turma %d \n", i+1);
    for (j=0;j<8;j++)
    {
  	  for (k=0;k<4;k++)
  	  {
		 printf("\nMédia do aluno %d na discipina %d: ", j+1, k+1);
		 scanf("%f%*c", &medias[i][j][k]);
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
	  printf("\nA média do aluno %d na turma %d = %6.2f", j+1, i+1, media_aluno);
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
   printf("\nA média da turma %d = %6.2f", i+1, media_turma);
  }
  getchar();
  return 0;
}  
