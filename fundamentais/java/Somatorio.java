// Algoritmo Fundamental Nº 3
// Descrição : Soma de um conjunto de números
// Problema  : Dado um conjunto de n números, calcular a soma desses números.
//             Assumir que n é maior ou igual a zero.
// Aplicações: Cálculos de média, cálculos de variância e mínimos quadrados.

import java.util.Scanner;

public class Somatorio {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Quantidade de números: ");
        int n = entrada.nextInt();
        int numero;
        int soma = 0;

        for (int i = 0; i < n; i++) {
            System.out.print("Número: ");
            numero = entrada.nextInt();
            soma += numero;
        }

        System.out.println("Soma = " + soma);
    }
}