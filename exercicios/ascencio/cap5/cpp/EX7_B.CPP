#include <stdio.h>
int main()
{ int cont, num1, num2, res;
  num1 = 0;
  num2 = 1;
  printf("\n%d",num1);
  printf("\n%d",num2);
  cont = 3;
  do
    { res = num1 + num2;
      printf("\n%d",res);
      num1 = num2;
      num2 = res;
      cont = cont + 1;
    } while (cont < 9);
 getchar();
 return 0;
}
