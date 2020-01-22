#include<stdio.h>

char* greeting(char name[]){
    return name;
}

int main(){
    char *s;
    s=greeting("Aishu");
    printf("%s",s);
    return 0;
}