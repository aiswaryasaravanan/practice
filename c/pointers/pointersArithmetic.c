#include<stdio.h>
int main(){
    int a = 5;
    int *p = &a;
    int **pp = &p;

    printf("%p %p %p %p %d\n", &pp, pp, &p, p, a);
    p++;
    printf("%p %d\n", p, *p);
    p++;
    printf("%p %d\n", p, *p);

    return 0;
}