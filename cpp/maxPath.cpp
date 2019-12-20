//The problem is to count all the possible paths from top left to bottom right
// of a  MxN matrix with the constraints that from each cell you can either move to right or down.

#include <iostream>
using namespace std;

long fact(int i)
{
    if (i == 1 || i == 0)
        return 1;
    return i * fact(i - 1);
}

long countPath(int a, int b)
{
    long x, y, z;
    x = fact(a + b - 2);
    y = fact(a - 1);
    z = fact(b - 1);
    long j = x / (y * z);
    return j;
}

int main()
{
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        // cout << countPath(m, n);
        cout << fact(13) << endl;
        cout << fact(9) << endl;
        cout << fact(4) << endl;
    }
    return 0;
}