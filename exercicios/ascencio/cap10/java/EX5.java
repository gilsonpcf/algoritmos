import java.util.Scanner;
public class EX5
{
public static void main(String args[])
{ Scanner entrada = new Scanner(System.in);
  Funcionário func[];
  func = new Funcionário[18];
   
  int i, pos_livre, op;
  float sal_minimo, sal_inicial, aux_alim, sal_final;

  for (i=0;i<18;i++)
    { func[i] = new Funcionário();
      func[i].num_horas_trab = 0;
      func[i].valor_hora = 0;
      func[i].nome = "";
      func[i].turno = ' ';
      func[i].cat = ' ';
    }

  pos_livre = 0;
  do
    { System.out.print("\nMenu de Opcoes");
      System.out.print("\n1 - Cadastrar funcionarios");
      System.out.print("\n2 - Mostrar folha de pagamento");
      System.out.print("\n3 - Sair");
      System.out.print("\nDigite a opcao desejada ");
      op = entrada.nextInt();
      
      if ((op != 1) && (op != 2) && (op != 3))
		  System.out.print("\nOpcao Invalida");
      if (op == 1)
		 { if (pos_livre == 18)
		      System.out.println("\nCadastro de funcionarios lotado");
		   else
		      { sal_minimo = 380;
				entrada = new Scanner(System.in);

				System.out.print("\nDigite o nome do funcionario que deseja incluir ");
				func[pos_livre].nome = entrada.nextLine();

				System.out.print("\nDigite o numero de horas trabalhadas ");
				func[pos_livre].num_horas_trab = entrada.nextInt();
				entrada = new Scanner(System.in);				

				System.out.print("\nDigite o turno de trabalho (M-matutino, V-vespertino, N-noturno) ");
				func[pos_livre].turno = entrada.nextLine().charAt(0);
				func[pos_livre].turno = Character.toUpperCase(func[pos_livre].turno);

				while ((func[pos_livre].turno != 'M') && (func[pos_livre].turno != 'V') && (func[pos_livre].turno != 'N'))
				    { System.out.print("\nTurno invalido, digite novamente (M-matutino, V-vespertino, N-noturno) ");
				      func[pos_livre].turno = entrada.nextLine().charAt(0);
				      func[pos_livre].turno = Character.toUpperCase(func[pos_livre].turno);
				    }

				System.out.print("\nDigite a categoria (O-operario, G-gerente) ");
				func[pos_livre].cat = entrada.nextLine().charAt(0);
				func[pos_livre].cat = Character.toUpperCase( func[pos_livre].cat);
				while ((func[pos_livre].cat != 'O') && (func[pos_livre].cat != 'G'))
				   { System.out.print("\nCategoria invaida, digite novamente (O - operario, G-gerente) ");
				     func[pos_livre].cat = entrada.nextLine().charAt(0);
				     func[pos_livre].cat = Character.toUpperCase( func[pos_livre].cat);
				   }
				if (func[pos_livre].cat == 'G')
				   if (func[pos_livre].turno == 'N')
				      func[pos_livre].valor_hora = sal_minimo * 18/100;
				   else
				      func[pos_livre].valor_hora = sal_minimo * 15/100;
				if (func[pos_livre].cat == 'O')
				   if (func[pos_livre].turno == 'N')
				      func[pos_livre].valor_hora = sal_minimo * 13/100;
				   else
				      func[pos_livre].valor_hora = sal_minimo * 10/100;
				System.out.println("\nFuncionario cadastrado com sucesso");
				pos_livre++;
		      }
		 }

      if (op == 2)
		 { System.out.println("\nFolha de Pagamento");
		   if (pos_livre == 0)
		      { System.out.print("\nNao existe funcion rio cadastrado");
		      }
		   else
		      { for (i=0;i<pos_livre; i++)
				  { System.out.print("\nNome = " + func[i].nome);
				    System.out.print("\nNumero de horas trabalhadas = " + func[i].num_horas_trab);
				    System.out.print("\nValor da hora trabalhada = " + func[i].valor_hora);
				    sal_inicial = func[i].num_horas_trab * func[i].valor_hora;
				    System.out.print("\nSalario inicial = " + sal_inicial);
				    if (sal_inicial <= 300)
				       aux_alim = sal_inicial * 20/100;
				    else
				       if (sal_inicial < 600)
						  aux_alim = sal_inicial * 15/100;
				       else
						  aux_alim = sal_inicial * 5/100;
				    System.out.print("\nAuxilio alimentacao = " + aux_alim);
				    sal_final = sal_inicial + aux_alim;
				    System.out.print("\nSalario final = " + sal_final + "\n");
				  }
		      }
		 }
    } while (op != 3);
}
	private static class Funcionário
		{ public float num_horas_trab;
		  public float valor_hora;
		  public String nome;
		  public char turno;
		  public char cat;
		}
}
