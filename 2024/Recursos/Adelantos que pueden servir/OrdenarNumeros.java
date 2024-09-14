// Java
import java.util.Scanner;

public class OrdenarNumeros {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int E;
        System.out.println("¿Cuántos números deseas ingresar?");
        E = scanner.nextInt();
        int[] numeros = new int[E];
        for (int i = 0; i < E; i++) {
            System.out.print("Ingresa el número " + (i + 1) + ": ");
            numeros[i] = scanner.nextInt();
        }
        for (int i = 0; i < E - 1; i++) {
            for (int j = 0; j < E - i - 1; j++) {
                if (numeros[j] > numeros[j + 1]) {
                    int temp = numeros[j];
                    numeros[j] = numeros[j + 1];
                    numeros[j + 1] = temp;
                }
            }
        }
        System.out.println("Los números ordenados de menor a mayor son:");
        for (int i = 0; i < E; i++) {
            System.out.print(numeros[i] + " ");
        }
    }
}
