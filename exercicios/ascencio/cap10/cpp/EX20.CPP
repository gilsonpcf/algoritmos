#include <stdio.h>
#include <ctype.h>

int main()
{ struct
    { int idade, filhos;
      float salario;
      char sexo;
    } pessoa;
  float media_id, media_sa1, media_id2, media_fi, maior_sa, soma_sa1, soma_id, soma_fi;
  int menor_id, cont1, cont2;
  soma_sa1 = 0;
  soma_id = 0;
  soma_fi = 0;
  cont1 = 0;
  cont2 = 0;
  menor_id = 0;
  maior_sa = 0;
  printf("\nDigite a idade da pessoa: ");
  scanf("%d%*c", &pessoa.idade);
  while (pessoa.idade > 0)
    { printf("Digite o salario da pessoa: ");
      scanf("%f%*c", &pessoa.salario);
			do
			{ printf("Digite o sexo da pessoa (M ou F): ");
			  scanf("%c%*c", &pessoa.sexo);
			  pessoa.sexo = toupper(pessoa.sexo);
			} while ((pessoa.sexo != 'F') && (pessoa.sexo != 'M'));
      printf("Digite o numero de filhos da pessoa: ");
      scanf("%d%*c", &pessoa.filhos);
	  
      soma_sa1 = soma_sa1 + pessoa.salario;
      cont1 = cont1 + 1;
      soma_fi = soma_fi + pessoa.filhos;
      
      if ((toupper(pessoa.sexo) == 'F') && (pessoa.salario < 700))
		 { soma_id = soma_id + pessoa.idade;
		   cont2 = cont2 + 1;
		 }
		 
      if (cont1 == 1)
	 	 maior_sa = pessoa.salario;
      else
		 if (pessoa.salario > maior_sa)
			maior_sa = pessoa.salario;
			
	  if (cont1 == 1)
		 menor_id = pessoa.idade;
	  else
		 if (pessoa.idade < menor_id)
			menor_id = pessoa.idade;
			
      printf("\nDigite a idade da pessoa: ");
	  scanf("%d%*c", &pessoa.idade);
	} //fim while
	
	if (cont2 > 0)
		 media_id = soma_id / cont2;
	else
		 media_id = 0;
		 
	printf("\nA media de idade das mulheres com salario inferior a R$ 700,00: %6.2f", media_id);
	
	if (cont1 > 0)
		 { media_sa1 = soma_sa1 / cont1;
		   media_fi = soma_fi / cont1;
		 }
	else
		 { media_sa1 = 0;
	       media_fi = 0;
		 }
		 
	printf("\nA media de salarios da populacao: %6.2f", media_sa1);
	printf("\nA media de filhos da populacao: %6.2f", media_fi);
	printf("\nO maior salario da populacao: %6.2f", maior_sa);
	printf("\nA menor idade da populacao: %d", menor_id);
	getchar();
    return 0;
}

