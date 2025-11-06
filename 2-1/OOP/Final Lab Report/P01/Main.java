import java.util.Scanner;

class Student {
    String name;
    int roll;
    double gpa;

    void inputDetails(Scanner sc) {
        System.out.print("Enter Name: ");
        name = sc.nextLine();
        System.out.print("Enter Roll: ");
        roll = sc.nextInt();
        System.out.print("Enter GPA: ");
        gpa = sc.nextDouble();
        sc.nextLine();
    }

    void displayDetails() {
        System.out.println("-----------------------------");
        System.out.println("Name : " + name);
        System.out.println("Roll : " + roll);
        System.out.println("GPA  : " + gpa);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println();
        System.out.print("Enter number of students: ");
        int n = sc.nextInt();
        sc.nextLine();

        Student[] students = new Student[n];
        System.out.println();

        for (int i = 0; i < n; i++) {
            System.out.println("Enter details for Student " + (i + 1) + ":");
            students[i] = new Student();
            students[i].inputDetails(sc);
            System.out.println();
        }

        System.out.println("======= Student Information =======");
        for (int i = 0; i < n; i++) {
            students[i].displayDetails();
        }
    }
}
