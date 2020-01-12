#include<stdio.h>
#include<string.h>

char* greeting(char name[]){
    // strcat(name," Welcome!");
    return name;

void main(){
    char s[];
    s=greeting("Aishu");
    printf("%s",s);
}