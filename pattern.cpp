//pattern printing
//Print the word with odd letters as

//P         M
//  R      A
//    O  R
//      G
//   O    R
//  R       A
// P          M

#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int x;

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        x = std::min(i, j);
        while (x-- > 0)
            cout << " ";
        cout << s[std::min(i, j)];
        x = len - 2 - 2 * (std::min(i, j));
        while (x-- > 0)
            cout << " ";
        if (i != j)
            cout << s[std::max(i, j)];
        cout << endl;
    }
    return 0;
}