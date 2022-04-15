#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int num_buiding;
        cin>>num_buiding;
        long long sum_block=0;
        for(int j=0;j<num_buiding;j++){
            int c;cin>>c;
            sum_block+=c;
        }
        if(sum_block%num_buiding!=0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}