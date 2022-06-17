import java.util.Scanner;

public class EX14
{ public static void main(String args[])
   { String nome[] = new String[5];
     float sal[] = new float[5], novo_sal;
     int quant[] = new int[5], i;
     
     for (i=0;i<5;i++)
     {  Scanner entrada = new Scanner(System.in);
     	System.out.println("Digite o nome do " + (i+1) + "o funcionario: ");
     	nome[i]=new String();
     	nome[i]= entrada.nextLine();
     	System.out.println("Digite o salário do " + (i+1) + "o funcionario: ");
     	sal[i]= entrada.nextFloat();
     	System.out.println("Digite o tempo de servico do " + (i+1) + "o funcionario: ");
     	quant[i]= entrada.nextInt();
     	entrada.reset();
     }
     for (i=0;i<5;i++)
     { if (quant[i] <= 5 && sal[i] >= 400)
           System.out.println ("Funcionário que nao recebera aumento: " + nome[i]);
     }      
     for (i=0;i<5;i++)
     { if (quant[i] > 5 || sal[i] < 400)
          { if (quant[i] > 5 && sal[i] < 400)
               novo_sal = sal[i] + sal[i] * 35 / 100;
            else if (quant[i] > 5)
            	    novo_sal = sal[i] + sal[i] * 25 / 100;
            	 else novo_sal = sal[i] + sal[i] * 15 / 100;
            System.out.println("Nome do funcionario: " + nome[i] + " Novo salario: " + novo_sal);
          }
     }
   }
}                  