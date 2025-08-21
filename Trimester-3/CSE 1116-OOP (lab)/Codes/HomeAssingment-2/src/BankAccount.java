
public class BankAccount {
    protected String accountNumber;
    protected String name;
    protected double balance;

    public BankAccount(String accountNumber, String name, double balance) {
        this.accountNumber = accountNumber;
        this.name = name;
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    public String getAccountNumber() {
        return accountNumber;
    }

    public String getName() {
        return name;
    }

    public void deposit (double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposit successful!");
        }
    }

    public void withdraw(double amount) {
        if (balance - amount >= 0) {
            balance -= amount;
            System.out.println("Withdraw successful!");
        } else {
            System.out.println("Inefficient found!");
        }
    }

    public void withdraw() {
        if (balance - 2000 >= 0) {
            balance -= 2000;
            System.out.println("Withdraw successful!");
        } else {
            System.out.println("Inefficient found!");
        }
    }
}
