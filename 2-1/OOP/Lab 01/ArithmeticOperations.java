import java.util.Scanner;

class Calculator {
    public static int add(int a, int b) {
        return a + b;
    }

    public static int subtract(int a, int b) {
        return a - b;
    }

    public static int multiply(int a, int b) {
        return a * b;
    }

    public static int divide(int a, int b) {
        return a / b;
    }

    public static int remainder(int a, int b) {
        return a % b;
    }
}

public class ArithmeticOperations {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();

        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();

        System.out.println("Addition: " + Calculator.add(num1, num2));
        System.out.println("Subtraction: " + Calculator.subtract(num1, num2));
        System.out.println("Multiplication: " + Calculator.multiply(num1, num2));
        System.out.println("Division: " + Calculator.divide(num1, num2));
        System.out.println("Remainder: " + Calculator.remainder(num1, num2));

        sc.close();
    }
}
