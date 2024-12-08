//61

#include<iostream>
using namespace std;
int main()
{
int i, j, s;
for(i = 20, s = 1; i >=0; i--, s += 2)
{
for(j = 0; j < i; j++)
cout << " ";
for(j = 0; j < s; j++)
cout << "*";

cout << endl;

}
}