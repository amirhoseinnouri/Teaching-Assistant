//67

#include<iostream>
using namespace std;
int main()
{
double x[50], m = 0, d;
int i;

for(i = 0; i < 50; i++)
{
cin >> x[i];
if(x[i] > m)
m = x[i];
}
d = 20 - m;
for(i = 0; i < 50; i++)
{
x[i] += d;
cout << x[i] << endl;
}
}