#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int withinRange(int xx, int yy)
{
    if ((xx >= 1 && xx <= 8) && (yy >= 1 && yy <= 8))
        return 1;
    return 0;
}

int check(int n, int x, int y, int k, int xk[], int yk[], int xmove, int ymove, map<pair<int, int>, int> mp, int count)
{
    x = x + xmove;
    y = y + ymove;
    while (withinRange(x, y) && mp[{x, y}] != 1)
    {
        x = x + xmove;
        y = y + ymove;
        count++;
    }
    return count;
}
int main()
{
    int n, k, i, j, x, y;
    cout << "Order of Matrix:";
    cin >> n;
    cout << "Queen position:";
    cin >> x >> y;
    cout << "No of obstacles:";
    cin >> k;
    cout << "Coordinates of obstacles:";
    int xk[k], yk[k];
    map<pair<int, int>, int> mp;
    for (i = 0; i < k; i++)
    {
        cin >> xk[i] >> yk[i];
        mp[{xk[i], yk[i]}] = 1;
    }
    int count = 0;
    count = check(n, x, y, k, xk, yk, 0, 1, mp, count);
    count = check(n, x, y, k, xk, yk, 1, 1, mp, count);
    count = check(n, x, y, k, xk, yk, 1, 0, mp, count);
    count = check(n, x, y, k, xk, yk, 1, -1, mp, count);
    count = check(n, x, y, k, xk, yk, 0, -1, mp, count);
    count = check(n, x, y, k, xk, yk, -1, -1, mp, count);
    count = check(n, x, y, k, xk, yk, -1, 0, mp, count);
    count = check(n, x, y, k, xk, yk, -1, 1, mp, count);

    cout << count << endl;
    return 0;
}