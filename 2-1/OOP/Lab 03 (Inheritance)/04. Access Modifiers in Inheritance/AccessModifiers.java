class base{
    public String a = "Public";
    private String b = "Private";
    protected String c = "Protected";
    String getValue(){
        return b;
    }
}
class derived extends base{
    void display(){
        System.out.println(a);
        System.out.println(getValue());
        System.out.println(c);
    }
}

public class AccessModifiers {
    public static void main(String [] args){
        derived d = new derived();
        d.display();
    }
}
