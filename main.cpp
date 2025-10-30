#include <iostream>

class BankAccount {
    int account_number;
    int acc_balance;

public:

    BankAccount(int account_number){
        this->account_number = account_number;
        acc_balance = 0;
    }

    BankAccount(int account_number, int acc_balance) {
        this->account_number = account_number;
        this->acc_balance = acc_balance;
    }

    void deposit(int amount){
        acc_balance = acc_balance + amount;
    }

    void withdraw(int amount);

    int get_acc_balance() {
        return acc_balance;
    }

};

void BankAccount::withdraw(int amount) {
    if (acc_balance > amount) {
        acc_balance -= amount;
    } else {
        std::cout << "You don't have enough money.";
    }
}

int main() {
    BankAccount account {1,100};
    account.withdraw(101);
    account.deposit(10);
    account.withdraw(101);
    std::cout << account.get_acc_balance();
    return 0;
}

