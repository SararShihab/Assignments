class DU{
    void display(){
        System.out.println("University of Dhaka");
    }
}
class FEC extends DU{
    @Override //optional
    void display(){
        System.out.println("Affiliated Institute of DU");
    }
}

public class Polymorphism {
    public static void main(String[] args){
        DU d = new FEC();
        d.display();
        DU du = new DU();
        du.display();
    }
}
