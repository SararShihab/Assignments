
class Student{
    String name,department;
    int roll;
    double gpa;
    Student(){
        System.out.println("Default Constructor Called.");
    }
    Student(String name, int roll){
        this();
        this.name = name;
        this.roll = roll;
    }
    Student(String name, int roll, String department, double gpa){
        this(name, roll);
        this.department = department;
        this.gpa = gpa;
    }
    void display(){
        System.out.println("Name: "+name);
        System.out.println("Department: "+department);
        System.out.println("Roll: "+roll);
        System.out.println("GPA: "+gpa);
    }

}
public class Problem12 {
    public static void main(String[] args) {
        Student s1=new Student();
        Student s2=new Student("Shihab", 5);
        Student s3=new Student("Habibur", 4, "CSE", 3.95);
        s1.display();
        s2.display();
        s3.display();
    }
}
