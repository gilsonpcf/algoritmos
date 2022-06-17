import java.util.Scanner;

public class EX23
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int corredor[] = new int[24];
     int janela[] = new int[24];
     boolean achou;
     char posicao;
     int i, num, op; 

     for (i=0;i<24;i++)     
     { corredor[i] = 0;
       janela[i] = 0;
     }  

     do
     { System.out.println("1- Vender passagem \n2- Mostrar mapa de ocupação do ônibus \n3- Encerrar");
       op = entrada.nextInt();
       if (op == 1)
          { achou = false;
            for (i=0;i<24;i++)
            { if (corredor[i] == 0 || janela[i] == 0)
                 achou = true;
            }     
            if (achou == false)
               System.out.println("Ônibus lotado");
            else
               { do
                  { System.out.println("Digite J se deseja poltrona na janela ou C se deseja poltrona no corredor");
                    posicao = entrada.next().charAt(0);
                  } while (posicao != 'J' && posicao != 'C');
                 do
                  { System.out.println("Digite o numero da poltrona desejada (entre 1 e 24)");
                    num = entrada.nextInt();
                  } while (num < 1 || num > 24);
                 num = num - 1; //é necessário diminuir 1 unidade porque os indices em java começa em zero
                 if (posicao == 'J' && janela[num] == 0)
                    {  System.out.println("Venda efetivada");
                       janela[num] = 1;
                    }   
                 else
                     if (posicao == 'C' && corredor[num] == 0)
                        {  System.out.println("Venda efetivada");
                           corredor[num] = 1;
                        }   
                     else
                         System.out.println("Poltrona ocupada");
               } 
         }          
       if (op == 2)
          { System.out.println("  JANELA              CORREDOR");
            for (i=0;i<24;i++) 
            { if (i+1 < 10)
                 System.out.print(" ");
              if (janela[i] == 0)
                 System.out.print((i+1) + "- Livre            ");
              else  System.out.print((i+1) + "- Ocupada          ");
              if (i+1 < 10)
                 System.out.print(" ");
              if (corredor[i] == 0)
                  System.out.println((i+1) + "- Livre");
              else  System.out.println((i+1) + "- Ocupada");
            }  
           }  
    } while (op != 3);
  }
}                       