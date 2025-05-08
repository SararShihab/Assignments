public class ArithmeticExceptions {
    public static void main(String[] args){
        System.out.println("Shihab");
        try{
            System.out.println(20/0);
        }catch(ArithmeticException e){
            System.out.println(e);
        }
        System.out.println("CSE");
    }
}