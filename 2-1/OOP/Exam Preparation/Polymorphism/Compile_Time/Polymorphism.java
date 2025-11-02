class calculator{
    int add(int a, int b){
        return a+b;
    }
    int add(int a, int b, int c)
    {
        return a+b+c;
    }
    float add(float a, float b){
        return a+b;
    }
}

public class Polymorphism {
    public static void main(String[] args){
        calculator c = new calculator();
        System.out.println(c.add(2, 3));
        System.out.println(c.add(2, 3, 4));
        System.out.println(String.format("%.3f",c.add(5.6F, 2.3F)));
    }
}
