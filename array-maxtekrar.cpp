//69

#include<iostream>
using namespace std;
int main()
{
double x[50] = {0}, a, mx;
int n[50] = {0}, i, nf = 0, maxf = 0, j;
for(i = 0; i < 50; i++)
{
cin >> a;
for(j = 0; j < nf; j++)
if(x[j] == a)
{
n[j]++;
break;
}
}
if(j == nf)
{
x[nf] = a;
n[nf]++;
nf++;
}
for(i = 0; i < 50; i++)
if(n[i] > maxf)
{
maxf = n[i];
mx = x[i];
}

cout << mx << endl;
}