import java.util.*;
public class EX16_B
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		float base, altura, area;
  		do
     	{ 
     		System.out.println("Digite a medida da base");
       		base = dado.nextFloat();
     	}
     	while (base <= 0);
  		do
     	{ 
     		System.out.println("Digite a medida da altura");
       		altura = dado.nextFloat();
     	}
     	while (altura <= 0);
  		area = base * altura / 2;
		System.out.println("Área = "+area);
  	}
}