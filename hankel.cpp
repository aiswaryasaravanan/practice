//Check if a given matrix is Hankel or not
// m[][] = {
//     {1, 2, 3, 5},
//     {2, 3, 5, 8},
//     {3, 5, 8, 0},
//     {5, 8, 0, 9}};
// Output : Yes
//  All diagonal {1}, {2, 2}, {3, 3, 3}, {5, 5, 5, 5}, {8, 8, 8}, {9} have constant value.

//incomplete

#include <iostream>

using namespace std;

int static flag = 0;

void fun(int i, int j, int n, int arr[][20])
{
    int ii = i;
    int jj = j;
    while (!((i == jj) && (j == ii)))
    {
        if (arr[i][j] == arr[ii][jj])
        {
            i++;
            j--;
        }
        else
        {
            cout << "NO";
            exit(0);
        }
    }
}

int main()
{
    int i, j, ii, jj, n, flag = 0;
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    i = 0;
    j = 1;
    while (j >= 0 || j < n)
    {
        fun(i, j, n, arr);
        j++;
    }
    i++;
    j--;
    while (i >= 0 || i < n)
    {
        fun(i, j, n, arr);
        i++;
    }
    cout << "YES";
    return 0;
}