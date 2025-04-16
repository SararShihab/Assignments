class Circle{
    double radius;
    Circle(int radius){
        this.radius = radius;
    }
    Circle(Double radius){
        this.radius = radius;
    }
    double area(){
        return 3.14*radius*radius;
    }
}
public class DiffTypesOfParameters {
    public static void main(String[] args){
        Circle cir1 = new Circle(5);
        System.out.println("Area for integer radius: "+cir1.area());
        Circle cir2 = new Circle(4.693);
        System.out.println("Area for double radius: "+cir2.area());
    }
}
