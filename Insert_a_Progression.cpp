#include <bits/stdc++.h>

using namespace std;

int n,x,head,cur,MAX,MIN,Array1,Arrayn;
long long SUM;

void slove(){
    cin>>n>>x>>head;
    MAX=head;
    MIN=head;
    Array1=head;
    Arrayn=head;
    SUM=0;
    for(int i=1;i<n;i++){
        cin>>cur;
        SUM+=(int)abs(head-cur);
        if(cur>MAX){
            MAX=cur;
        }
        if(cur<MIN){
            MIN=cur;
        }
        if(i==n-1){
            Arrayn=cur;
        }
        head=cur;
    }
    if(1<MIN){
        int a=((int)abs(1-Array1)<(int)abs(1-Arrayn))?(int)abs(1-Array1):(int)abs(1-Arrayn);
        SUM+=(a<(int)abs(1-MIN)*2)?a:(int)abs(1-MIN)*2;
    }
    if(x>MAX){
        int a=((int)abs(x-Array1)<(int)abs(x-Arrayn))?(int)abs(x-Array1):(int)abs(x-Arrayn);
        SUM+=(a<(int)abs(x-MAX)*2)?a:(int)abs(x-MAX)*2;
    }
    cout<<SUM<<endl;
}
int main(){
    // freopen("data.txt","r",stdin);
    int t;cin>>t;
    while (t--)
    {
        slove();
    }
    return 0;
}
