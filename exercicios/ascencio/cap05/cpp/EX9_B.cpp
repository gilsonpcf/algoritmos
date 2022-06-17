#include <stdio.h>
int main()
{ int cont, ta, te, tr;
  float n1, n2, media, media_classe, total_classe;
  total_classe = 0;
  tr = 0;
  te = 0;
  ta = 0;
  cont = 1;
  while (cont<=6)
     { 
       printf("\n\nDigite as duas notas do %dº aluno\n",cont);
       scanf("%f%*c",&n1);
       scanf("%f%*c",&n2);
       media = (n1 + n2) /2;
       printf("\nMédia do %dº aluno = %5.2f",cont,media);
       if (media <= 3)
				{   
                    tr = tr + 1;
					printf("  Reprovado");
				}
	   if (media > 3 && media < 7)
				{ 
                    te = te + 1;
					printf("  Exame");
				}
  	   if (media >= 7)
				{ 
                    ta = ta + 1;
					printf("  Aprovado");
				}
	   total_classe = total_classe + media;
	   cont++;
	 }
	printf("\n\nTotal de reprovados = %d",tr);
	printf("\nTotal de alunos em exame = %d",te);
	printf("\nTotal de aprovados = %d",ta);
	media_classe = total_classe/6;
	printf("\nMédia da classe = %5.2f",media_classe);
	getchar();
	return 0;
}

