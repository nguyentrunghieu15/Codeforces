#include <bits/stdc++.h>
using namespace std;
bool slove(){
    int n; cin>>n;  
    int A[n+1];
    memset(A,0,sizeof(A));
    for(int i=0;i<n;i++){
        int c;cin>>c;
        while(c>n){
            c/=2;
        }
        A[c]++;
    }
    for(int i=n;i>=1;i--){
        if(A[i]>1){
            A[i/2]+=A[i]-1;
        }
        if(A[i]==0)
            return false;
    }
    return true;
}
int main(){
    // freopen("data.txt","r",stdin);
    // int t;cin>>t;
    // for(int i=0;i<t;i++){
    //     if(slove())
    //         cout<<"YES"<<endl;
    //     else
    //         cout<<"NO"<<endl;
    // }
    // return 0;
}