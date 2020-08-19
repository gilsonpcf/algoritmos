import java.util.Scanner;

public class FuncaoSeno {

    public static long fatorial(int n) {
        long fat = 1;

        for (int i = n; i >= 1; i--) {
            fat = fat * i;
        }

        return fat;
    }

    public static void main(String[] args) {
        Scanner dado;
        dado = new Scanner(System.in);

        double x, termo, seno = 0;
        int n, sinal = 1, j = 1;

        System.out.print("Informe o valor de x: ");
        x = dado.nextDouble();

        System.out.print("Informe o número de termos da série: ");
        n = dado.nextInt();

        for (int i = 1; i <= n; i++) {
            termo = Math.pow(x, j) / fatorial(j); // Usa-se aqui a função fatorial
            seno = seno + sinal * termo;
            sinal = -1 * sinal;
            j = j + 2;
        }

        System.out.println("sen(x) = " + seno);
    }
}