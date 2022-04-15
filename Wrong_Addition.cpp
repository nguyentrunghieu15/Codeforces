#include<bits/stdc++.h>
using namespace std;
long long slove(long long a, long long s){
    long long c=0;
    int couting=0;
    while(a!=0){
        int c1=a%10;
        int c2=s%10;
        if(c2>=c1){
            c+=(c2-c1)*(int)pow(10,couting);
            s/=10;
            a/=10;
            couting++;
        }
        else{
            c2=s%100;
            if(c2>=20)
                return -1;
            if(c2<c1){
                    return -1;
            }else{
                c+=(c2-c1)*(int)pow(10,couting);
                s/=100;
                a/=10;
                couting++;
            }
        }
    }
    if(s!=0)
        c+=s*(int)pow(10,couting);
    return c;
}
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        long long a,s;
        cin>>a>>s;
        cout<<slove(a,s)<<endl;
    }
    return 0;
}