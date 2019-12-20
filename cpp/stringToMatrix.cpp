//string to 2 d array
//search for substring
//incomplete
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s;
    int size = 1;
    cin >> s;
    int len = s.length();
    while (size * size < len)
    {
        size++;
    }

    char arr[size][size];
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (k < len)
            {
                arr[i][j] = s.at(k);
                cout << arr[i][j] << " ";
                k++;
            }
        }
        cout << endl;
    }
    // k = 0;
    // int ptr, ii, jj, flag = 0;
    // string sub;
    // cin >> sub;
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (sub.at(k) == arr[i][j])
    //         {
    //             // ptr = arr[i][j];
    //             ii = i;
    //             jj = j;
    //             while (k++ < sub.length())
    //             {
    //                 if (sub.at(k) != arr[ii][++jj])
    //                 {
    //                     flag = 1;
    //                     k = 0;
    //                     break;
    //                 }
    //             }
    //             jj = j;
    //             while (k++ < sub.length() && flag != 0)
    //             {
    //                 if (sub.at(k) != arr[++ii][jj])
    //                 {
    //                     flag = 1;
    //                     k = 0;
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
    return 0;
}