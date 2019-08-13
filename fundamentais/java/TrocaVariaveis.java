// Algoritmo Fundamental Nº 1
// Descrição : Troca dos valores de duas variáveis.
// Problema  : Dadas duas variáveis, trocar os valores atribuídos a elas.
// Aplicações: Algoritmos de ordenação.

import java.util.Scanner;

public class TrocaVariaveis {

    public static void main(String[] args) {
        Scanner dado;
        dado = new Scanner(System.in);

        System.out.println("Informe valor para a variável A: ");
        int a =  dado.nextInt();

        System.out.println("Informe valor para a variável B: ");
        int b = dado.nextInt();

        int aux;

        aux = a; // Guarda em AUX o valor original de A
        a = b;   // Atribui a A o valor original de B
        b = aux; // Atribui a B o valor original de A, que está armazenado em AUX

        System.out.println("Novo valor da variável A: " + a);
        System.out.println("Novo valor da variável B: " + b);
    }

}