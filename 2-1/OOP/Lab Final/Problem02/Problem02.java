import java.util.Scanner;

class BankAccount{
    String accountNumber, accountHolderName;
    double balance;
    void createAccount(Scanner sc){
        System.out.print("Enter Name: ");
        accountHolderName = sc.nextLine();
        System.out.print("Enter Account Number: ");
        accountNumber = sc.nextLine();
        System.out.print("Enter Initial Balance: ");
        balance = sc.nextDouble();
        sc.nextLine();
    }
    void deposit(double amount){
        balance += amount;
    }
    void withdraw(double amount){
        if(balance>=amount){
            balance -= amount;
        }else{
            System.out.println("Insufficient Balance.");
        }
        
    }
    void displayBalance(){
        System.out.println("Name: "+accountHolderName);
        System.out.println("Account Number: "+accountNumber);
        System.out.println("Final Balance: "+balance);
    }
}

public class Problem02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Account Holders Number: ");
        int n = sc.nextInt();
        sc.nextLine();
        BankAccount[] b = new BankAccount[n];
        for(int i = 0; i < n; i++){
            System.out.println("==Enter Details for Holder "+(i+1)+"==");
            b[i] = new BankAccount();
            b[i].createAccount(sc);
            System.out.print("Enter Deposit Amount: ");
            double dep = sc.nextDouble();
            sc.nextLine();
            b[i].deposit(dep);
            System.out.print("Enter Withdrawal Amount: ");
            double w = sc.nextDouble();
            sc.nextLine();
            b[i].withdraw(w);
        }
        System.out.println("=====Details======");
        for(int i = 0; i < n; i++){
            System.out.println("--Details of Holder "+(i+1)+"--");
            b[i].displayBalance();;
        }

        
    }
}
