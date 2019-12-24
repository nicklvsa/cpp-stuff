#include <iostream>
#include <memory>
using namespace std;


class Base {
    public:
        virtual void say_hello() const {
            cout << "Hello from the base class!" << endl;
        }
};

class Extended: public Base {
    public:
        virtual void say_hello() const {
            cout << "Hello from the extended class!" << endl;
        }
};

void greet(const Base &base) {
    cout << "Greetings: ";
    base.say_hello();
}


int main(int argc, const char* argv[]) {
    
    Base base;
    Extended extended;
    

    //cout << "this is a test" << endl;
    return 0;
}