#include <iostream>
using namespace std;

int main() {
	int t,p,q,r,s;
	cin>>t;
	while(t--){
	    cin>>p>>q>>r>>s;
	    if(p>q+r+s){cout<<"YES"<<"\n";}
	    else if(q>p+r+s){cout<<"YES"<<"\n";}
	    else if(r>p+q+s){cout<<"YES"<<"\n";}
	    else if(s>p+q+r){cout<<"YES"<<"\n";}
	    else{cout<<"NO"<<"\n";}
	}
	return 0;
}
