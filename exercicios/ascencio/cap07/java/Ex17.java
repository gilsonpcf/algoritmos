import java.util.Scanner;
public class Ex17
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat[][], i, j, dp, lin_ac, col_ac, lin_ab, col_ab, num, r, cont_dp, cont_ac, cont_ab;

	  mat = new int[5][5];

	  dp = 0;
	  lin_ac = 0;
	  col_ac = 1;
	  lin_ab = 1;
	  col_ab = 0;
	  cont_dp = 0;
	  cont_ac = 0;
	  cont_ab = 0;

	  while ((cont_ac < 10) || (cont_ab < 10) || (cont_dp < 5))
		{ System.out.print("\nDigite um numero: ");
	      num = entrada.nextInt();
	      r = num%5;
	      if (r == 0)
			 { if (cont_dp < 5)
			      { mat[dp][dp] = num;
					dp++;
					cont_dp++;
			      }
			   else
			      { System.out.println("\nNao existe mais espaço para multiplos de 5 ");
			      }
			 }
	      else
			 { r = num%11;
			   if (r == 0)
			      { if (cont_ac < 10)
					   { mat[lin_ac][col_ac] = num;
					     col_ac++;
					     if (col_ac > 4)
							{ lin_ac++;
							  col_ac = lin_ac + 1;
							}
					     cont_ac++;
					   }
					else
					   { System.out.println("\nNao existe mais espaço para multiplos de 11 ");
					   }
			      }
			   else
			      { r = num%13;
					if (r == 0)
					   { if (cont_ab < 10)
							{ mat[lin_ab][col_ab] = num;
							  col_ab++;
							  if (col_ab >= lin_ab)
							     { lin_ab++;
							       col_ab=0;
							     }
		  					  cont_ab++;
							}
					     else
							{ System.out.println("\nNao existe mais espaço para multiplos de 13 ");
							}
				   		}
					else
					   { System.out.println("\nVoce deve digitar um numero multiplo de 5 ou de 11 ou de 13 ");
	   				   }
	      		}
 			}
		} //fim while

	for (i=0;i<5;i++)
	    { for (j=0;j<5;j++)
			{ System.out.print(mat[i][j] + " ");
			}
	      System.out.println("");
	    }
   }
}