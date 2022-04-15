#include <bits/stdc++.h>

using namespace std;
vector <int>A;
int n;
int c;
long long slove(){
    A={};
    bool flag=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        if(i!=0&&i!=n-1&&c>1)
            flag=false;
        A.push_back(c);
    }
    if(n==3){
        if(A[1]%2!=0)
            return -1;
        else return A[1]/2;
    }else{
        if(flag)
            return -1;
        else{
            long long sum=0;
            for(int i=1;i<n-1;i++){
                sum+=A[i]/2+A[i]%2;
            }
            return sum;
        }
    }
    return 0;
}
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        cout<<slove()<<endl;
    }
    return 0;
}