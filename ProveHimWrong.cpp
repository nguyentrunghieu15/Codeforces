#include <bits/stdc++.h>
using namespace std;

void slove(){
    int n;cin>>n;
    if(!(n<=19)){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        int t=1;
        cout<<t<<" ";
        for(int i=1;i<n;i++){
            cout<<t*3<<" ";
            t*=3;
        }
        cout<<endl;
        return ;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        slove();
    }
    return 0;
}