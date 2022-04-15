#include <bits/stdc++.h>

using namespace std;
void slove(){
    set<int>A;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int c;cin>>c;
        A.insert(c);
    }
    int size=A.size();
    for(int i=1;i<=n;i++){
        if(i<=size){
            cout<<size<<" ";
        }else cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        slove();
    }
    return 0;
}