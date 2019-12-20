// input:4
// output:
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int n, n1;
    cin >> n;
    n1 = n;
    int arr[2 * n - 1][2 * n - 1];
    while (n1)
    {
        for (int i = n - n1; i < (2 * n1 - 1) + (n - n1); i++)
        {
            for (int j = n - n1; j < (2 * n1 - 1) + (n - n1); j++)
            {
                arr[i][j] = n1;
            }
        }
        n1--;
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}