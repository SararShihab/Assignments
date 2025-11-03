class demo{
    <T>void show(T a){
        System.out.println(a);
    }
}


public class GenericMethod {
    public static void main(String[] args){
        demo d = new demo();
        d.<Integer>show(50);
        d.<String>show("Shihab");
    }
}
