#include<iostream>

using namespace std;

int findLength(int x){
    int count=0;
    while(x>0){
        x=x/10;
        count++;
    }
    return count;
}

int findMSB(int x,int l){
    int mod;
    while(l--){
        mod=x%10;
        x=x/10;
    }
    return mod;
}

int main(){
    int n,temp,j,lt,lj,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        temp=arr[i];
        j=i-1;
        
        for (j = i-1; j >= 0  && (findMSB(temp,findLength(temp))) >= (findMSB(arr[j],findLength(arr[j]))); j--){
            if( (findMSB(temp,findLength(temp))) > (findMSB(arr[j],findLength(arr[j]))) ){
                arr[j+1] = arr[j];
            }
            else if( (findMSB(temp,findLength(temp))) == (findMSB(arr[j],findLength(arr[j]))) ){
                if(arr[temp]==arr[j]){
                    //any order
                }else{
                    lt=findLength(temp);
                    lj=findLength(arr[j]);
                    while(findMSB(temp,--lt) == findMSB(arr[j],--lj)){

                    }
                    if( findMSB(temp,lt) > findMSB(arr[j],lj) ){
                        arr[j+1] = arr[j];
                    }
                    

                }
            }
        }
        
        arr[j+1] = temp;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    
    return 0;
}