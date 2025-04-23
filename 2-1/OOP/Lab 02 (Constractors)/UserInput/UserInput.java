import java.util.Scanner;
class Employee{
    int id, Salary;
    String name;
    Employee(int id, String name, int Salary){
        this.id = id;
        this.name = name;
        this.Salary = Salary;
    }
    void Display(){
        System.out.println("Employee ID: "+id);
        System.out.println("Employee Name: "+ name);
        System.out.println("Salary: "+Salary);
    }
}
public class UserInput {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Employee ID: ");
        int id = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter Employee Name: ");
        String name = sc.nextLine();
        System.out.print("Enter the Salary: ");
        int salary = sc.nextInt();
        sc.close();
        Employee emp = new Employee(id, name, salary);
        emp.Display();
    }
}
