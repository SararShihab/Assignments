abstract class human{
    abstract void student();
    void people(){
        System.out.println("Human are social beings.");
    }
}

class Student extends human{
    void student(){
        System.out.println("Students are the future of human cevilazitaion.");
    }
}

public class Abstraction {
    public static void main(String[] args){
        Student s = new Student();
        s.people();
        s.student();
    }
}
