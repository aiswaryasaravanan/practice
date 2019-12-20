#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "No of Students:";
    cin >> n;
    int state[n] = {1};
    int count;
    for (int j = 1; j <= n; j++)
    {
        count = 1;
        for (i = 1; i <= j / 2; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        state[j] = count;
    }
    cout << "Closed Lock:" << endl;
    for (i = 1; i <= n; i++)
    {
        if (state[i] % 2 == 0)
        {
            cout << "Lock:" << i << endl;
        }
    }

    return 0;
}