
// #include <bits/stdc++.h>
// using namespace std;
// int convertFive(int n);

// // Driver program to test above function
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n;
//         cin >> n;
//         cout << convertFive(n) << endl;
//     }
// }

// int findLength(int nn)
// {
//     int len = 0;
//     while (nn > 0)
//     {
//         nn = nn / 10;
//         len++;
//     }
//     return len;
// }

// int findMSB(int nn, int len)
// {
//     for (int i = 0; i < len - 1; i++)
//         nn = nn / 10;
//     return nn;
// }

// int convertFive(int n)
// {
//     int q, m, N = 0, n1;
//     n1 = n;
//     int l = findLength(n1);
//     while (l--)
//     {
//         m = findMSB(n, l);
//         if (m == 0)
//             q = 5;
//         else
//             q = m;
//         N = N * 10 + q;
//         n = removeMSB(n);
//     }
//     return N;
// }

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