//countchars

#include <iostream>
using namespace std;

int countchars(string s, char c) {
    int n = 0, len = s.length();
    for(unsigned i = 0; i < len; i++) {
        if(s[i] == c) {
            n++;
        }
    }
    return n;
}

int main() {
    string str = "hello world";
    char ch = 'o';
    int result = countchars(str, ch);
    cout << "The character '" << ch << "' appears " << result << " times in the string \"" << str << "\"." << endl;
    return 0;
}
