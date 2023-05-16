#include <iostream>
using namespace std;

int main() {
int t,n,m;
float z;
cin>>t;
while(t--){
    cin>>n>>m;
    z=n-(n*0.1);
    if(z<m){cout<<"ONLINE"<<"\n";}
    
    else if(z>m){cout<<"DINING"<<"\n";}
    else if(z=m){cout<<"EITHER"<<"\n";}
}
	return 0;
}
