#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string binaryEq(char h)
{
    string val;
    switch (h)
    {
    case '0':
        val = '0000';
        break;
    case '1':
        val = '0001';
        break;
    case '2':
        val = '0010';
        break;
    case '3':
        val = '0011';
        break;
    case '4':
        val = '0100';
        break;
    case '5':
        val = '0101';
        break;
    case '6':
        val = '0110';
        break;
    case '7':
        val = '0111';
        break;
    case '8':
        val = '1000';
        break;
    case '9':
        val = '1001';
        break;
    case 'A':
        val = '1010';
        break;
    case 'B':
        val = '1011';
        break;
    case 'C':
        val = '1100';
        break;
    case 'D':
        val = '1101';
        break;
    case 'E':
        val = '1110';
        break;
    case 'F':
        val = '1111';
        break;
    }

    return val;
}
int main()
{
    string hexad;
    cin >> hexad;
    for (int i = 0; i < hexad.length(); i++)
    {
        cout << binaryEq(hexad.at(i));
    }
    return 0;
}