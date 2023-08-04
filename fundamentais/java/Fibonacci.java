// Algoritmo Fundamental Nº 6
// Descrição : Geração da sequência de Fibonacci
// Problema  : Gerar e imprimir os n primeiros termos da sequência
//             de Fibonacci, onde n >= 1. Os primeiros termos são:
//             0, 1, 1, 2, 3, 5, 8, 13, ...
//             Cada termo, além dos dois primeiros, é derivado da
//             soma de seus dois antecessores mais próximos.
// Aplicações: Botânica, teoria das redes elétricas, ordenação e pesquisa.

import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner dado = new Scanner(System.in);

        System.out.print("Número de termos: ");
        int n = dado.nextInt();

        int a = 0;
        int b = 1;
        int i = 2;
        int c;

        if (n == 1) {
            System.out.print(a);
        } else {
            System.out.print(a + " " + b);
        }

        while (i < n) {
            c = a + b;
            System.out.print(" " + c);
            a = b;
            b = c;
            i++;
        }
    }
}
