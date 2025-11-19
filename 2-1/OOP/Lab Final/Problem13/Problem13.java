class Employee{
    int id;
    String name;
    double salary;
    Employee(int id, String name, double salary){
        this.id = id;
        this.name = name;
        this.salary = salary;
    }
    Employee(Employee e){
        id = e.id;
        name = e.name;
        salary = e.salary;
    }
    void display(){
        System.out.println("ID: "+id);
        System.out.println("Name: "+name);
        System.out.println("Salary: "+salary);
    }
}
public class Problem13 {
    public static void main(String[] args){
        Employee e1 = new Employee(1, "Shihab", 5000);
        Employee e2 = new Employee(e1);
        e1.display();
        e2.display();
    }
}
