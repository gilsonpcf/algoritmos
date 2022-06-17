import java.util.Scanner;
public class EX6
{
	public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  Funcionário func[];
	  func = new Funcionário[15];
	  int i, pos_maior=-1, mes=0;
	  float maior, pontos, valor_total;
	
	  System.out.println("\nCADASTRANDO OS FUNCIONÁRIOS\n");
	  for (i=0;i<15;i++)
	    { func[i] = new Funcionário();
	      entrada = new Scanner(System.in);
	      System.out.print("\nDigite o nome do " + (i+1) + "º funcionario ");
	      func[i].nome = entrada.nextLine();
	      System.out.print("\nDigite o valor vendido no mes de novembro pelo " + (i+1) + "º funcionario ");
	      func[i].venda_nov = entrada.nextFloat();
	      System.out.print("\nDigite o valor vendido no mes de dezembro pelo " + (i+1) + "º funcionario ");
	      func[i].venda_dez = entrada.nextFloat();
	      System.out.print("\nDigite o valor vendido no mes de janeiro pelo " + (i+1) + "º funcionario ");
	      func[i].venda_jan = entrada.nextFloat();
	    }
	  System.out.println("\nMOSTRANDO AS PONTUACOES MENSAIS DE CADA FUNCIONARIO ");
	  for (i=0;i<15;i++)
	    { System.out.print("\nFuncionario: " + func[i].nome);
	      pontos = func[i].venda_nov/100;
	      System.out.print("\nPontos de novembro = " + pontos);
	      pontos = func[i].venda_dez/100;
	      System.out.print("\nPontos de dezembro = " + pontos);
	      pontos = func[i].venda_jan/100;
	      System.out.print("\nPontos de janeiro = " +  pontos);
	      pontos = func[i].venda_nov/100 + func[i].venda_dez/100 + func[i].venda_jan/100;
	      System.out.print("\nTotal de pontos = " +  pontos + "\n");
	    }
	  System.out.print("\nMOSTRANDO A PONTUACAO TOTAL DO MES DE NOVEMBRO ");
	  pontos = 0;
	  for (i=0;i<15;i++)
	    pontos = pontos + func[i].venda_nov/100;
	  System.out.print(pontos + "\n");
	  
	  System.out.print("\nMOSTRANDO A PONTUACAO TOTAL DO MES DE DEZEMBRO ");
	  pontos = 0;
	  for (i=0;i<15;i++)
	    pontos = pontos + func[i].venda_dez/100;
	  System.out.print(pontos + "\n");
	
	  System.out.print("\nMOSTRANDO A PONTUACAO TOTAL DO MES DE JANEIRO ");
	  pontos = 0;
	  for (i=0;i<15;i++)
	    pontos = pontos + func[i].venda_jan/100;
	  System.out.print(pontos + "\n");
	
	  System.out.print("\nMOSTRANDO A MAIOR PONTUACAO ");
	  maior = 0;
	  for (i=0;i<15;i++)
	    { if (func[i].venda_nov/100 > maior)
			 { maior = func[i].venda_nov/100;
			   pos_maior = i;
			   mes = 1;
			 }
	       if (func[i].venda_dez/100 > maior)
			  { maior = func[i].venda_dez/100;
			    pos_maior = i;
			    mes = 2;
			  }
	       if (func[i].venda_jan/100 > maior)
			  { maior = func[i].venda_jan/100;
			    pos_maior = i;
			    mes = 3;
			  }
	    }
	  System.out.print("\nFuncionario: " + func[pos_maior].nome);
	  System.out.print("\nMaior pontuacao: " + maior);
	  if (mes == 1)
	     System.out.print(" - No mes de novembro\n");
	  if (mes == 2)
	     System.out.print(" - No mes de dezembro\n");
	  if (mes == 3)
	     System.out.print(" - No mes de janeiro\n");
	  
	  System.out.print("\nMOSTRANDO O VALOR TOTAL VENDIDO \n");
	  valor_total = 0;
	  for (i=0;i<15;i++)
	    valor_total = valor_total + func[i].venda_nov + func[i].venda_dez + func[i].venda_jan;
	  System.out.print("\nTotal vendido = " + valor_total);
	}
	private static class Funcionário
	{ public String nome;
	  public float venda_nov;
	  public float venda_dez;
	  public float venda_jan;
	}
}