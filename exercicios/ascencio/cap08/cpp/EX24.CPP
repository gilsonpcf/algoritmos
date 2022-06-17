#include <stdio.h>
int calculo(int n1, int n2, char simbolo);
int main()
{ int num1, num2, res;
  char op;
  printf("Digite o primeiro número: ");
  scanf("%d%*c",&num1);
  printf("Digite o segundo número: ");
  scanf("%d%*c",&num2);
  do
	 { 
       printf("Digite o símbolo da operação desejada (+ ou *) ");
       scanf("%c%*c",&op);      
   } while (op != '+' && op != '*');
  res = calculo(num1, num2, op);
  printf("\nResultado = %d",res);
  getchar();
  return 0;
}      
int calculo(int n1, int n2, char simbolo)
{ int result;
  if (simbolo == '+')
  	 result = n1 + n2;
  else result = n1 * n2;
  return result;
}     	
