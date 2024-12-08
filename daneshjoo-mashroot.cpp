//37

#include<iostream>
using namespace std;
int main()
{
double x, m = 0;
int i;
for(i = 0; i < 100; i++)
{
cin >> x;
if(x < 12 && x > m)
m = x;
}

cout << m << endl;
}