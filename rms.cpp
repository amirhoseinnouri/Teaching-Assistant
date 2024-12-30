//rms 

#include <iostream>
#include <cmath>  //baraie sqrt zaroorie 
using namespace std;

double rms(double a, double b = 0, double c = 0, double d = 0)
{
    
    return sqrt(a * a + b * b + c * c + d * d);
}

int main(){
    double result = rms(3, 4); 
    cout << "The rms : " << result << endl;
    return 0;
}
