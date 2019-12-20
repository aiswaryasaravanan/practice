#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    string arr[5] = {"abc", "zzz", "bza", "acb", "uuu"};
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;
    sort(arr, arr + 5, greater<string>());
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;

    return 0;
}