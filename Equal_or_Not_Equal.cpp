#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector <string> a;
    for(int i=0;i<n;i++){
        string c;
        cin>>c;
        a.push_back(c);
    }
    for(int i=0;i<n;i++){
        int couting=0;
        for(int j=0;j<a[i].size();j++){
            if(a[i][j]=='N')
                couting++;
            if(couting>=2){
                cout<<"YES"<<endl;
                break;
            }
        }
        if(couting==1)
            cout<<"NO"<<endl;
        else if(couting==0)
            cout<<"YES"<<endl;
    }
    return 0;
}