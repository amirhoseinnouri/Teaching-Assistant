//fact

#include <iostream>
using namespace std;

unsigned long long fact(unsigned x) {
    unsigned long long f = 1; 
    for (unsigned i = 2; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    unsigned num = 8;
    cout << "Factorial of " << num << " is: " << fact(num) << endl;
    return 0;
}
