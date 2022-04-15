#include <bits/stdc++.h>

using namespace std;
int slove(int c){
    int couting=0;
    int i=1;
    while(i*i<=c){
        couting++;
        i++;
    }
    i=1;
    while(i*i*i<=c){
        couting++;
        i++;
    }
    i=1;
    while(i*i*i*i*i*i<=c){
        couting--;
        i++;
    }
    return couting;
}
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        cout<<slove(c)<<endl;
    }
    return 0;
}