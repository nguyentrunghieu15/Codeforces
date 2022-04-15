#include <bits/stdc++.h>

using namespace std;
int l,r,a;
void slove(){
    cin>>l>>r>>a;
    if(l==r){
        cout<<r/a+r%a<<endl;
        return;
    }
    if(a>r||a==1){
        cout<<r<<endl;
        return;
    }
    if(a==r){
        cout<<r-1<<endl;
        return;
    }
    if(l/a==r/a){
        cout<<r/a+r%a<<endl;
        return ;
    }
    cout<<max(r/a+r%a,r/a+a-2)<<endl;
    return;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        slove();
    }
    
    return 0;
}