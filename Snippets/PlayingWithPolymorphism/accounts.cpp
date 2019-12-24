#include <memory>
#include <iostream>
using namespace std;

class Account {

    public:
        virtual void withdraw(double amount) const {
            cout << "Account: You are withdrawing " << amount << endl;
        }
        
        virtual void deposit(double amount) const {
            cout << "Account: You are depositing " << amount << endl;
        }

        virtual ~Account() {
            cout << "Account: destructing..." << endl;
        }
};

class Checkings: public Account {
    public:
        virtual void withdraw(double amount) const {
            cout << "Checkings: You are withdrawing " << amount << endl;
        }

        virtual void deposit(double amount) const {
            cout << "Checkings: You are depositing " << amount << endl;
        }

        virtual ~Checkings() {
            cout << "Checkings: destructing..." << endl;
        }
};

class Savings: public Account {
    public: 
        virtual void withdraw(double amount) const {
            cout << "Savings: You are withdrawing " << amount << endl;
        }

        virtual void deposit(double amount) const {
            cout << "Savings: You are depositing " << amount << endl;
        }

        virtual ~Savings() {
            cout << "Savings: destructing..." << endl;
        }
};

int main(int argc, char const *argv[]) {
    
    Account* acc = new Savings();

    acc->deposit(100.00);

    delete acc;

    return 0;
}
