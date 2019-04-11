//To fing n th max and n th min of an array without sorting
//incomplete
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n, nn, val, ii, jj;
    cin >> nn;
    vector<int> arr;
    vector<int>::iterator t;
    int max = 0, min = INT_MAX;
    for (int i = 0; i < nn; i++)
    {
        cin >> val;
        arr.push_back(val);
    }
    cout << endl
         << "n th value:" << endl;
    cin >> n;
    while (n--)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr.at(i) > max)
            {
                max = arr.at(i);
                ii = i;
            }
            if (arr.at(i) < min)
            {
                min = arr.at(i);
                jj = i;
            }
        }
        if (n > 0)
        {
            t = arr + ii;
            arr.erase(t);
            t = arr.begin() + jj;
            arr.erase(t);
            for (int k = 0; k < arr.size(); k++)
                cout << arr[k];
        }
        else
        {
            cout << "max:" << arr.at(ii) << " min:" << arr.at(jj);
        }
    }

    return 0;
}