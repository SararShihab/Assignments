
public class FinallyKeyword {
    public static void main(String[] args){
        try{
            System.out.println(40/0);
        }catch(ArithmeticException e){
             System.out.println("Catch Block: Arithmetic Exception.");
        }finally{//runs wheather exception occurs or not
            System.out.println("Finally Block: Shihab");
        }
    }
}
