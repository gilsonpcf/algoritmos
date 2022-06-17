import java.util.Scanner;
public class EX14
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
	Barco barcos[];
	barcos = new Barco[6];
    Regata regatas[];
    regatas = new Regata[3];
    Participante barco_reg[];
    barco_reg = new Participante[12];

	int i, j, k, cont_b, cont_r, cont_rb, cont, reg_aux, bar_aux, op;
  	cont_b = 0;
  	cont_r = 0;
  	cont_rb = 0;
  	do
     { System.out.print("\n1-Cadastrar barco");
       System.out.print("\n2-Cadastrar regata");
       System.out.print("\n3-Cadastrar participantes");
       System.out.print("\n4-Cadastrar barco vencedor");
       System.out.print("\n5-Mostrar regatas com seus vencedores");
       System.out.print("\n6-Mostrar participantes de uma regata");
       System.out.print("\n7-Finalizar");
	   System.out.print("\nDigite sua opcao: ");
       op = entrada.nextInt();
       switch (op)
		 { case 1:if (cont_b < 6)
					 { 	System.out.print("\nDigite o numero do barco: ");
						bar_aux = entrada.nextInt();
						 i=0;
						 while ((i<cont_b) && (barcos[i].num_b!=bar_aux))
							 i++;
						 if (i < cont_b)
							System.out.print("\nBarco ja cadastrado!\n");
						 else
							{ entrada = new Scanner(System.in);
							  barcos[cont_b] = new Barco();
							  barcos[cont_b].num_b = bar_aux;
							  System.out.print("Digite o nome do barco: ");
							  barcos[cont_b].nome = entrada.nextLine();
							  System.out.print("Digite o ano de fabricacao do barco: ");
							  barcos[cont_b].ano_f = entrada.nextInt();
							  cont_b++;
							}
					 }
					else
					  System.out.print("\nJa foram cadastrados 6 barcos!\n");
					break;
	 case 2:if (cont_r < 3)
			 { System.out.print("\nDigite o numero da regata: ");
			   reg_aux = entrada.nextInt();
			   i=0;
			   while ((i<cont_r) && (regatas[i].num_r!=reg_aux))
					 i++;
			   if (i < cont_r)
				   System.out.print("\nRegata ja cadastrada!\n");
			   else
				{ entrada = new Scanner(System.in);
				  regatas[cont_r] = new Regata();
				  regatas[cont_r].num_r = reg_aux;
				  System.out.print("Digite a data de realizacao da regata: ");
				  regatas[cont_r].data = entrada.nextLine();
				  System.out.print("Digite a hora de inicio da regata: ");
				  regatas[cont_r].hora_i = entrada.nextInt();
				  regatas[cont_r].cod_venc=0;
				  cont_r++;
				}
			 }
			else
			 	System.out.print("\nJa foram cadastradas 3 regatas!\n");
			break;
	 case 3: System.out.print("\nDigite o codigo da regata: ");
			  reg_aux = entrada.nextInt();
			 i=0;
			 while ((i<cont_r) && (regatas[i].num_r!=reg_aux))
				i++;
			 if (i==cont_r)
				System.out.print("\nRegata nao cadastrada!\n");
			 else
				{ cont=0;
				  for (i=0;i<cont_rb;i++)
					{ if (barco_reg[i].num_r==reg_aux)
							 cont++;
					}
				  if (cont==4)
				  	 System.out.print("\nJa foram cadastrados 4 participantes nesta regata!\n");
				  else
					 { System.out.print("Digite o numero do barco: ");
					   bar_aux = entrada.nextInt();
					   i=0;
					   while ((i<cont_b) && (barcos[i].num_b!=bar_aux))
						   i++;
					   if (i==cont_b)
							System.out.print("\nBarco nao cadastrado!\n");
					    else
							{ i=0;
							  while (i<cont_rb)
								{ if ((bar_aux==barco_reg[i].num_b) && (reg_aux == barco_reg[i].num_r))
									 i=cont_rb + 1;
								  else
									 i++;
								}
							  if (i>cont_rb)
								 System.out.print("\nEste barco ja esta participando desta regata!\n");
							  else
								 { barco_reg[cont_rb] = new Participante();
								   barco_reg[cont_rb].num_r=reg_aux;
								   barco_reg[cont_rb].num_b=bar_aux;
								   System.out.print("Digite a hora da chegada: ");
								   barco_reg[cont_rb].hora_c = entrada.nextInt();
								   cont_rb++;
								 }
							}
					 }
				}
			break;
	 case 4: System.out.print("\nDigite o codigo da regata: ");
			 reg_aux = entrada.nextInt();
			 i=0;
			 while ((i<cont_r) && (regatas[i].num_r!=reg_aux))
				i++;
			 if (i==cont_r)
				System.out.print("\nRegata nao cadastrada!\n");
			 else
				{ System.out.print("Digite o numero do barco: ");
				  bar_aux = entrada.nextInt();
			 	  j=0;
				  while ((j<cont_rb) && ((barco_reg[j].num_b!=bar_aux) || (barco_reg[j].num_r != reg_aux)))
				 	j++;
				  if (j==cont_rb)
					 System.out.print("\nEste barco nao participou desta regata!\n");
				  else
					 regatas[i].cod_venc=bar_aux;
				}
			 break;
	 case 5: for (i=0;i<cont_r;i++)
				 { System.out.print("\nRegata: " + regatas[i].num_r + " Data de realizacao: " + regatas[i].data);
					 if (regatas[i].cod_venc == 0)
						System.out.print("\nAinda nao foi cadastrado o barco vencedor!  \n");
					 else
						{ j=0;
						  while ((j<cont_b) && (regatas[i].cod_venc!=barcos[j].num_b))
						  	  j++;
						  if (j==cont_b)
							 System.out.print("\nBarco vencedor nao cadastrado!\n");
						else
						   System.out.print(" Barco vencedor: " + barcos[j].nome + "\n");
						}
			 }
			break;
	 case 6: System.out.print("\nDigite o numero da regata: ");
			 reg_aux = entrada.nextInt();
			 i=0;
			 while ((i<cont_r) && (regatas[i].num_r!=reg_aux))
				 i++;
			 if (i == cont_r)
				System.out.print("\nRegata nao cadastrada!\n");
			 else
				{ System.out.print("\nParticantes da regata " + regatas[i].num_r + " realizada em " + regatas[i].data);
					for (j=0;j<cont_rb;j++)
						{ if (barco_reg[j].num_r == reg_aux)
							 { k=0;
							   while ((k<cont_b) && (barcos[k].num_b!=barco_reg[j].num_b))
								 k++;
							   if (k<cont_b)
								  System.out.print("\nBarco: " + barcos[k].num_b + " fabricado em " + barcos[k].ano_f);
							 }
					 }
				}
		 } //fim switch
	} while (op!=7);
} //fim main
	private static class Barco
	{ public int num_b;
	  public int ano_f;
	  public String nome;
	}
	
	private static class Regata
	{ public int num_r;
	  public int cod_venc;
	  public int hora_i;
	  public String data;
	}
	
	private static class Participante
	{ public int num_r;
	  public int num_b;
	  public int hora_c;
	}
}
