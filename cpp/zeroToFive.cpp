//completed
#include <iostream>
#include <stack>

using namespace std;

int findLength(int nn)
{
    int len = 0;
    while (nn > 0)
    {
        nn = nn / 10;
        len++;
    }
    return len;
}

int main()
{
    stack<int> s;
    int n, mod, N = 0, p;
    cin >> n;
    int length = findLength(n);
    for (int i = 0; i < length; i++)
    {
        mod = n % 10;
        if (mod == 0)
            s.push(5);
        else
            s.push(mod);
        n = n / 10;
    }
    for (int i = 0; i < length; i++)
    {
        p = s.top();
        s.pop();
        // cout << p;
        N = N * 10 + p;
    }
    cout << N;
    return 0;
}