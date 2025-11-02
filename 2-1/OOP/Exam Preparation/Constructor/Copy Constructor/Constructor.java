class student{
    int reg;
    String name;
    student(int reg, String name){
        this.reg=reg;
        this.name=name;
    }
    student(student s){
        System.out.println("Name: "+s.name+", Reg: "+s.reg);
    }
}
public class Constructor {
    public static void main(String[] args){
        student s1 = new student(859, "Shihab");
        student s2 = new student(s1);
    }
}
