
class NegativeAgeException extends Exception{
    public NegativeAgeException(String msg){
        super(msg);
    }
}

public class Problem29 {
    static void validate(int age) throws NegativeAgeException{
        if(age<0) throw new NegativeAgeException("Age cannot be negative");
        System.out.println("Age: "+age);
    }
    
    public static void main(String[] args){
        try{
            validate(-5);
        }catch (NegativeAgeException e){
            System.out.println("Error: "+e.getMessage());
        }
    }
}
