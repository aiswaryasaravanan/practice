// input:
// D
// output:
// A
// AB
// ABC
// ABCD
// ABC
// AB
// A
#include <iostream>
using namespace std;
int main()
{
    char c, x;
    cin >> c;
    //int t = (int(c) - int('A')) * 2 + 1;
    for (int i = 1; i <= int(c) - int('A') + 1; i++)
    {
        x = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << x;
            x = char(int(x) + 1);
        }
        cout << endl;
    }
    for (int i = int(c) - int('A'); i >= 1; i--)
    {
        x = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << x;
            x = char(int(x) + 1);
        }
        cout << endl;
    }
    return 0;
}