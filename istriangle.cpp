//istriangle
#include <iostream>
using namespace std;



bool istriangle(double a, double b, double c)
{
return a > 0 && b > 0 && c > 0 && a + b > c && a + c > b
&& b + c > a;
}

int main(){

    bool result = istriangle(3,4,5);
    cout<<result;

}
