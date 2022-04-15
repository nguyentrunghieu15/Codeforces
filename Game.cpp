#include <bits/stdc++.h>

using namespace std;
vector <int>A;
int x,n;
void slove(){
    A={};
    cin>>n;
    cin>>x;
    cout<<x<<" ";
    A.push_back(x);
    for(int i=1;i<n;i++){
        cin>>x;
        cout<<x<<" ";
        if(x==1){
            if(A.back()==1)
                continue;
            else
                A.push_back(x);
        }else{
            A.push_back(x);
        }
    }
    cout<<endl;
    // cout<<A.size()-1<<endl;
    return;
}
int main(){
    freopen("data.txt","r",stdin);
    int t;cin>>t;
    while (t--)
    {
        slove();
    }
    return 0;
}
