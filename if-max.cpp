//9

#include<iostream>
using namespace std;
int main()
{
double a, b, c;
cin >> a >> b >> c;
if(a > b && a > c)
cout << a << endl;
else
if(b > c)
cout << b << endl;
else
cout << c << endl;
}