public class EXEMP18
{
 public static void main (String[] args)
 {
   	   int x,t;
	   long w;
	   float y;
	   double z;
	   String valor;
	   valor = "5";
	   char num = '8';
	   x = Integer.parseInt(valor);
	   System.out.println("x como int = "+x);
	   w = Long.parseLong(valor);
	   System.out.println("w como long = "+w);
	   y = Float.parseFloat(valor);
	   System.out.println("y como float = "+y);
	   z = Double.parseDouble(valor);
	   System.out.println("z como double = "+z);
	   t = Character.digit(num,10);
	   System.out.println("t como int = "+t);
 }
}
