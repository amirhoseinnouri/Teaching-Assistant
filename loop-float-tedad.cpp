//26

#include <iostream>
using namespace std;
int main()
{
int i, x;
cin >> x;
for(i = 0; x > 0; i++)
x /= 10;

cout << i << endl;
}