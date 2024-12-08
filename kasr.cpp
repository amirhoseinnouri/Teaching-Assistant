//41

#include<iostream>
using namespace std;
int main()
{
double m = 0, a = 1;
int i;
for(i = 1; i <= 1000; i++, a = -a)
m += a / i;

cout << m << endl;
}