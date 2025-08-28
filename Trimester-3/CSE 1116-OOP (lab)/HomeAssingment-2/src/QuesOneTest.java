import java.util.Scanner;

public class QuesOneTest {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        BankAccount bankAccount = new BankAccount("02111133", "Hero Alom", 39999.99);
        CheckingAccount checkingAccount = new CheckingAccount("C3244443", "Alom Hero", 40000.34);
        SavingAccount savingAccount = new SavingAccount("S34345555", "Alom", 42333.434);

//        bankAccount.deposit(100);
//
//        checkingAccount.deposit(1000);
//
//        savingAccount.deposit(1000);
//
//        savingAccount.withdraw(1000000);
//        checkingAccount.withdraw(50000);
//        System.out.println(checkingAccount.getBalance());

        System.out.println(checkingAccount.getBalance());
    }
}
