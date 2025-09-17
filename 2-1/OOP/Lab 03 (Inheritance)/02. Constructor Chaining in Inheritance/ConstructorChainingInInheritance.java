class person{
    String name;
    int age;
    person(String name, int age){
        this.name = name;
        this.age = age;
    }
}

class student extends person{
    int roll;
    String departmet;
    student(String name, int age, int roll, String department){
        super(name, age);
        this.roll = roll;
        this.departmet = department;
    }
}
public class ConstructorChainingInInheritance {
    public static void main(String[] args){
        student st = new student("Shihab", 21, 859, "CSE");
        System.out.println("Name: " + st.name);
        System.out.println("Age: " + st.age);
        System.out.println("Roll: " + st.roll);
        System.out.println("Department: " + st.departmet);
    }
}
