#include <bits/stdc++.h>

using namespace std;
struct point{
    int x;
    int y;
};
point A[3];
void slove(){
    for(int i=0;i<3;i++){
        cin>>A[i].x>>A[i].y;
    }
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(A[i].y==A[j].y){
                for(int k=0;k<3;k++){
                    if(k!=i&&k!=j&&A[k].y<A[i].y){
                        cout<<abs(A[i].x-A[j].x)<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<0<<endl;
    return;
}
int main(){
    int t;cin>>t;
    while(t--){
        slove();
    }
    return 0;
}