#include <iostream>
using namespace std;

int main() {
    int t,jerry,tom;
    cin>>t;
    while(t--){
        cin>>jerry>>tom;
        if(tom>jerry){cout<<"YES"<<"\n";}
        else{cout<<"NO"<<"\n";}
    }
	return 0;
}
