
public class CheckingAccount extends BankAccount {

    public CheckingAccount(String accountNumber, String name, double balance) {
        super(accountNumber, name, balance);
    }

    @Override
    public void withdraw(double amount) {
        if (balance - amount >= -20000) {
            balance -= amount;
            System.out.println("Withdraw successful!");
        } else {
            System.out.println("Inefficient found!");
        }
    }
}
