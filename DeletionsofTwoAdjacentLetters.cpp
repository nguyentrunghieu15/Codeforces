#include <bits/stdc++.h>
using namespace std;

string A;
char c;
void slove(){
    cin>>A;
    cin>>c;
    for(int i=0;i<A.size();i++){
        if(A[i]==c){
            if(i%2==0){
                cout<<"YES"<<endl;
                return;
            }else continue;
        }else continue;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        slove();
   }
    
    return 0;
}