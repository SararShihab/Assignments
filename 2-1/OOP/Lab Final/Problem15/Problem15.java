class Person{
    String name;
    int age;
    Person(String n, int a){
        name = n;
        age = a;
    }
}
class Student extends Person{
    int roll;
    String dept;
    Student(String name, int roll, int age, String dept){
        super(name, age);
        this.roll = roll;
        this.dept = dept;
    }
    void display(){
        System.out.println("Name: "+name);
        System.out.println("Roll: "+roll);
        System.out.println("Age: "+age);
        System.out.println("Department: "+dept);
    }
}
public class Problem15 {
    public static void main(String[] args) {
        Student s = new Student("Shihab", 5, 22, "CSE");
        s.display();
    }
}
