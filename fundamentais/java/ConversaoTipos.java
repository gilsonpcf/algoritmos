// Algoritmo Fundamental Nº 9
// Descrição : Conversão de caractere para número
// Problema  : Dada a representação em caracteres de um número inteiro,
//             convertê-la para o seu formato decimal convencional.
// Aplicações: Aplicativos de negócios, processamento de dados.

import java.util.Scanner;

public class ConversaoTipos {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Número inteiro: ");
        String numero = entrada.next();
        int n = numero.length();
        int decimal = 0;
        int base = 48;
        int digito;

        for (var i = 0; i < n; i++) {
            digito = numero.charAt(i) - base;
            decimal = decimal * 10 + digito;
        }

        System.out.println("Formato decimal: " + decimal);
    }
}