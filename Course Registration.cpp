#include <iostream>
using namespace std;

int main() {
	int t,n,m,k,v;
	cin>>t;
	while(t--){
	    cin>>n>>m>>k;
	    v=m-k;
	    if(v>=n){cout<<"YES"<<"\n";}
	    else{cout<<"NO"<<"\n";}
	}
	return 0;
}
