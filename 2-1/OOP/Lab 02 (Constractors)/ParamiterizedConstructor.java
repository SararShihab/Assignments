class Rectangle{
    int length, width;
    Rectangle(int length, int width){
        this.length = length;
        this.width = width;
    }
    int area(){
        return length * width;
    }
}


public class ParamiterizedConstructor {
    public static void main(String [] args){
        Rectangle rect = new Rectangle(10, 7);
        
        System.out.println("Area of the Rectangle is " + rect.area());
    }
}
