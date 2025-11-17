
package Problem02;

/**
 *
 * @author shihab
 */
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number of Accounts: ");
        int n = Integer.parseInt(sc.nextLine());
        
        BankAccount[] b = new BankAccount[n];
        for(int i=0; i<n; i++){
            System.out.println("--Enter Details for Account "+(i+1)+"--");
            b[i]=new BankAccount();
            b[i].create(sc);
            System.out.print("Deposit: ");
            double d = Double.parseDouble(sc.nextLine());
            b[i].deposit(d);
            System.out.print("Withdraw: ");
            double w = Double.parseDouble(sc.nextLine());
            b[i].withdraw(w);
            
        }
        System.out.println("===Account Details===");
        for(int i=0; i<n; i++){
            b[i].displayBalance();
        }
    }
}
