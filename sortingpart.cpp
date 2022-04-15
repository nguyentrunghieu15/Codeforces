#include <bits/stdc++.h>

using namespace std;
vector<int>A;
int c;
bool slove(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        A.push_back(c);
    }
    int max=A[0];
    bool flag=true;
    for(int i=1;i<n;i++){
        if(A[i]<max){
            flag=false;
            break;
        }else{
            max=A[i];
        }
    }
    A={};
    return flag;
}
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        bool k=slove();
        if(k)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}