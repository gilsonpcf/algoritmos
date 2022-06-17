import java.util.Scanner;
public class EX7
{ public static void main(String args[])
{ Scanner entrada = new Scanner(System.in);
  Professor prof[];
  prof = new Professor[10];
  float sal_bruto, desc, sal_liq, ma_masc, ma_fem, soma_masc, soma_fem;
  int qt_masc, qt_fem, i;

  for (i=0;i<10;i++)
     { prof[i] = new Professor();
       prof[i].cod = 0;
       prof[i].num_aula = 0;
       prof[i].sexo = ' ';
     }

   soma_masc = 0;
   soma_fem = 0;
   qt_masc = 0;
   qt_fem = 0;

   System.out.print("\nDigitando os dados dos 10 professores \n");
   for (i=0;i<10;i++)
     { System.out.print("\n" + (i+1) + "o professor");
       System.out.print("\nDigite o codigo ");
       prof[i].cod = entrada.nextInt();
       System.out.print("\nDigite o numero de aulas ");
       prof[i].num_aula = entrada.nextInt();
       System.out.print("\nDigite o sexo ");
       entrada = new Scanner(System.in);
       
       prof[i].sexo = entrada.nextLine().charAt(0);
       prof[i].sexo = Character.toUpperCase(prof[i].sexo);
       while ((prof[i].sexo != 'F') && (prof[i].sexo != 'M'))
		 { System.out.print("\nSexo invalido. Digite F para feminino ou M para masculino ");
		   prof[i].sexo = entrada.nextLine().charAt(0);
		   prof[i].sexo = Character.toUpperCase(prof[i].sexo);
		 }
     }
   System.out.print("\nMostrando a listagem com os salarios dos professores ");
   for (i=0;i<10;i++)
     { System.out.print("\n" + (i+1) + "o professor ");
       System.out.print("\nCodigo = " + prof[i].cod);
       sal_bruto = (float) (40.50 * prof[i].num_aula);
       System.out.print("\nSalario bruto = " + sal_bruto);
       if (prof[i].sexo == 'F')
		  { if (prof[i].num_aula <= 70)
		       desc = sal_bruto * 7/100;
		    else
		       desc = sal_bruto * 5/100;
		  }
       else
		  { if (prof[i].num_aula <= 70)
		       desc = sal_bruto * 10/100;
		    else
		       desc = sal_bruto * 8/100;
		  }
       System.out.print("\nDesconto = " + desc);
       sal_liq = sal_bruto - desc;
       System.out.print("\nSalario liquido = " + sal_liq + "\n");
       if (prof[i].sexo == 'F')
		  { soma_fem = soma_fem + sal_bruto;
		    qt_fem = qt_fem + 1;
		  }
       else
		  { soma_masc = soma_masc + sal_bruto;
		    qt_masc = qt_masc + 1;
		  }
      }
	  if (qt_fem > 0)
	     ma_fem = soma_fem / qt_fem;
	  else
	     ma_fem = 0;
	  if (qt_masc > 0)
	     ma_masc = soma_masc / qt_masc;
	  else
	     ma_masc = 0;
	  System.out.print("\nMedia dos salarios brutos dos professores do sexo feminino = " + ma_fem);
	  System.out.print("\nMedia dos salarios brutos dos professores do sexo masculino = " + ma_masc);
	}

	private static class Professor
	{ public int cod;
	  public int num_aula;
	  public char sexo;
	}
}