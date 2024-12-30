//isperfect and fctsum
#include <iostream>
#include <cmath> // For sqrt function
using namespace std;
int fctsum(int x) {
    int sqx = (int) sqrt(x), s = 1, i;
    for(i = 2; i <= sqx; i++) {
        if(x % i == 0) {
            s += i;
            if(i != x / i) {
                s += x / i;
            }
        }
    }
    return s; 
}
bool isperfect(int x) {
    return x == fctsum(x);
}
int main() {
    int num = 28;
    if (isperfect(num)) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}
