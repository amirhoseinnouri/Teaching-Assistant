//23

#include<iostream>
using namespace std;
int main()
{
int i, x, y;
cin >> x >> y;

for(i = 1; i <= x; i++)
if(x % i == 0 && y % i == 0)
cout << i << endl;
}