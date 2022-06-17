import java.util.Scanner;
public class EX8
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int X[] = new int[5];
     int Y[] = new int[5];     
     int R[] = new int[10];     
     int i, j, z, aux;
     for (i=0;i<5;i++)
     { System.out.println("Digite o " + (i+1) + "o elemento do vetor X: ");
       X[i] = entrada.nextInt();
     }
     for (i=0;i<5;i++)
     { for (j=0;j<4;j++)
        { if (X[j] > X[j+1])
            { aux = X[j];
              X[j] = X[j+1];
              X[j+1] = aux;
            }
        }
     }
     for (i=0;i<5;i++)
     { System.out.println("Digite o " + (i+1) + "o elemento do vetor Y: ");
       Y[i] = entrada.nextInt();
     }     
     for (i=0;i<5;i++)
     { for (j=0;j<4;j++)     
         { if (Y[j] > Y[j+1])
            { aux = Y[j];
              Y[j] = Y[j+1];
              Y[j+1] = aux;
            }
        }
     }
     j = 0;
     for (i=0;i<5;i++)
       { R[j] = X[i];
         j++;
         R[j] = Y[i];
         j++; 
       }

     for (i=0;i<10;i++)
     { for (j=0;j<9;j++)
         { if (R[j] > R[j+1])
              { aux = R[j];
                R[j] = R[j+1];
                R[j+1] = aux;
              }
         }
     }           
     System.out.println("\nVetor X ordenado \n");
     for (i=0;i<5;i++)
     { System.out.println(X[i] + "\n");
     }
     System.out.println("\nVetor Y ordenado \n");
     for (i=0;i<5;i++)
     { System.out.println(Y[i] + "\n");
     }

     System.out.println("\nVetor Resultante \n");
     for (i=0;i<10;i++)
     { System.out.println(R[i] + "\n");
     }
  }
}  