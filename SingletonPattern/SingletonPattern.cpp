#include <iostream>
using namespace std;

class Singleton {
public:
    static Singleton& Instance() {
        static Singleton instance;
        return instance;
    }

private:
    Singleton() {}
    Singleton(const Singleton &another) {}
};


int main() {
    Singleton &singleton1 = Singleton::Instance();
    Singleton &singleton2 = Singleton::Instance();
    
    cout << &singleton1 << endl;
    cout << &singleton2 << endl;
    
    return 0;
}
