//11

#include<iostream>
using namespace std;
int main()
{
char x;
cin >> x;

if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='y'
||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='Y')
cout << "harfe seda dar" << endl;
else
if(x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
cout << "harfe bi seda" << endl;
else
if(x>= '0' && x <= '9')
cout << "ragham" << endl;
else
cout << "sayer" << endl;
}
