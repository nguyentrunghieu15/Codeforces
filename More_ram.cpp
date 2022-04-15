#include <bits/stdc++.h>

using namespace std;

/*Did you know you can download more RAM? There is a shop with n different pieces of software that increase your RAM. The i-th RAM increasing software takes ai GB of memory to run (temporarily, once the program is done running, you get the RAM back), and gives you an additional bi GB of RAM (permanently). Each software can only be used once. Your PC currently has k GB of RAM.

Note that you can't use a RAM-increasing software if it takes more GB of RAM to use than what you currently have.

Since RAM is the most important thing in the world, you wonder, what is the maximum possible amount of RAM achievable?*/
vector <pair <int , int >>A;
int n; int k;
int slove(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        pair<int ,int>c;
        cin>>c.first;
        c.second=0;
        A.push_back(c);
    }
    for(int i=0;i<n;i++){
        cin>>A[i].second;
    }
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++){
        if(A[i].first<=k){
            k+=A[i].second;
        }else break;
    }
    A={};
    return k;
}
int main(){
    // freopen("data.txt","r",stdin);
    int t;cin>>t;
    for(int i=0;i<t;i++){
        cout<<slove()<<endl;
    }
    return 0;
}
