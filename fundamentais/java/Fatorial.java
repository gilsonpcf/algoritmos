import java.util.Scanner;

public class Fatorial {
    public static void main(String[] args) {
        Scanner dado = new Scanner(System.in);

        System.out.print("Informe um número: ");
        int n = dado.nextInt();
        int fatorial = 1;
        int i = n;

        while (i >= 1) {
            fatorial = fatorial * i;
            i = i - 1;
        }

        System.out.println("O fatorial de " + n + " é " + fatorial);
    }
}