#include <iostream>
using namespace std;

struct val
{
    double z;
    int a;
    int b;
    // int c;
    // int d;
    char e;
    // char d;
};

val fun(val qq)
{
    // qq.a = 3;
    // qq.b = 2;
    // qq.c = 'a';
    // qq.d = 'b';

    return qq;
}

int main()
{
    val s;
    val q = fun(s);
    // cout << q.a << endl;
    //  << q.b << endl;
    //  << q.c << endl
    //  << q.d << endl;
    cout << "size:" << sizeof(q) << endl;
    return 0;
}