
public class ChainedException {
    public static void main(String[] args){
        try{
            method();
        }
        catch(ArithmeticException e){
            System.out.println("Caught "+e);
            System.out.println("Original cause "+e.getCause());
        }

        
    }
    static void method() throws ArithmeticException {
        try {
            int a = 10 / 0;
            System.out.println(a);
        } catch (ArithmeticException e) {
            ArithmeticException ae = new ArithmeticException("Arithmetic Exception");
            ae.initCause(e);
            throw ae;
        }
    }
}
