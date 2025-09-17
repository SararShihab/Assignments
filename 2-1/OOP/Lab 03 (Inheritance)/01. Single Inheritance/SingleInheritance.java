class person{
    String name = "Shihab";
    int age = 21;
}

class student extends person{
    int roll = 859;
    String departmet = "CSE";
}

public class SingleInheritance {
    public static void main(String[] args){
        student st = new student();
        System.out.println("Name: " + st.name);
        System.out.println("Age: " + st.age);
        System.out.println("Roll: " + st.roll);
        System.out.println("Department: " + st.departmet);
    }
}
