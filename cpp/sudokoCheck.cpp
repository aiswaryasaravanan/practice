//Given a 9×9 sudoku we have to evaluate it for its correctness.
//We have to check both the sub matrix correctness and the whole sudoku correctness.

#include <iostream>
using namespace std;

int main()
{
    int s[9][9] = {
        {7, 3, 5, 6, 1, 4, 8, 9, 2},
        {8, 4, 2, 9, 7, 3, 5, 6, 1},
        {9, 6, 1, 2, 8, 5, 3, 7, 4},
        {2, 8, 6, 3, 4, 9, 1, 5, 7},
        {4, 1, 3, 8, 5, 7, 9, 2, 6},
        {5, 7, 9, 1, 2, 6, 4, 3, 8},
        {1, 5, 7, 4, 9, 2, 6, 8, 3},
        {6, 9, 4, 7, 3, 8, 2, 1, 5},
        {3, 2, 8, 5, 6, 1, 7, 4, 9}};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (s[i][j] == s[i][k])
                {
                    cout << "NO" << endl;
                    exit(0);
                }
            }

            for (int k = i + 1; k < 9; k++)
            {
                if (s[i][j] == s[k][j])
                {
                    cout << "NO" << endl;
                    exit(0);
                }
            }

            int bi = i / 3;
            int bj = j / 3;

            for (int k = bi * 3; k < (bi * 3) + 3; k++)
            {
                for (int kk = bj * 3; kk < (bj * 3) + 3; kk++)
                {
                    if (k != i && kk != j)
                    {
                        if (s[i][j] == s[k][kk])
                        {
                            cout << "NO" << endl;
                            exit(0);
                        }
                    }
                }
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}