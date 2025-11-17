
package Problem01;
import java.util.Scanner;

public class Main {
   public static void main(String[] args){
       Scanner sc = new Scanner(System.in);
       System.out.print("Enter Number of Students: ");
       int n = sc.nextInt();
       sc.nextLine();
       Student[] s = new Student[n];
       for(int i = 0; i < n; i++){
           System.out.println("Enter Detials for Student "+(i+1)+":");
           s[i] = new Student();
           s[i].inputDetails(sc);
       }
       System.out.println("===Student Details===");
       for(int i = 0; i < n; i++){
           s[i].showDetails();
       }
   } 
}
