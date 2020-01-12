// Macros are a piece of code in a program which is given some name. 
// Whenever this name is encountered by the compiler the compiler replaces the name 
// with the actual piece of code. The ‘#define’ directive is used to define a macro

#include<stdio.h>
#define MACRO1 5
#define macro2 "Aishu"
#define macro3 printf("PrintMacro\n");
#define macro4(a) a+a
#define macro6 printf("stmt1\n"); printf("stmt2\n");
void main(){
    printf("%d\n",MACRO1);
    printf("%s\n",macro2);
    macro3;
    printf("%d\n",macro4(5));
    macro6;
}