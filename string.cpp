#include<iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char c[100];
    s.copy(c,s.length(),2);
    cout << "1.  ->" << c << endl;

    s.copy(c,s.length()-2,0);
    cout << "2.  ->" << c ;
}