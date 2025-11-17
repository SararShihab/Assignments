
package Problem01;
import java.util.Scanner;

public class Student {
    String name;
    int roll;
    double gpa;
    
    void inputDetails(Scanner sc){
        System.out.print("Enter Name: ");
        name = sc.nextLine();
        System.out.print("Enter Roll: ");
        roll = sc.nextInt();
        System.out.print("Enter GPA: ");
        gpa = sc.nextDouble();
        sc.nextLine();
    }
    void showDetails(){
        System.out.println("---------");
        System.out.println("Name: "+name);
        System.out.println("Roll: "+roll);
        System.out.println("GPA: "+gpa);
    }
}
