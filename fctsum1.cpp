//fctsum1


#include <iostream>
using namespace std;

int fctsum1(int x)
{
    int s = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            s += i; 
        }
    }
    return s;
}

int main() {
    int num = 28;
    int result = fctsum1(num); 
    cout << "The sum of divisors of " << num << " is: " << result << endl;
    return 0;
}
