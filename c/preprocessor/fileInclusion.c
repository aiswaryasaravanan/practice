// This type of preprocessor directive tells the compiler 
// to include a file in the source code program

// "" - preprocessor looks into the same directory for the file ... 
//       If not found then look into the in standard folder of lib
// <> - looksj into the standard folder of library

#include<stdio.h>
#include "calc.h"

void main(){
    printf("%d\n",add(3,4));
    printf("%d\n",sub(3,4));
    printf("%d\n",mul(3,4));
    printf("%d\n",div(3,4));    
}