import java.util.Scanner;

class Student{
    String name;
    double roll, gpa;
    
    void input(Scanner sc){
        System.out.println("Enter Name: ");
        name = sc.nextLine();
        System.out.println("Enter Roll: ");
        roll = sc.nextDouble();
        System.out.println("Enter GPA: ");
        gpa = sc.nextDouble();
        sc.nextLine();
    }
    
    void displayDitails(){
        System.out.println("Name: "+name);
        System.out.println("Roll: "+roll);
        System.out.println("GPA: "+gpa);
    }
}


public class Problem01 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number of Students: ");
        int n = sc.nextInt();
        sc.nextLine();
        Student[] s = new Student[n];
        for(int i = 0; i < n; i++){
            System.out.println("Enter details for Student"+(i+1)+": ");
            s[i] = new Student();
            s[i].input(sc);
        }
        System.out.println("===Details===");
        for(int i = 0; i < n; i++){
            System.out.println("--tudent"+(i+1)+"--");
            
            s[i].displayDitails();
        }

    }
}
