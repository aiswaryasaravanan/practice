#include <stdio.h>
// #include <conio.h>
int main()
{
    int a, b[100], c = 0, i = 0, n;
    printf("\n enter the number");
    scanf("%d", &a);
z:
    if ((a / 2) != 0)
    {
        b[i] = a % 2;
        i++;
        n = i;
        a = a / 2;
        goto z;
    }
    else if ((a / 2) == 0)
    {
        b[n] = a;
        for (i = 0; i <= n; i++)
        {
            if (b[i] == 1)
                c = c + 1;
        }
    }
    printf("\n the bit set of %d is %d", a, c);
    printf("\nBinary equivalent of %d is:", a);
    for (; i >= 0; i--)
    {
        printf("%d", b[i]);
    }
    return 0;
}