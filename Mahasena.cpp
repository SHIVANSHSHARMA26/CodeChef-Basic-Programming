#include <iostream>
using namespace std;

int main() {
    int t,e,o;
    e=0;
    o=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        if(a[i]%2==0){e++;}
        else{o++;}
    }
    if(e>o){cout<<"READY FOR BATTLE";}
    else{cout<<"NOT READY";}
	return 0;
}
