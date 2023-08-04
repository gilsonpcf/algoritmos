// Algoritmo Fundamental Nº 5
// Descrição : Cálculo de uma série infinita
// Problema  : Calcular o valor de S, conforme definido
//             pela seguinte série infinita:
//             S = x/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + ...
// Aplicações: Cálculos matemáticos e estatísticos.

import java.util.Scanner;

public class SerieInfinita {

	// Subrotina para calcular o fatorial
    public static long fatorial(int n) {
        long fator = 1;

        for (int i = 1; i <= n; i++) {
        	fator = fator * i;
        }

        return fator;
    }

    // Rotina principal
    public static void main(String[] args) {
        Scanner dado;
        dado = new Scanner(System.in);

        System.out.print("Número de termos: ");
        int n = dado.nextInt();

        System.out.print("Valor de x: ");
        double x = dado.nextDouble();

        double termo, s = 0;
        int i = 1, sinal = 1;

        for (int j = 0; j < n; j++) {
            termo = Math.pow(x, i) / fatorial(i);
            s = s + sinal * termo;
            i = i + 2;
            sinal = -sinal;
        }

        System.out.printf("S = %f", s);
    }
}
