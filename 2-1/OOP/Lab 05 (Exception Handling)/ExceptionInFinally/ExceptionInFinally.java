
public class ExceptionInFinally {
    public static void main(String[] args){
        try{
           System.out.println(40/0); 
        }catch(Exception e){
            System.out.println("Catch Block");
        }finally{
            int arr[] = {5, 8, 10};
            System.out.println(arr[2]);
        }
    }
}
