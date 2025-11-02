class Student{
    int reg;
    String name;
    Student(String name, int reg){
        this.name=name;
        this.reg=reg;
    }
    void show(){
        System.out.println("Name: "+name+", Reg: "+reg);
    }
}
public class Constructor {
    public static void main(String[] args){
        Student s = new Student("Shihab", 859);
        s.show();
    }
}
