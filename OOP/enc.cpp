#include <iostream>

using namespace std;

class BankAccount
{

private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNumber, double initialBalance)
    {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    double getBalance() const
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited amount: " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            cout << "Withdraw amount : " << amount << endl;
        }
    }
};

int main()
{

    BankAccount myAccount("1264r8525", 1000);

    double balance = myAccount.getBalance();
    cout << "Account Balance : " << balance << endl;

    myAccount.deposit(200);

    int updatedBalance = myAccount.getBalance();
    cout << "Balance Now : " << updatedBalance << endl;
    myAccount.withdraw(100);
    int updatedBalance1 = myAccount.getBalance();
    cout << "Balance Now : " << updatedBalance1 << endl;
    return 0;
}