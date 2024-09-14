import java.util.Scanner;

public class NumerosParesYDivisiblesPor3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese la cantidad de números a evaluar: ");
        int cantidad = scanner.nextInt();
        int sumaPares = 0;
        int sumaDivisibles = 0;
        int contadorPares = 0;
        int contadorDivisibles = 0;
        int suma = 0;
        double Promedio = 0;
        for (int i = 0; i < cantidad; i++) {
            System.out.print("Ingrese un número: ");
            int numero = scanner.nextInt();
            suma = suma + numero;
            Promedio = suma/numero;
            if (numero % 2 == 0) {
                sumaPares += numero;
                contadorPares++;
            }
            if (numero % 3 == 0) {
                sumaDivisibles += numero;
                contadorDivisibles++;
            }
        }
        
        if (contadorPares > 0) {
            double promedioPares = (double) sumaPares / contadorPares;
            System.out.printf("Promedio de números pares: %.2f%n", promedioPares);
        }

        if (contadorDivisibles > 0) {
            double promedioDivisibles = (double) sumaDivisibles / contadorDivisibles;
            System.out.printf("Promedio de números divisibles por 3: %.2f%n", promedioDivisibles);
        }

        System.out.println("Cantidad de números divisibles por 2: " + contadorPares);
        System.out.println("Cantidad de números divisibles por 3: " + contadorDivisibles);
        System.out.println(Promedio);
    }
}
