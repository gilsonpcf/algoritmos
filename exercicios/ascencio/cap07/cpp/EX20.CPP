#include <stdio.h>

int main()
{ int num[5][4], num_aux, i, j, k, l, m, n, lin, col;
	for (i=0;i<5;i++)
		{ for (j=0;j<4;j++)
			 { printf("\nDigite um numero ");
			   scanf("%d%*c", &num_aux);
		       if ((i==0) && (j==0))
                   num[i][j]=num_aux;
			   else
				 { k=0;
			       l=0;
				   while ((num[k][l] < num_aux) && ((k!=i) || (l!=j)))
				   	 { l++;
				       if (l>3)
						{ k++;
					      l=0;
						}
					 }
					m=i;
					n=j;
					while ((m!=k) || (n!=l))
					  { if (n-1 < 0)
						 { lin=m-1;
					       col=3;
						 }
						else
						{ lin=m;
						  col=n-1;
						}
						num[m][n]=num[lin][col];
						n=n-1;
						if (n<0)
							{ n=3;
						      m=m-1;
							}
					 } //fim while
				   num[k][l]=num_aux;
		        } //fim else
			 } //fim for
		} //fim for
	for (i=0;i<5;i++)
	{ for (j=0;j<4;j++)
		{  printf("\nElemento da posicao %d-%d = %d", i+1, j+1, num[i][j]);
		}
	}
	getchar();
	return 0;
}

