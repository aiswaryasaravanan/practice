#include<stdio.h>
void main(){
    
    int a = 1;
    if(-1){                                
        printf("Yes...I'm in..\n");
    }

    if('a'){                             
        printf("Works for char too....\n");          
    }

    if("Aishu"){                              
        printf("Works for string too....\n");          
    }

    if(0){
        printf("Huh..Zero...! No way...!");
    }

    if(printf("Yes\n")){
        printf("printed and let in...\n");
    }

    if(1-1){
        printf("1-1 is 0...So sad...");
    }

    if(a--){
        printf("post Decrement..returns a and decremented");
    }

    a = 1;

    if(--a){
        printf("decremented and returned...");
    }
}