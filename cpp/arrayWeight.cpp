// Given a set of numbers like <10, 36, 54,89,12>
// we want to find sum of weights based on the following conditions
//     1. 5 if a perfect square
//     2. 4 if multiple of 4 and divisible by 6
//     3. 3 if even number
// And sort the numbers based on the weight and print it as follows
// <10,its_weight>,<36,its weight><89,its weight>

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct array
{
    int data;
    int weight;
} a[10];
int isPerfectSquare(int d)
{
    for (int j = 1; j < d / 2; j++)
    {
        if (j * j == d)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].data;
        a[i].weight = 0;
        if (isPerfectSquare(a[i].data))
            a[i].weight += 5;
        if ((a[i].data & 3 == 0) && (a[i].data % 6 == 0))
            a[i].weight += 4;
        if (a[i].data % 2 == 0)
            a[i].weight += 3;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].weight > a[j].weight)
            {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i].data << " " << a[i].weight << endl;
    return 0;
}