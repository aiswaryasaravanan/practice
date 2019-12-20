//completed for single subarray not for many

#include <iostream>

using namespace std;

int main()
{
    int n, i, count = 0, max = 0, ptr, flag = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            count++;
            if (count > max)
            {
                max = count;
                ptr = i;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << "Max Count is:" << max << endl;
    cout << "Seq is:" << endl;
    i = ptr - (max - 1);
    for (int j = 0; j < max; j++)
    {
        cout << arr[i++];
    }
    return 0;
}