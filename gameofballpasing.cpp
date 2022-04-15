#include <bits/stdc++.h>

using namespace std;
int n;
long long x;
void slove(){
    cin>>n;
    long long sum=0;
    long long max_element=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
        if(max_element<x)
            max_element=x;
    }
    if(sum==0){
        cout<<0<<endl;
        return ;
    }   
    sum-=max_element;
    if(max_element<=sum)
        cout<<1<<endl;
    else{
        cout<<max_element-sum<<endl;
    }
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        slove();
    }  
    return 0;
}