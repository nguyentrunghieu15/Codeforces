#include <bits/stdc++.h>


using namespace std;

int latinh[128];
void input(){
    memset(latinh,0,sizeof(latinh));
    string A;
    getline(cin,A);
    for(int i=0;i<A.size();i++){
        latinh[A[i]]++;
    }
}
void solve(){
    int odd;
    bool couting =false;
    int i=0;
    int j=127;
    while(i<=j){
        while(i<128&&latinh[i]%2==0){
            i++;
        }
        while(j>=0&&latinh[j]%2==0){
            j--;
        }
        if(i<j){
            latinh[i]++;
            latinh[j]--;
            i++;
            j--;
            continue;
        }
        if(i==j){
            odd=i;
            couting=true;
            latinh[i]--;
            break;
        }
    }
    for(i=0;i<128;i++){
        if(latinh[i]!=0){
            latinh[i]/=2;
            for(j=0;j<latinh[i];j++){
                printf("%c",i);
            }
        }
    }
    if(couting){
        printf("%c",odd);
    }
    for(i=127;i>=0;i--){
        if(latinh[i]!=0){
            for(j=0;j<latinh[i];j++){
                printf("%c",i);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    input();
    solve();
    return 0;
}