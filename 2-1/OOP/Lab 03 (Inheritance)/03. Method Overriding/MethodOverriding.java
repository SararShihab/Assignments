class shape{
    void display(){
        System.out.println("Shape class");
    }
}
class circle{
    void display(){
        System.out.println("Circle class");
    }
}
class rectangle{
    void display(){
        System.out.println("Rectangle class");
    }
}
public class MethodOverriding {
    public static void main(String[] args){
        shape sh = new shape();
        circle cr = new circle();
        rectangle rt = new rectangle();
        sh.display();
        cr.display();
        rt.display();
    }
}
