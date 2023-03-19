#include <iostream>
using namespace std;

int main() {
	int t,x1,x2,x3,n;
	cin>>t;
	while(t--){
	    int sum1,sum2,sum3;
	    cin>>x1>>x2>>x3>>n;
	    sum1=x1+x2;
	    sum2=x1+x3;
	    sum3=x2+x3;
	    if(sum1>=n || sum2>=n || sum3>=n){cout<<"YES"<<"\n";}
	    else{cout<<"NO"<<"\n";}
	}
	return 0;
}
