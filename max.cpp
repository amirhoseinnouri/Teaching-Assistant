//max 
#include <iostream>
using namespace std;

double max(double a, double b, double c) {
    if (a >= b && a >= c)
        return a;
    if (b >= c)
        return b;
    return c;
}

int main() {
    double output = max(6.0, 4.0, 5.0); 
    cout << output; 
    return 0; 
}
