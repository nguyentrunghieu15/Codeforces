#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
struct monqua{
    int value;
    int shop;
    int friends;
};
bool cmp(monqua a, monqua b){
    return a.value>=b.value;
}   
int slove(){
    int n,m;
    cin>>m>>n;
    bool friend_gotgifts[n];
    int shop_gift[m];
    int cout_friend=0;
    bool cout_shop=false;
    list<monqua>A;
    memset(friend_gotgifts,1,sizeof(friend_gotgifts));
    memset(shop_gift,0,sizeof(shop_gift));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            monqua c;
            cin>>c.value;
            c.shop=i;
            c.friends=j;
            A.push_back(c);
        }
    }
    A.sort(cmp);
    list<monqua>::iterator it=A.begin();
    for(;it!=A.end();it++){
        shop_gift[it->shop]++;
        if(shop_gift[it->shop]==2)
            cout_shop=true;
        if(friend_gotgifts[it->friends]){
            friend_gotgifts[it->friends]=false;
            cout_friend++;
        }
        if(cout_friend==n&&cout_shop)
            return it->value;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<slove()<<endl;
    }
}