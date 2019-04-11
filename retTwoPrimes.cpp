//Given an even number ( greater than 2 ), return two prime numbers whose
// sum will be equal to given number. There are several combinations possible.
//Print only first such pair.

//completed

#include <iostream>
using namespace std;

int isPrime(int z)
{
    for (int i = 2; i <= z / 2; i++)
    {
        if (z % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isBothPrime(int a, int b)
{
    if (isPrime(a) && isPrime(b))
        return 1;
    else
        return 0;
}

int main()
{
    int t, n, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (x = 3, y = n - 3; x <= y; x += 2, y -= 2)
        {
            if (isBothPrime(x, y))
            {
                cout << x << " " << y << endl;
                break;
            }
        }
    }
    return 0;
}