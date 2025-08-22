// Algoritmo Fundamental Nº 7
// Descrição : Inversão dos dígitos de um número inteiro
// Problema  : Inverter a ordem dos dígitos de um número inteiro positivo.
// Aplicações: Hashing e recuperação de informação, aplicativos de banco
//             de dados.

import java.util.Scanner;

public class InversaoDigitos {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Número inteiro positivo: ");
        int n = entrada.nextInt();

        int invertido = 0;
        int d;

        while (n > 0) {
            d = n % 10;
            invertido = invertido * 10 + d;
            n = n / 10;
        }

        System.out.println("Número invertido: " + invertido);
    }
}