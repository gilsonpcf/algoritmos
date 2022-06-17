import java.util.Scanner;

public class EX11
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     float temp[] = new float[12];
     float  maior=0, menor=0;
     int cont, maior_mes=0, menor_mes=0;
     
     for (cont=0; cont<12; cont++)
     { System.out.println("Digite a temperatura do mês " + (cont+1) + ": ");
       temp[cont] = entrada.nextFloat();
       if (cont == 0)
          { maior = temp[cont];
            menor = temp[cont];
            maior_mes = cont;
            menor_mes = cont;
          }
       else
          { if (temp[cont] > maior)
               { maior = temp[cont];
                 maior_mes =  cont;
               }
            if (temp[cont] < menor)
               { menor = temp[cont];
                 menor_mes = cont;
               }  
          }
    }     
    System.out.print("\nA maior temperatura foi " + maior + ", ocorrida no mês de ");
    switch (maior_mes+1)
    { case 1:  System.out.println("JANEIRO");
               break;
    
      case 2: System.out.println("FEVEREIRO");
               break; 
      
      case 3: System.out.println("MARCO");
               break;
      
      case 4: System.out.println("ABRIL");
               break;
      
      case 5: System.out.println("MAIO");
               break;
      
      case 6: System.out.println("JUNHO");
               break;
      
      case 7: System.out.println("JULHO");
               break;
      
      case 8: System.out.println("AGOSTO");
               break;
      
      case 9: System.out.println("SETEMBRO");
               break;
      
      case 10: System.out.println("OUTUBRO");
               break;
      
      case 11: System.out.println("NOVEMBRO");
               break;
      
      case 12: System.out.println("DEZEMBRO");
    }

    System.out.print("\nA menor temperatura foi " + menor + ", ocorrida no mês de ");
    switch (menor_mes+1)
    { case 1:  System.out.println("JANEIRO");
               break;
    
      case 2: System.out.println("FEVEREIRO");
               break; 
      
      case 3: System.out.println("MARCO");
               break;
      
      case 4: System.out.println("ABRIL");
               break;
      
      case 5: System.out.println("MAIO");
               break;
      
      case 6: System.out.println("JUNHO");
               break;
      
      case 7: System.out.print("JULHO");
               break;
      
      case 8: System.out.println("AGOSTO");
               break;
      
      case 9: System.out.println("SETEMBRO");
               break;
      
      case 10: System.out.println("OUTUBRO");
               break;
      
      case 11: System.out.println("NOVEMBRO");
               break;
      
      case 12: System.out.println("DEZEMBRO");
   
    }
  }
}