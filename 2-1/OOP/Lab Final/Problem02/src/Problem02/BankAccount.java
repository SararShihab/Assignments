
package Problem02;

/**
 *
 * @author shihab
 */
import java.util.Scanner;
public class BankAccount {
    String accountNumber;
    String accountHolderName;
    double balance;
    
    
    void create(Scanner sc){
        
        System.out.print("Enter Name: ");
        accountHolderName = sc.nextLine();
        System.out.print("Enter Account Number: ");
        accountNumber = sc.nextLine();
        System.out.print("Enter Initial Balance: ");
        balance = Double.parseDouble(sc.nextLine());
        
        
    }
    void deposit(double amount){
        balance += amount;
        System.out.println("Deposited: "+amount);
    }
    void withdraw(double amount){
        if(amount<=balance){
            balance -= amount;
            System.out.println("Withdrawn: "+amount);
        }
        else{
            System.out.println("Insufficient balance.");
        }
    }
    void displayBalance(){
        System.out.println("--------------");
        System.out.println("Account Holder Name: "+accountHolderName);
        System.out.println("Account Number     : "+accountNumber);
        System.out.println("Balance            : "+balance);
        
    }
}
