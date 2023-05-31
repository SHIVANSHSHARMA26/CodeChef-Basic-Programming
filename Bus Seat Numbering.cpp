#include <iostream>
using namespace std;

int main() {
	int t,a;
	cin>>t;
	while(t--){
	    cin>>a;
	    if(a<=10){cout<<"Lower Double"<<"\n";}
	    else if(11<=a && a<=15){cout<<"Lower Single"<<"\n";}
	    else if(16<=a && a<=25){cout<<"Upper Double"<<"\n";}
	    else if(25<=a && a<=30){cout<<"Upper Single"<<"\n";}
	}
	return 0;
}
