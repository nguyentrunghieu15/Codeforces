#include <bits/stdc++.h>

using namespace std;
void slove(){
    int n;cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    long long slove=(long long)pow(2,n)-1;
    cout<<slove<<endl;
    return;
}
int main(){
    int t;cin>>t;
    while(t--){
        slove();
    }
    return 0;
}