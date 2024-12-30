//chainprint
#include <iostream>
using namespace std;

void chainprint(string s, int n = 1)
{
    for (int i = 0; i < n; i++) {
        cout << s;
    }
}

int main(){
   
    chainprint("Hello", 3); 
   
    chainprint("Hi", 5); 
    
    return 0;
}

