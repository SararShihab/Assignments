interface humanInterface{
    void people();
    void student();
}

class Human implements humanInterface{
    public void people(){
        System.out.println("Human are social beings.");
    }
    public void student(){
        System.out.println("Students are the future of human civilazitaion.");
    }
}

public class Abstraction {
    public static void main(String[] args){
        Human h = new Human();
        h.people();
        h.student();
    }
}
