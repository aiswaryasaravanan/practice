//Given an array A[] of N positive integers.
//The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].

//completed

#include <iostream>
using namespace std;

int main()
{
    int t, n, i, j, max;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        max = 0;
        for (i = 0; i < n; i++)
        {
            for (j = n - 1; j >= 0, j - i > max; j--)
            {
                if (arr[i] < arr[j])
                {
                    max = j - i;
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}