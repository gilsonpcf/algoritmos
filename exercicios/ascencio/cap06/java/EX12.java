import java.util.Scanner;

public class EX12
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     float consumo[] = new float[5], menor_cons=0, valor;
     int i, menor_vei=0;
     String veiculo[] = new String[5];
     for (i=0;i<5;i++)
     { System.out.println("Digite o modelo do " + (i+1) + "o veiculo: ");
       veiculo[i] = entrada.nextLine();
     }
     for (i=0;i<5;i++)
     { System.out.println("Digite o consumo do " + (i+1) + "o veiculo: ");
       consumo[i] = entrada.nextFloat();
       if (i == 0)
          { menor_cons = consumo[i];
            menor_vei = i;
          }
       else
          { if (consumo[i] > menor_cons)
               { menor_cons = consumo[i];
                 menor_vei = i;
               }
          }       
       valor = 1000 / consumo[i];
       System.out.println("O veículo " + veiculo[i] + " consome " + valor + " litro(s) de combustível para percorrer 1000 Km"); 
     }
    System.out.println("O veículo mais econômico é " + veiculo[menor_vei]);
   }
}      