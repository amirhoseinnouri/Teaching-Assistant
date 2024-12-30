//bmm
#include <iostream>
using namespace std;

int bmm(int a, int b)
{
    // Loop to find the GCD
    for (int i = (a < b ? a : b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;  
        }
    }
    return 1; 
}

int main() {
    int num1 = 36, num2 = 60;
    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << bmm(num1, num2) << endl;
    return 0;
}
