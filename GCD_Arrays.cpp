#include <bits/stdc++.h>

using namespace std;
int l,r,k;

bool slove(){
    cin>>l>>r>>k;
    if(l-r==0&&r!=1)
        return true;
    int couting=0;
    if((l%2==0&&r%2!=0)||(l%2!=0&&r%2==0))
        couting=(r-l+1)/2;
    if(l%2==0&&r%2==0)
        couting=(r-l)/2;
    if(l%2!=0&&r%2!=0)
        couting=(r-l)/2+1;
    if(couting>k)
        return false;
    else return true;
}
int main(){
    // freopen("data.txt","r",stdin);
    int t; cin>>t;
    for(int i=0;i<t;i++){
        if(slove())
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}