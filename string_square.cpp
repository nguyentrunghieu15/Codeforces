#include <bits/stdc++.h>
using namespace std;
bool slove(string a){
    if(a.size()%2!=0)
        return false;
    else{
        int n=a.size()/2;
        string B=a.substr(0,n);
        B=B+B;
        if(a==B)
            return true;
        else
            return false;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string c;
        cin>>c;
        if(slove(c))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}