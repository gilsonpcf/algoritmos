import java.util.Scanner;
public class EX2
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     float qtd[], preco[],tot_geral, tot_vend, comissao, maior;
     qtd = new float[10];
     preco = new float[10];
     int i, ind;
     
     tot_geral= 0;
     for (i=0;i<10;i++)
     { System.out.println("Digite a quantidade vendida do " + (i+1) + "o produto: ");
       qtd[i] = entrada.nextFloat();
       System.out.println("Digite o preco do " + (i+1) + "o produto: ");
       preco[i] = entrada.nextFloat();
     }

     for (i=0;i<10;i++)
     { tot_vend = qtd[i] * preco[i];
       System.out.println("Quandidade vendida do " + (i+1) + "o produto: " + qtd[i] + " Valor do " + + (i+1) + "o produto: " + preco[i] + " Total geral da venda: " + tot_vend);
       tot_geral = tot_geral + tot_vend;
     }  
        
    comissao = tot_geral * 5 /100;
    System.out.println("Valor total das vendas: " + tot_geral + " Valor da comissão: " + comissao);    
    maior = qtd[0];
    ind =  0;
     for (i=0;i<10;i++)
     { if (qtd[i] > maior)
          { maior = qtd[i];
			ind = i;
		  }	
	 }	  
    System.out.println("A maior quantidade encontrada foi " + maior + " referente ao " + (ind+1) + "o produto " );
   }
}      

