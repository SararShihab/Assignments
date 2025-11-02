class student{
    private int roll;
    private String name;

    public void setName(String name){
        this.name=name;
    }
    public void setRoll(int roll){
        this.roll=roll;
    }
    public String getName(){
        return name;
    }
    public int getRoll(){
        return roll;
    }
}

public class Encapsulation{
    public static void main(String[] args){
        student s = new student();
        s.setName("Shihab");
        s.setRoll(38);
        
        System.out.println("Name: "+s.getName());
        System.out.println("Roll: "+s.getRoll());
    }
}