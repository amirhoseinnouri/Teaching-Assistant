//64

#include<iostream>
using namespace std;
int main()
{
double x[50];
int i;
for(i = 0; i < 50; i++)
cin >> x[i];

for(i = 49; i >= 0; i--)
cout << x[i] << endl;
}