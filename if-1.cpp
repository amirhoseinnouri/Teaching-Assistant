//8

#include<iostream>
using namespace std;
int main()
{
double a, b, c, m;
cin >> a >> b >> c;
if(a*a == b*b + c*c)
m = b * c / 2;
else
if(b*b == a*a + c*c)
m = a * c / 2;
else
if(c*c == a*a + b*b)
m = a * b / 2;
else
m = a + b + c;
cout << m << endl;
}