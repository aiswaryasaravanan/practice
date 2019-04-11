#include <iostream>
using namespace std;

int flag = 0;
int check(int x, int n)
{
    if (x >= 0 && x < n)
    {
        return 1;
    }
    flag = 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x = 0, y = 0, x1, y1;
    cout << "index:" << endl;
    cin >> x1 >> y1;
    string path;
    cin >> path;

    for (int i = 0; i < path.length(); i++)
    {
        if (path.at(i) == '>')
            if (check(y + 1, n))
                y = y + 1;
        if (path.at(i) == '<')
            if (check(y - 1, n))
                y = y - 1;
        if (path.at(i) == 'v')
            if (check(x + 1, n))
                x = x + 1;
        if (path.at(i) == '^')
            if (check(x - 1, n))
                x = x - 1;
    }

    if (x == x1 && y == y1 && flag == 0)
    {
        x = 0;
        y = 0;
        for (int i = 0; i < path.length(); i++)
        {
            if (path.at(i) == '>')
                cout << arr[x][++y];
            if (path.at(i) == '<')
                cout << arr[x][--y];
            if (path.at(i) == 'v')
                cout << arr[++x][y];
            if (path.at(i) == '^')
                cout << arr[--x][y];
        }
    }
    else
    {
        cout << "invalid path:";
    }

    return 0;
}