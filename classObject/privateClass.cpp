#include <iostream>
using namespace std;

class BankAccount {

private:

    string owner;
    double balance;

public:

    void setAccount(string owner, double balance) {

        this->owner = owner;
        this->balance = balance;
    }

    void deposit(double amount) {

        if (amount > 0) {
            this->balance += amount;
        }
    }

    void showAccount() {

        cout << "Owner: " << this->owner << endl;
        cout << "Balance: " << this->balance << endl;
    }
};

int main() {

    BankAccount account1;
    BankAccount account2;

    account1.setAccount("Rahim", 5000);
    account2.setAccount("Karim", 10000);

    account1.deposit(1000);

    account1.showAccount();
    account2.showAccount();

    return 0;
}