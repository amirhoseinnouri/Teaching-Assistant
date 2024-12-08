//30

#include<iostream>
using namespace std;
int main()
{
double x, m = 0;
int i;
for(i = 0; i < 100; i++)
{cin >> x;
m += x;
}
cout << (m / 100) << endl;
}