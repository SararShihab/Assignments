
public class MoreThanOneCatchBlocks {
    public static void main(String[] args){
        try{
            // int arr[] = {5, 7, 4};
            // System.out.println(arr[2]);
            // System.out.println(50/0);
            System.out.println("Shihab".charAt(8));
        }catch(ArithmeticException e){
            System.out.println("Arithmetic exception occured.");
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index exception occured");
        }catch(StringIndexOutOfBoundsException e){
            System.out.println("String index exception occured.");
        }
        System.out.println("Shihab");
    }
}
