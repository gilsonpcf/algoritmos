import java.util.*;

public class EX9
{
	public static void main (String args[])
	{
	int dia, mes, ano, hora, min;
	Calendar cal = Calendar.getInstance();
	Date d = new Date(); 
  	cal.setTime(d);
  	dia = cal.get(Calendar.DAY_OF_MONTH);
    mes = cal.get(Calendar.MONTH) + 1;
    ano = cal.get(Calendar.YEAR);
    if (mes >= 10)
	  System.out.print("Data Atual: "+dia+"/"+mes+"/"+ano);
	else
	  System.out.print("Data Atual: "+dia+"/0"+mes+"/"+ano);
    // Avalia o valor da variável mes para escrever o mês equivalente
   switch(mes)
    { case 1: 
    	System.out.println(" - Janeiro");
	    break;
       case 2: 
       	System.out.println(" - Fevereiro");
	    break;
       case 3: 
       	System.out.println(" - Março");
	    break;
       case 4: 
       	System.out.println(" - Abril");
	    break;
       case 5: 
       	System.out.println(" - Maio");
	    break;
       case 6: 
       	System.out.println(" - Junho");
	    break;
       case 7: 
       	System.out.println(" - Julho");
	    break;
       case 8:
        System.out.println(" - Agosto");
	    break;
       case 9: 
       	System.out.println(" - Setembro");
	    break;
       case 10:
       	System.out.println(" - Outubro");
	    break;
       case 11:
       	System.out.println(" - Novembro");
	    break;
       case 12:
       	System.out.println(" - Dezembro");
	    break;
    }
    hora = cal.get(Calendar.HOUR);
    min = cal.get(Calendar.MINUTE);
    if (hora < 10)
     System.out.print("Hora Atual: 0"+hora);
    else  
     System.out.print("Hora Atual: "+hora);
    if (min < 10)
	 System.out.println(":0"+min);
	else 
	 System.out.println(":"+min);
	}
}