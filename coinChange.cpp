// Find minimum number of currency notes and values that sum to given amount
// We may assume that we have infinite supply of notes of values {2000, 500, 200, 100, 50, 20, 10, 5, 1}

// Input : 800
// Output : Currency  Count
//          500 : 1
//          200 : 1
//          100 : 1

#include <iostream>
using namespace std;

int main()
{
    int coin[9] = {2000, 500, 200, 100, 50, 20, 10, 5, 1};
    int count[9] = {0};
    int d, i = 0;
    cin >> d;
    while (d > 0)
    {
        while (d >= coin[i])
        {
            d -= coin[i];
            count[i]++;
        }
        i++;
    }
    for (i = 0; i < 9; i++)
        if (count[i] > 0)
            cout << coin[i] << " : " << count[i] << endl;
    return 0;
}