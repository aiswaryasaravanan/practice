// input : aaabbcdee
// output : a3b2cde2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int j = 0, i = 0, count = 0;
    while (j < s.length())
    {
        if (s[i] == s[j])
        {
            count++;
            j++;
        }
        else
        {
            cout << s[i];
            if (count > 1)
                cout << count;
            i = j;
            count = 0;
        }
    }
    cout << s[i];
    if (count > 1)
        cout << count;
    return 0;
}