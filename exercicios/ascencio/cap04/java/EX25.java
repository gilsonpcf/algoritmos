import java.util.*;
import java.text.*;

public class EX25
{
	public static void main (String args[])
	{
  		int angulo, voltas;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
  		System.out.print("Digite a medida do ângulo: ");
  		angulo = entrada.nextInt(); 
  		if (angulo > 360 || angulo < -360) 
     	 { 
     	 	voltas = angulo / 360;
       		angulo = angulo % 360;
     	 }
  		else
     		voltas = 0;
  		if (angulo == 0 || angulo == 90 || angulo == -90 ||
      	    angulo == 180 || angulo == -180 || angulo == -270 ||
      		angulo == 270 || angulo == 360 || angulo == -360)
     	System.out.println("Está em cima de algum dos eixos");
  		if ((angulo > 0 && angulo < 90) || (angulo < -270 && angulo > -360))
     	System.out.println("1º Quadrante");
  		if ((angulo > 90 && angulo < 180) || (angulo < -180 && angulo > -270))
     	System.out.println("2º Quadrante");
  		if ((angulo > 180 && angulo < 270) || (angulo < -90 && angulo > -180))
     	System.out.println("3º Quadrante");
  		if ((angulo > 270 && angulo < 360) || (angulo < 0 && angulo > -90))
     	System.out.println("4º Quadrante");
  		System.out.println(Math.abs(voltas) + " volta(s) no sentido ");
  		if (angulo < 0)
     	  System.out.println("horario");
  		else
     	  System.out.println("anti-horario");
	}
}