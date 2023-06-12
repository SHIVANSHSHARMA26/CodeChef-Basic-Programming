#include <iostream>
using namespace std;

int main() {
	int t,N,X,ans;
	cin>>t;
	while(t--){
	    cin>>N>>X;
	    
	    int arr[N];
	    ans=0;
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	        if(arr[i]>=X){ans++;}
	    }cout<<ans<<"\n";
	    
	}
	return 0;
}
