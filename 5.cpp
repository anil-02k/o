// Implement a C++ program to demonstrate the concept of data abstraction using the concept of Class and Objects

#include<iostream>
using namespace std;
class BankAccount {
    private:
    int accountNumber;
    float balance;
    public:
    BankAccount(int accountNumber, float balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    void deposit(float amount) {
        if(amount>0){
            balance += amount;
            cout << "Deposited Rs. " << amount << " into account number " << accountNumber;
        }
        else {
            cout << "Invalid amount for deposit";
        }
    }
    void withdraw(float amount){
        if(amount>0 && balance >= amount){
            balance -= amount;
        }
        else {
            cout << "Invalid amount for withdrawal";
        }
    }
    void getBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};
int main(){
    BankAccount account1(12345, 1000.0);
    account1.deposit(500.0);
    account1.withdraw(200.0);   
    account1.getBalance();

    return 0;
}