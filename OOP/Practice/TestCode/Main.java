package TestCode;
class Account{
    static void withdraw(Account acc,double amount)
    {
        acc.withdraw(amount);
    }
    void withdraw(double amount)
    {
    }

}
class SavingAccount extends Account{
    double interest =0.2;
    double balance;
    SavingAccount(double balance)
    {
        this.balance  = balance;
    }
    void withdraw(double amount)
    {
        balance-=(amount*interest+amount);
    }
}
class CurrentAccount extends Account{
    double interest =0.1;
    double balance;
    CurrentAccount(double balance)
    {
        this.balance  = balance;
    }
    void withdraw(double amount)
    {
        balance-=(amount*interest+amount);
    }
}
public class Main {
    public static void main(String[] args) {
        SavingAccount acc1 = new SavingAccount(5000);
        CurrentAccount acc2 = new CurrentAccount(5000);
        Account.withdraw(acc1,1000);
        Account.withdraw(acc2,1000);
        System.out.println(acc1.balance);
        System.out.println(acc2.balance);
    }
}
