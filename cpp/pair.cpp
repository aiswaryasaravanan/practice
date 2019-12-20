#include <iostream>
using namespace std;

pair<int, int> fun(int a, int b)
{
    return {a, b};
}
int main()
{
    pair<int, int> ab = fun(5, 2);
    cout << ab.first << endl;
    cout << ab.second << endl;

    return 0;
}