#include<stdio.h>
int main(){
    int a = 5;
    int *aptr = &a;
    int **pp = &aptr;
    printf("%d - %p (%d)\n",a,aptr,*aptr);
    printf("%p -> %p -> %d\n",pp, *pp, **pp);
    return 0;
}