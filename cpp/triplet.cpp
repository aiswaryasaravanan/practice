//completed

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, val;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            val = pow(arr[i], 2) + pow(arr[j], 2);
            for (int k = 0; k < n; k++)
                if (pow(arr[k], 2) == val)
                    cout << arr[i] << arr[j] << arr[k] << endl;
        }
    }
    return 0;
}