public class EXEMP10
{
 public static void main (String[] args)
 {
   int i;
   String texto="aula";   
   char nova[] = texto.toCharArray();
   StringBuffer frase = new StringBuffer();
   System.out.println("Trabalhando com CHAR");
   for(i=0;i<nova.length;i++)
   System.out.println("Caractere da posição "+i+" = " +nova[i]);
   System.out.println("Primeiro caractere = "+nova[0]);
   System.out.println("Trabalhando com STRING");
   for(i=0;i<texto.length();i++)
   System.out.println("Caractere da posição "+i+" = " +texto.charAt(i));
   System.out.println("Primeiro caractere = " +texto.charAt(0));
   System.out.println("Trabalhando com STRINGBUFFER");
   frase.append(texto);
   frase.setCharAt(0,'A');
   System.out.println("Texto após trocar o caractere da posição 0 = "+frase);
   frase.reverse();
   System.out.println("Frase invertida = "+frase);
 }
}
