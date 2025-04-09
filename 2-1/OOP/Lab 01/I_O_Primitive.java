import java.util.Scanner;

class InputOutput {
    public static void display(int a, float b, char c) {
        System.out.println("Integer value: " + a);
        System.out.println("Float value: " + b);
        System.out.println("Character value: " + c);
    }
}

public class I_O_Primitive {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter an integer value: ");
        int IntValue = sc.nextInt();

        System.out.print("Enter a float value: ");
        float FloatValue = sc.nextFloat();

        sc.nextLine();

        System.out.print("Enter a character value: ");
        char CharValue = sc.nextLine().charAt(0);

        InputOutput.display(IntValue, FloatValue, CharValue);

        sc.close();
    }
}
