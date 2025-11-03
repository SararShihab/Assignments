
public class MultipleCatch {
    public static void main(String[] args){
        try{
            int a = 5/0;
            int arr[] = new int[3];
            arr[4]=3;
            String s = null;
        }
        catch(ArithmeticException e){
            System.out.println("Arithmetic Exception");
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Wrong index");
        }
        catch(NullPointerException e){
            System.out.println("null");
        }
        System.out.println("Program continues......");
    }
}
