import java.util.Scanner;
class Factorial{
    long fact = 1;
    long facto(long num){
        for(int i = 1; i <= num; i++){
            fact *= i;
        }
        return fact;
    }
    
}

public class Fact {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        Factorial f = new Factorial();
        int num = s.nextInt();
        System.out.println("Factorial of "+num+" is "+f.facto(num));
        s.close();
    }
}
