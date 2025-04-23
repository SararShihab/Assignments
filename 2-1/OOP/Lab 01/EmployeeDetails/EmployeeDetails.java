import java.util.Scanner;

class Employee {
    String name;
    int id;
    double salary;

    public void setInfo(String name, int id, double salary) {
        this.name = name;
        this.id = id;
        this.salary = salary;
    }

    public double calculateAnnualSalary() {
        return salary * 12;
    }

    public void displayDetails() {
        System.out.println("Employee Name: " + name);
        System.out.println("Employee ID: " + id);
        System.out.println("Monthly Salary: " + salary);
        System.out.println("Annual Salary: " + calculateAnnualSalary());
    }
}

public class EmployeeDetails {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Employee Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Employee ID: ");
        int id = sc.nextInt();

        System.out.print("Enter Monthly Salary: ");
        double salary = sc.nextDouble();

        Employee emp = new Employee();
        emp.setInfo(name, id, salary);
        emp.displayDetails();

        sc.close();
    }
}
