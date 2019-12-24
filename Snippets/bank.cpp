#include <iostream>
using namespace std;


class Bank {

    private:
        char username[50];
        char type[20];
        float balance;
        int id;

    public:
        virtual void input();
        virtual void deposit();
        virtual void withdraw();
        virtual void display();

        Bank() {
            id = 000000;
            balance = 0.0;
        }

        virtual ~Bank() {
            cout << "Destructing Bank!" << endl;
        }
};

void Bank::display() {
    cout << "Your account: ";
    cout << "\n Name: " << username << endl;
    cout << "\n Account Number: " << id << endl;
    cout << "\n Account Type: " << type << endl;
    cout << "\n Balance: " << balance << endl;
}

void Bank::input() {
    cout << "\n Enter your information below: ";
    cout << "\n Enter your Username: \n";
    cin >> username;
    cout << "\n Enter your Account Number: \n";
    cin >> id;
    cout << "\n Enter your Account Type: \n";
    cin >> type;
    cout << "\n Enter amount to Deposit: \n";
    cin >> balance;
}

void Bank::deposit() {
    float in;
    cout << "\n Deposit: ";
    cout << "\n Enter deposit amount: \n";
    cin >> in;
    balance += in;
}

void Bank::withdraw() {
    float in;
    cout << "\n Withdraw: ";
    cout << "\n Enter withdraw amount: \n";
    cin >> in;
    balance -= in;
}

class Account: public Bank {
    public:
        Account() {

        }

        virtual ~Account() {
            
        }
};

class Checkings: public Account {
    public:
        Checkings() {

        }

        virtual ~Checkings() {
            cout << "Destructing Checkings!" << endl;
        }
};

class Savings: public Account {
    public:
        Savings() {

        }

        virtual ~Savings() {
            cout << "Destructing Savings!" << endl;
        }
};

int main(int argc, char const *argv[]) {
    
    Bank* bank = new Bank();

    int choice = 1;
    while(choice != 0) {
        cout << "Enter: 0 - Exit\n 1 - Create Account\n 2 - Deposit\n 3 - Withdraw\n 4 - Account Info\n -> ";
        cin >> choice;
        switch(choice) {
            case 0:
                exit(0);
            break;
            case 1:
                bank->input();
            break;
            case 2:
                bank->deposit();
            break;
            case 3:
                bank->withdraw();
            break;
            case 4:
                bank->display();
            break;
            default:
                cout << "Invalid option! " << endl;
            break;
        }
    }

    delete bank;
    return 0;
}
