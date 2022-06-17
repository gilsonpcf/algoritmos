import java.util.Scanner;
public class EX18
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
	Paciente pac[] = new Paciente[20];
	int op, i, j, cont_p;
  	float maior_peso=0, peso_ideal, dif;
	String nome_aux="";
	cont_p = 0;

	do
      { System.out.print("\n1-Cadastrar paciente");
		System.out.print("\n2-Determinar paciente mais pesada");
		System.out.print("\n3-Mostrar pacientes acima do peso ideal");
		System.out.print("\n4-Mostrar pacientes abaixo do peso ideal");
		System.out.print("\n5-Finalizar");
		System.out.print("\nDigite sua opcao: ");
		op = entrada.nextInt();
		switch (op)
		 { case 1: if (cont_p < 20)
					   { entrada = new Scanner(System.in);
					     pac[cont_p] = new Paciente();
					     System.out.print("\nDigite o nome do paciente: ");
						 pac[cont_p].nome = entrada.nextLine();
						 do {
							  System.out.print("\nDigite o sexo do paciente (M ou F): ");
							  pac[cont_p].sexo = entrada.nextLine().charAt(0);
							  pac[cont_p].sexo = Character.toUpperCase(pac[cont_p].sexo);
							} while ((pac[cont_p].sexo != 'F') && (pac[cont_p].sexo != 'M'));
						 System.out.print("\nDigite a idade do paciente: ");
						 pac[cont_p].idade = entrada.nextInt();
						 System.out.print("\nDigite a altura do paciente (em metros): ");
						 pac[cont_p].altura = entrada.nextFloat();
						 System.out.print("\nDigite o peso do paciente (em Kg): ");
						 pac[cont_p].peso = entrada.nextFloat();
						 cont_p++;
						 System.out.print("\nPaciente cadastrado com sucesso\n");
						}
					else
						System.out.print("\nJa foram cadastrados 20 pacientes!\n");
					break;
		case 2: if (cont_p == 0)
				   System.out.print("\nNao existe paciente cadastrado\n");
				else
					{ for (i=0;i<cont_p;i++)
						 { if (i==0)
							  { maior_peso = pac[i].peso;
								nome_aux = pac[i].nome;
							  }
							else
								{ if (pac[i].peso > maior_peso)
									 { maior_peso = pac[i].peso;
									   nome_aux = pac[i].nome;
									 }
								}
						 }
					   System.out.print("\nNome do paciente mais pesado: " + nome_aux);
					   System.out.print("\nPeso: " + maior_peso +"\n");
					}
				break;
		case 3: for (i=0;i<cont_p;i++)
					{ if (pac[i].sexo == 'F')
						 peso_ideal = (float) ((62.1 * pac[i].altura) - 44.7);
					  else
						 peso_ideal = (float) ((72.7 * pac[i].altura) - 58);
						 if (pac[i].peso > peso_ideal)
							{ dif = pac[i].peso - peso_ideal;
							  System.out.print("\nNome do paciente: " + pac[i].nome);
							  System.out.print("\nSexo do paciente: " + pac[i].sexo);
							  System.out.print("\nIdade do paciente: " + pac[i].idade);
							  System.out.print("\nAltura do paciente (em metros): " + pac[i].altura);
							  System.out.print("\nPeso do paciente (em Kg): " + pac[i].peso);
							  System.out.print("\nPrecisa emagrecer " + dif + " Kg para tingir seu peso ideal\n");
							}
					}
				break;
		case 4: j = 0;
				for (i=0;i<cont_p;i++)
					{ if (pac[i].sexo == 'F')
						 peso_ideal = (float) ((62.1 * pac[i].altura) - 44.7);
					  else
						 peso_ideal = (float) ((72.7 * pac[i].altura) - 58);
						 if (pac[i].peso < peso_ideal)
							{ j = 1;
							  dif = peso_ideal - pac[i].peso;
							  System.out.print("\nNome do paciente: " + pac[i].nome);
							  System.out.print("\nSexo do paciente: " + pac[i].sexo);
							  System.out.print("\nIdade do paciente: " + pac[i].idade);
							  System.out.print("\nAltura do paciente (em metros): " + pac[i].altura);
							  System.out.print("\nPeso do paciente (em Kg): " + pac[i].peso);
							  System.out.print("\nPrecisa adquirir " + dif + " Kg para atingir seu peso ideal\n");
							 }
					}
				if (j == 0)
				   System.out.print("\nNenhuma pessoa esta abaixo do peso\n");
		} //fim switch()
	} while (op!=5);
} //fim main
	private static class Paciente
	{ public String nome;
	  public char sexo;
	  public int idade;
	  public float altura;
	  public float peso;
	}
}
