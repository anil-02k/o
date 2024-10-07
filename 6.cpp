// Define a class Hotel in C++ with the following specifications Private members • Rno Data member to store room number • Name Data member to store customer name • Tariff Data member to store per day charges • NOD Data member to store number of days of stay • CALC() Function to calculate and return amount as NOD*Tariff ,and if the value of days* Tariff >10000, then total amount is 1.05* days*Tariff. Public members • Checkin() Function to enter the content Rno, Name, Tariff and NOD • Checkout() Function to display Rno, Name, Tariff, NOD and Amount (amount to be displayed by calling function) CALC()

#include<iostream>
#include<string>
using namespace std;

class Hotel {
    private:
        int rno;          // Room number
        string name;      // Customer name
        float Tariff;     // Per day charge
        int NOD;          // Number of days of stay

        // CALC function to calculate the total amount
        float CALC() {
            float amount = NOD * Tariff;
            if (amount > 10000) {
                amount *= 1.05; // Increase by 5% if amount > 10000
            }
            return amount;
        }

    public:
        // Checkin function to enter room details
        void Checkin(int rno, string name, float tariff, int nod) {
            this->rno = rno;
            this->name = name;
            this->Tariff = tariff;
            this->NOD = nod;
        }

        // Checkout function to display details and calculate amount
        void CheckOut() {
            cout << "Room No: " << rno << endl;
            cout << "Customer Name: " << name << endl;
            cout << "Tariff: " << Tariff << endl;
            cout << "Number of Days: " << NOD << endl;
            cout << "Total Amount: " << CALC() << endl; // Call CALC() to get the total amount
        }
};

int main() {
    Hotel h;
    h.Checkin(101, "Rahul", 500, 10);
    h.CheckOut(); // Display details and calculated amount
    return 0;
}
