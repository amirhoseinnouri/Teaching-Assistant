//18

#include<iostream>
using namespace std;
int main()
{
int i;
for(i = 1000; i <= 9999; i++)
if(i % 7 == 0 && i % 3 != 0)
cout << i << endl;
}