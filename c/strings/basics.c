#include<stdio.h>
#include<string.h>

void printName(char str[]){
    printf("Hai %s",str);
}

// char* greet(char name[]){
//     // char greetWord[] = "Hello";
//     strcat(name," Welcome!");
//     return name;

void main(){

    char str[20]="Aishu";
    int a;

    printf("%s",str);

    scanf("%s",str);        //& no need for string
    printf("%s",str);

    scanf("%d",&a);
    printf("%d\n",a);

    printName("Aishu"); 

    // printf("%s",greet("Aishu"));

    printf("%ld",strlen("Aishu"));

    scanf("%[^\n]",str);
    printf("%s\n",str);
}

