import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner dado = new Scanner(System.in);

        System.out.print("Informe o número de termos da sequência: ");
        int n = dado.nextInt();

        int termo1 = 0;
        int termo2 = 1;
        int termo3;

        System.out.print(termo1 + ", " + termo2);

        for (int i = 3; i <= n; i++) {
            termo3 = termo1 + termo2;
            System.out.print(", " + termo3);
            termo1 = termo2;
            termo2 = termo3;
        }
    }
}