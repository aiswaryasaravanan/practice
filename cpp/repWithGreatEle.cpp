//Replace every element with the greatest element on right side

//completed

#include <iostream>

using namespace std;

int main()
{
    int n, max, val;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[n - 1];
    arr[n - 1] = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        val = arr[i];
        arr[i] = max;
        if (val > max)
            max = val;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\t';
}