//Input: a1b10
//Output: abbbbbbbbbb

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k = 0, len = s.length();
    while (k < len)
    {
        if (s.at(k) <= 57 || s.at(k) >= 48)
        {
            cout << val;
        }
        k++;
    }
}