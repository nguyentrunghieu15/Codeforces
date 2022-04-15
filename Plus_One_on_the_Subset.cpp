#include <bits/stdc++.h>

using namespace std;
int slove(){
    int n; cin>>n;
    int max_element=INT_MIN;
    int min_element=INT_MAX;
    for(int i=0;i<n;i++){
        int c; cin>>c;
        if(c>max_element){
            max_element=c;
        }
        if(c<min_element){
            min_element=c;
        }
    }
    return max_element-min_element;
}
int main(){
    // freopen("data.txt","r",stdin);
    int t;cin>>t;
    for(int i=0;i<t;i++){
        cout<<slove()<<endl;
    }
    return 0;
}