import java.util.Scanner;
import java.lang.Math;

class formula_general {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingresa el valor de a: ");
        double a = scanner.nextDouble();

        System.out.println("Ingresa el valor de b: ");
        double b = scanner.nextDouble();

        System.out.println("Ingresa el valor de c: ");
        double c = scanner.nextDouble();

        double d = Math.pow(b, 2) - (4 * a * c);

        if (d > 0) {
            double x1 = (-b + Math.sqrt(d)) / (2 * a);
            double x2 = (-b - Math.sqrt(d)) / (2 * a);
            System.out.println("x1=" + x1);
            System.out.println("x2=" + x2);
        } else if (d == 0) {
            double x1 = -b / (2 * a);
            System.out.println("x1=" + x1);
            System.out.println("x2=" + x1);
        } else {
            d = -d;
            double x1 = -b / (2 * a);
            double x2 = Math.sqrt(d) / (2 * a);
            System.out.println("x1=" + x1 + "i");
            System.out.println("x2=" + x2 + "i");
        }
    }
}
