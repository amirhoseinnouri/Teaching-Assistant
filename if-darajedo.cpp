//12

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double a, b, c, delta, x1, x2;
cin >> a >> b >> c;
delta = b * b - 4 * a * c;
if(delta > 0)
{
x1 = (-b + sqrt(delta))/(2*a);
x2 = (-b - sqrt(delta))/(2*a);
cout << "2ta rishe darad: " << x1 << ", " << x2
<< endl;
}
else
if(delta == 0)
{
x1 = -b / (2 * a);
cout << "yek rishe darad: " << x1 << endl;
}
else
cout << "rishe nadarad" << endl;
}