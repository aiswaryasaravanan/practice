//completed

#include <iostream>
#include <string.h>
using namespace std;
int findOccurance(char a[], char b[])
{
    for (int i = 0; i < strlen(a); i++)
        a[i] = toupper(a[i]);
    for (int i = 0; i < strlen(b); i++)
        b[i] = toupper(b[i]);

    int k, count = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int flag = 0;
        k = i;
        for (int j = 0; j < strlen(b); j++)
        {
            if (a[k] != b[j])
            {
                flag = 1;
                break;
            }
            k++;
        }
        if (flag == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char a[30];
    char b[30];
    cin >> a >> b;
    cout << findOccurance(a, b) << endl;
    return 0;
}
