import java.util.Scanner;
public class EX9
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int voo[] = new int[12];
     int lugares[] = new int[12];     
     String origem[] = new String[12];
     String destino[] = new String[12];
     int i, op, op2, num_voo;
     String local;
     
     for (i=0;i<12;i++)
     { System.out.println("Digite o numero do " + (i+1) + "o voo: ");
       voo[i] = entrada.nextInt();
       System.out.println("Digite a origem do " + (i+1) + "o voo: ");
       origem[i] = entrada.next();
       System.out.println("Digite o destino do " + (i+1) + "o voo: ");
       destino[i] = entrada.next();
       System.out.println("Digite a quantidade de lugares do " + (i+1) + "o voo: ");
       lugares[i] = entrada.nextInt();
     }  
    do
    { System.out.println("\n1- Consultar");
      System.out.println("\n2- Reservar");
      System.out.println("\n3- Finalizar");
      System.out.println("\nDigite sua opção: ");
      op = entrada. nextInt();
      if (op == 1)
        { System.out.println("\n1- Consulta por voo");
          System.out.println("\n2- Consulta por origem");
          System.out.println("\n3- Consulta por destino");
          System.out.println("\nDigite sua opcão: ");
          op2 = entrada.nextInt();
          if (op2 == 1)
            { System.out.println("\nDigite o numero de voo: ");
              num_voo = entrada.nextInt();
              i = 0;
              while (i < 12 && voo[i] != num_voo) 
              {
              	 i++;
              }
              if (i == 12)
                { 
                  System.out.println("\nVoo inexistente !");
                }
              else
                { System.out.println("Número do voo: " + voo[i]);
                  System.out.println("Local de origem: " + origem[i]);
                  System.out.println("Local de destino: " + destino[i]);
                  System.out.println("Lugares disponiveis: " + lugares[i]);
                }
             }
           if (op2 == 2)
             { System.out.println("Digite o local de origem: ");
               local = entrada.next();
               for (i=0;i<12;i++)
                 { if (local.equalsIgnoreCase(origem[i]))
                     { System.out.println("\nNúmero do voo: "+ voo[i]);
                       System.out.println("\nLocal de origem: " + origem[i]);
                       System.out.println("\nLocal de destino: "+ destino[i]);
                       System.out.println("\nLugares disponiveis: "+ lugares[i]);
                     }
                 }
             }     
           if (op2 == 3)
              { System.out.println("\nDigite o local de destino: ");
                local = entrada.next();
                for (i=0;i<12;i++)
                  { if (local.equalsIgnoreCase(destino[i]))
                       { System.out.println("\nNúmero do voo: "+ voo[i]);
                         System.out.println("\nLocal de origem: "+ origem[i]);
                         System.out.println("\nLocal de destino: "+ destino[i]);
                         System.out.println("\nLugares disponíveis: "+ lugares[i]);
                       }
                  }
               }
        }                  
   if (op == 2)
     { System.out.println("\nDigite o numero do voo desejado: ");
       num_voo = entrada.nextInt();
       i = 0;
       while (i < 12 && voo[i] != num_voo) 
         { 
           i++;
         }  
       if (i == 12)
         { 
           System.out.println("\nNumero de voo não encontrado !");
         }
       else
         { if (lugares[i] == 0)
              System.out.println("\nVoo lotado !");
           else
              { lugares[i] = lugares[i] - 1;
                System.out.println("\nReserva confirmada !");
              }
         }
      }
  } while (op != 3)              ;
 }
} 