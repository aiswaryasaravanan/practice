#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int t,size,arr[50],i,j,k,count,even,odd;
    printf("Enter no of test case:");
    scanf("%d",&t);
    for(k=0;k<t;k++){
        odd=0;even=0;
        scanf("%d",&size);
        for(i=0;i<size;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<size;i++){
            if(arr[i]==-1999)
                continue;
            count=0;
            for(j=0;j<size;j++){
                if(arr[i]==-1999)
                    continue;
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count%2==0)
                even+=arr[i];
            else
                odd+=arr[i];
            for(j=size-1;j>=0;j--){
                if(arr[i]==arr[j]){
                    arr[j]=-1999;
                }
            }
        } 
        printf("%d",abs(even-odd)); 
    }
}