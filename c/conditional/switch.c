// Inference:
// 1)can have mixed case
// 2)but no duplicates
// 3)default executes when none matches...irrespective of its position
// 4)Should not have string case


#include<stdio.h>
# define str "Aishu"
void main(){
    int choice = 1;
    switch(choice){
        default:
            printf("Default\n");
        case 1:
            printf("One\n");
            break;
        case '1':
            printf("SecondOne But a char..\n");
            break;
        case 2:
            printf("Two\n");
            break;
        // case str:
        //     printf("OMG! String...\n");
    }
}