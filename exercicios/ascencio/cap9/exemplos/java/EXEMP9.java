public class EXEMP9
{
 public static void main (String[] args)
 {
   String texto="aula de informática";   
   String nova[];
   nova = texto.split(" ");   
   int tamanho, i;
   tamanho = nova.length;
   for (i=0;i< tamanho; i++)
      {
      	System.out.println(nova[i]);   
      }	
 }
}
