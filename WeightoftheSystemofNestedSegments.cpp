#include <bits/stdc++.h>

using namespace std;
int n,m;
pair<int,pair<int,int>> c;
vector <pair<int,int>>B;
vector<pair<int,pair<int,int>>>A;
long long sum=0;
void slove(){
    A={};
    B={};
    sum=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>c.second.first>>c.first;
        c.second.second=i+1;
        A.push_back(c);
    }
    sort(A.begin(),A.end());
    for(int i=0;i<n*2;i++){
        sum+=A[i].first;
        B.push_back(A[i].second);
    }
    cout<<sum<<endl;
    sort(B.begin(),B.end());
    for(int i=0;i<n;i++){
        cout<<B[i].second<<" "<<B[n*2-1-i].second<<endl;
    }
    return;
}
int main(){
    int t; cin>>t;
    while(t--){
        slove();
    }
    return 0;
}