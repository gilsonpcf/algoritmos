#include <stdio.h>
#include <ctype.h>
float calcula_media(float n1, float n2, float n3, char l)
{ float media;
	if (l == 'A')
		 media = (n1+n2+n3)/3;
	else
		 media = (n1*5+n2*3+n3*2)/10;
	return media;
}
int main()
{ float nota1, nota2, nota3, m;
  char letra;
  printf("Digite a 1� nota: ");
  scanf("%f%*c",&nota1);
  printf("Digite a 2� nota: ");
  scanf("%f%*c",&nota2);
  printf("Digite a 3� nota: ");
  scanf("%f%*c",&nota3);
  do
    { 
      printf("Digite uma letra (A-M�dia aritm�tica, P-M�dia ponderada) ");
	  scanf("%c%*c",&letra);
	  letra = toupper(letra);
	} 
  while ((letra != 'A') && (letra != 'P'));
  m = calcula_media(nota1, nota2, nota3, letra);
  if (letra=='A')
	 printf("\nM�dia aritm�tica = %5.2f",m);
	else
	 printf("\nM�dia ponderada = %5.2f",m);
  getchar();
  return 0;
}
