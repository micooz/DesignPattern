#include <iostream>
using namespace std;

class Singleton {
public:
    static Singleton& Instance() {
        static Singleton instance;
        return instance;
    }

    void printInstanceAddr() {
        cout << this << endl;
    }

private:
    Singleton() {
        cout << "ctor" << endl;
    }
};


int main() {
    Singleton &singleton1 = Singleton::Instance();
    singleton1.printInstanceAddr();

    Singleton &singleton2 = Singleton::Instance();
    singleton2.printInstanceAddr();

    return 0;
}
