class student{
    int id;
    String name;
    student(){
        id = 859;
        name = "Shihab";
    }
    void show(){
        System.out.println("Name: "+name+", Reg: "+id);
    }
}
public class Constructor {
    public static void main(String[] args){
        student s = new student();
        s.show();
    }
}
