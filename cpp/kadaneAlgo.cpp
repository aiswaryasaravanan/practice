//maximum subarray problem
//with segment error

#include <iostream>
using namespace std;

int main() {
	int t,arr[100],i,j,n,sum=0;
	cin>>t;
	for(int tt=0;tt<t;tt++){
	    cin>>n;
	    for(int k=0;k<n;k++)
	        cin>>arr[k];
	    int max=-62000;
	    for(i=0;i<n;i++){
	        sum=0;
	        for(j=0;j<(n-i);j++){
	            sum+=arr[i+j];
	            if(sum>max){
	                max=sum;
	            }
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}