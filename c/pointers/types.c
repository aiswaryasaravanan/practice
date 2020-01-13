#include<stdio.h>
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *ip = arr;
    char *cp = (char*)ip;

    for(int i = 0; i < 8; i++){
        printf("%d %p - %d %p - %d\n", arr[i], ip, *ip, cp, *cp);
        ip++;
        cp++;
    }
    
    return 0;
}