// Algoritmo Fundamental Nº 2
// Descrição : Contagem.
// Problema  : Dado um conjunto de N notas de um exame, fazer uma contagem do
//             número de alunos que passaram no exame. Passará o aluno que
//             tirar nota 50 ou maior (no intervalo de 0 a 100).
// Aplicações: Todas as formas de contagem.

import java.util.Scanner;

public class Contagem {

    public static void main(String[] args) {
        Scanner dado;
        dado = new Scanner(System.in);

        System.out.print("Informe a quantidade notas: ");
        int n = dado.nextInt();
        int nota;
        int contador = 0;
        int i = 0;

        while (i < n) {
            System.out.print("Informe uma nota: ");
            nota = dado.nextInt();

            if (nota >= 50) {
                contador = contador + 1;
            }

            i = i + 1;
        }

        System.out.println("Número de alunos que passaram no exame: " + contador);
    }

}