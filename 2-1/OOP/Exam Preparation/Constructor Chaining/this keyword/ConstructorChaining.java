class student{
    student(){
        this(859, "Shihab");
        System.out.println("Default constructor called.");
    }
    student(int reg, String name){
        System.out.println("Parameterized constructor called:");
        System.out.println("Reg: "+reg+", Name: "+name);
    }
}

public class ConstructorChaining {
    public static void main(String[] args){
        student s = new student();
    }
}
