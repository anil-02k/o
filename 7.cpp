// //Implement a Program in C++ by defining a class to represent a bank account.
// Include the following:
// Data Members
// ● Name of the depositor
// ● Account number
// ● Type of account (Saving, Current etc.)
// ● Balance amount in the account
// Member Functions
// ● To assign initial values
// ● To deposit an amount
// ● To withdraw an amount after checking the balance
// ● To display name and balance
#include <iostream>
using namespace std;

class BankAccount {
    private:
        string name;              // Name of the depositor
        int accountNumber;        // Account number
        string accountType;       // Type of account (e.g., Saving, Current)
        double balance;           // Balance amount in the account

    public:
        // Constructor to assign initial values
        BankAccount(string n, int a, string t, double b) {
            name = n;
            accountNumber = a;
            accountType = t;
            balance = b;
        }

        // Function to deposit an amount
        void deposit(double amount) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        }

        // Function to withdraw an amount after checking the balance
        void withdraw(double amount) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawal successful. Remaining balance: " << balance << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        }

        // Function to display name and balance
        void display() {
            cout << "Name: " << name << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Type: " << accountType << endl;
            cout << "Balance: " << balance << endl;
        }
};

int main() {
    // Creating a BankAccount object
    BankAccount account("John Doe", 12345, "Saving", 1000.0);
    
    // Displaying initial account details
    account.display();

    // Depositing an amount
    account.deposit(500.0);
    
    // Withdrawing an amount
    account.withdraw(300.0);
    
    // Displaying account details after transactions
    account.display();

    // Attempting to withdraw an amount greater than the balance
    account.withdraw(1500.0);

    return 0;
}
