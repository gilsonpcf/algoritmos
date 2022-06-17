import java.util.Scanner;
import java.text.*;

public class EX10
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     String gabarito[] = new String[8];
     String resposta;     
     int num, pontos, tot_ap, i, j;
     double perc_ap;
     
     DecimalFormat casas;
     casas = new DecimalFormat ("0.00");     
     
     for (i=0;i<8;i++)
     { 
       System.out.println("Digite a resposta da questão " + (i+1) + ": ");
       gabarito[i] = entrada.next();
     }  
     tot_ap = 0;
     for (i=1;i<=10;i++)
     { System.out.println("Digite o numero do "+ i + "o aluno: ");
       num = entrada.nextInt();
       pontos = 0;
       for (j=0;j<8;j++)
        { System.out.println("Digite a resposta dada pelo aluno "+ num + " a "+ (j+1) + "a questão: ");
          resposta = entrada.next();
          if (resposta.equalsIgnoreCase(gabarito[j]))
             pontos++;
             
        }     
       System.out.println("A nota do aluno "+ num + " foi = "+ pontos);
       if (pontos >= 6)
          tot_ap++;
     }     
     perc_ap = tot_ap * 100 / 10;
     System.out.println("Percentual de alunos aprovados = "+ casas.format(perc_ap) + "%");
  }
}  