public class EXEMP17
{
 public static void main (String[] args)
 {
   int x = 5;
   long w = 6L;
   float y = 5.4f;
   double z = 10.56;
   String teste;
   char numero;
   teste = String.valueOf(x);
   System.out.println("Valor de x como String = "+teste);
   teste = String.valueOf(w);
   System.out.println("Valor de w como String = "+teste);
   teste = String.valueOf(y);
   System.out.println("Valor de y como String = "+teste);
   teste = String.valueOf(z);
   System.out.println("Valor de z como String = "+teste);
   numero = Character.forDigit(x,10);
   System.out.println("Valor de x como Character = "+numero);
 }
}
