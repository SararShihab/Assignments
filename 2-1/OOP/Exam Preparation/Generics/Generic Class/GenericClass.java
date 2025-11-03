class demo1<T>{
    T a;
    demo1(T a){
        this.a = a;
    }
    void show(){
        System.out.println(a);
    }
}

class demo2<T,U>{
    T a;
    U b;
    demo2(T a, U b){
        this.a = a;
        this.b = b;
    }
    void show(){
        System.out.println(a);
        System.out.println(b);
    }
}

public class GenericClass {
    public static void main(String[] args){
        demo1<Integer> d1 = new demo1<>(5);
        demo1<String> d2 = new demo1<>("Shihab");
        demo2<Integer, String> d3 = new demo2<>(859, "Shihab");
        d1.show();
        d2.show();
        d3.show();
    }
}
