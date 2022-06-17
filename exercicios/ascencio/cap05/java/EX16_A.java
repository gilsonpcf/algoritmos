import java.util.*;
public class EX16_A
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		float base, altura, area;
  		base = 0;
  		while (base <= 0)
     	{ 
     		System.out.println("Digite a medida da base");
       		base = dado.nextFloat();
     	}
  		altura = 0;
  		while (altura <= 0)
     	{ 
     		System.out.println("Digite a medida da altura");
       		altura = dado.nextFloat();
     	}
  		area = base * altura / 2;
		System.out.println("Área = "+area);
  	}
}