#include <bits/stdc++.h>

using namespace std;
vector <int>A;
vector <int>B;
int n;
int c;
long long a;
void slove(){
    A={};
    B={};
    cin>>n;
    int headA=0,tailA=n-1,headB=0,tailB=n-1;
    for(int i=0;i<n;i++){
        cin>>c;A.push_back(c);;
    }
    for(int i=0;i<n;i++){
        cin>>c;B.push_back(c);;
    }
    for(int i=0;i<n;i++){
        if(abs(A[0]-B[headA])>abs(A[0]-B[i])){
            headA=i;
        }
        if(abs(A[n-1]-B[tailA])>abs(A[n-1]-B[i])){
            tailA=i;
        }
        if(abs(B[0]-A[headB])>abs(B[0]-A[i])){
            headB=i;
        }
        if(abs(B[n-1]-A[tailB])>abs(B[n-1]-A[i])){
            tailB=i;
        }
    }
    a=(long long)abs(A[0]-B[headA])+(long long)abs(A[n-1]-B[tailA])+(long long)abs(B[0]-A[headB])+(long long)abs(B[n-1]-A[tailB]);
    if(headA==0&&headB==0){
        a-=(long long)abs(A[0]-B[headA]);
    }
    if(headA==n-1&&tailB==0){
        a-=(long long)abs(A[0]-B[headA]);
    }
    if(tailA==0&&headB==n-1){
        a-=(long long)abs(A[n-1]-B[tailA]);
    }
    if(tailA==n-1&&tailB==n-1){
        a-=(long long)abs(A[n-1]-B[tailA]);
    }
    cout<<a<<endl;
    return;
}
int main(){
    int t;cin>>t;
    while(t--){
        slove();
    }
    return 0;
}