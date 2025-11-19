
package com.user;

import com.bank.BankAccount;
public class SavingsAccount extends BankAccount{
    public SavingsAccount(String acc, double bal) {
        super(acc, bal);
    }
    public static void main(String[] args){
    BankAccount b = new BankAccount("43983489", 5000);
        b.displayDetails();
        SavingsAccount sa = new SavingsAccount("12345", 2000);
        System.out.println("Balance via subclass instance (direct protected access): " + sa.balance);
    }
}
