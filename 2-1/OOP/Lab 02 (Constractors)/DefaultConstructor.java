class Student {
    String name;
    int roll;

    Student() {
        this.name = "Shihab";
        this.roll = 859;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll: " + roll);
    }
}

public class DefaultConstructor {
    public static void main(String[] args) {
        Student st = new Student();
        st.display();
    }
}