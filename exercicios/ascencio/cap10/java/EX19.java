import java.util.Scanner;
public class EX19
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
	Brinquedo brinquedos[] = new Brinquedo[40];    
	int i, cont_b, op, cod_aux, achou;
  	float lucro, perc;
	cont_b = 0;
  	do
    { System.out.print("\n1-Cadastrar brinquedo");
	  System.out.print("\n2-Mostrar lucro");
	  System.out.print("\n3-Mostrar produtos com estoque abaixo do estoque minimo");
	  System.out.print("\n4-Finalizar");
	  System.out.print("\nDigite sua opcao ");
	  op = entrada.nextInt();
	  switch (op)
		{ case 1:if (cont_b == 40)
					System.out.print("Ja foram cadastrados os 40 brinquedos!\n");
				 else
					{ System.out.print("\nDigite o c¢digo do brinquedo: ");
					  cod_aux = entrada.nextInt();
					  i=0;
					  while ((i<cont_b) && (brinquedos[i].cod != cod_aux))
						i++;
					  if (i < cont_b)
						 System.out.print("\nJa existe brinquedo com este codigo!\n");
					  else
						{ entrada = new Scanner(System.in);
						  brinquedos[cont_b] = new Brinquedo();
						  brinquedos[cont_b].cod = cod_aux;
						  System.out.print("Digite a descricao do brinquedo: ");
						  brinquedos[cont_b].descr = entrada.nextLine();
						  System.out.print("Digite a quantidade em estoque: ");
						  brinquedos[cont_b].qtd_est = entrada.nextInt();
						  System.out.print("Digite o estoque m¡nimo aceit vel: ");
						  brinquedos[cont_b].est_min = entrada.nextInt();
						  System.out.print("Digite o preco de compra: ");
						  brinquedos[cont_b].p_compra = entrada.nextFloat();
						  System.out.print("Digite o preco de venda: ");
						  brinquedos[cont_b].p_venda = entrada.nextFloat();
						  cont_b++;
						  System.out.print("\nBrinquedo cadastrado com sucesso\n");
						}
					}
		 		 break;
		case 2: System.out.print("\nDigite o codigo do brinquedo: ");
				cod_aux = entrada.nextInt();
				i=0;
				while ((i<cont_b) && (brinquedos[i].cod!=cod_aux))
					 i++;
				if (i<cont_b)
					 { lucro = brinquedos[i].p_venda - brinquedos[i].p_compra;
						 perc = lucro / brinquedos[i].p_compra * 100;
						 System.out.print("\nPreco de compra: " + brinquedos[i].p_compra + "   Preco de venda: " + brinquedos[i].p_venda);
						 System.out.print("\nO lucro o obtido com a venda: " + lucro);
						 System.out.print("\nEste valor corresponde a " + perc + "%\n");
					 }
			 	else
					System.out.print("\nBrinquedo nao cadastrado!\n");
			 break;
		case 3: achou = 0;
				for (i=0;i<cont_b;i++)
					{ if (brinquedos[i].qtd_est < brinquedos[i].est_min)
						   { System.out.print("\n\nCodigo: " + brinquedos[i].cod);
							 System.out.print("\nDescricao: " + brinquedos[i].descr);
							 System.out.print("\nQuantidade em estoque: " + brinquedos[i].qtd_est);
							 System.out.print("\nEstoque m¡nimo permitido: " + brinquedos[i].est_min +"\n");
							 achou = 1;
							}
					}
				if (achou == 0)
				   System.out.print("\nNao existe produto com estoque abaixo do minimo\n");
		} // fim switch
 } while (op != 4);
} // fim main
	private static class Brinquedo
	{ public int cod;
	  public int qtd_est;
	  public int est_min;
	  public String descr;
	  public float p_compra;
	  public float p_venda;
	}
}
