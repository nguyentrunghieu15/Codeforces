#include <bits/stdc++.h>

using namespace std;
bool slove(){
    int a, b, c;
    cin>>a>>b>>c;
    int d;
    d=c-b;
    if(b-d>0&&(b-d)%a==0)
        return true;
    d=b-a;
    if(b+d>0&&(b+d)%c==0)
        return true;
    d=c-a;
    if(d%2==0){
        d=d/2;
        if(a+d>0&&(a+d)%b==0)
            return true;
    }
    return false;
}
int main(){
    // freopen("data.txt","r",stdin);
    int t;cin>>t;
    for(int i=0;i<t;i++){
        if(slove())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}