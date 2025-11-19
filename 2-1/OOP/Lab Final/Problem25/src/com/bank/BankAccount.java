
package com.bank;

public class BankAccount {
    private String accountNumber;
    protected double balance;
    public BankAccount(String acc, double bal){
        accountNumber = acc;
        balance = bal;
    }
    protected double getBalance(){
        return balance;
    }
    public void displayDetails(){
        System.out.println("Account Number: "+accountNumber);
        System.out.println("Balance: "+balance);
    }
}
