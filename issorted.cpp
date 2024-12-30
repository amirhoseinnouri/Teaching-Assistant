//issorted

#include <iostream>
using namespace std;

bool issorted(int x) {
    int d = 10; 
    while (x > 0) {
        int digit = x % 10;  
        if (digit >= d) {
            return false;
        }
        d = digit; 
        x /= 10;  
    }
    return true;
}

int main() {
    int num = 1234;//and !4321
    if (issorted(num)) {
        cout << num << " is sorted in decreasing order." << endl;
    } else {
        cout << num << " is not sorted in decreasing order." << endl;
    }
    return 0;
}
