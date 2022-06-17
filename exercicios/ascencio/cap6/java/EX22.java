import java.util.Scanner;

public class EX22
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int conta[] = new int[10];
     float saldo[] = new float[10];
     int i, j, codigo, op;
     float valor, soma;
     boolean achou;

     for (i=0;i<10;i++)
     {
       System.out.println("Digite o codigo da " + (i+1) + "a conta");

       do
       { achou = false;
         conta[i] = entrada.nextInt();
         for (j=0;j<i;j++)
         { if (conta[i] == conta[j])
              { System.out.println("Codigo repetido. Digite novamente");
                achou = true;
              }  
         }
       } while (achou ==  true);
       System.out.println("Digite o saldo da " + (i+1) + "a conta");       
       saldo[i] = entrada.nextFloat();
     }
     do
     { System.out.println("Digite sua opcao: \n1- Depósito \n2- Saque \n3- Mostrar ativo bancário \n4- Finalizar programa");       
       op = entrada.nextInt();
       achou = false;
       if (op == 1)
          { System.out.println("Digite o codigo da conta desejada");
            codigo = entrada.nextInt();
            System.out.println("Digite o valor do depósito");
            valor = entrada.nextFloat();            
            for (i=0;i<10;i++)
            { if (codigo == conta[i])
                 { saldo[i] = saldo[i] + valor;
                   achou = true;
                   System.out.println("Depósito efetuado");                   
                 }
            }
           
           if (achou == false)
               System.out.println("Conta não cadastrada");
          }     

       if (op == 2)
          { System.out.println("Digite o codigo da conta desejada");
            codigo = entrada.nextInt();
            System.out.println("Digite o valor do saque");
            valor = entrada.nextFloat();            
            for (i=0;i<10;i++)
            { if (codigo == conta[i])
                 { if (saldo[i] < valor)
                      System.out.println("Saldo insuficiente");
                   else
                      { saldo[i] = saldo[i] - valor;
                        System.out.println("Saque efetuado");
                      }
                   achou = true;
                 }       
            }     
 
            if (achou == false)
               System.out.println("Conta não cadastrada");
          }     

       if (op == 3)
          {
            soma = 0;
            for (i=0;i<10;i++)
            { 
              soma = soma + saldo[i];
            }
            System.out.println("Ativo bancario = " + soma);
          }
       if (op < 1 || op > 4)
          System.out.println("Opção inválida");
   } while (op != 4);
  }
}                       