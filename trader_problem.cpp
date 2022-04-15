#include <bits/stdc++.h>
using namespace std;
vector <int>a,b;
int n,m,q;
void Try_trader(int idex_mono, int idex_chac, int k){
    if(idex_chac<0||idex_mono<0)
        return;
    else{
        if(b[idex_chac]>a[idex_mono]&&b[idex_chac]<=a[idex_mono]+k){
            swap(a[idex_mono],b[idex_chac]);
            for(int i=0;i<a.size();i++)
                cout<<a[i]<<" ";
            cout<<"\n";
            for(int i=0;i<b.size();i++)
                cout<<b[i]<<" ";
            cout<<"\n-----------------------------\n";
            if(idex_chac!=m-1)
                Try_trader(idex_mono,idex_chac+1,k);
            else
                Try_trader(idex_mono-1,idex_chac,k);
        }else if(b[idex_chac]>a[idex_mono]+k){
            Try_trader(idex_mono,idex_chac-1,k);
        }else if(b[idex_chac]<=a[idex_mono]){
            Try_trader(idex_mono-1,idex_chac,k);
        }
    }
}
int main(){
    freopen("data.txt", "r",stdin);
    vector<int> character;
    vector<int> monocrap;
    vector<int> querie;
    cin>>n>>m>>q;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        monocrap.push_back(c);
    }
    for(int i=0;i<m;i++){
        int c;
        cin>>c;
        character.push_back(c);
    }
    for(int i=0;i<q;i++){
        int c;
        cin>>c;
        querie.push_back(c);
    }
    sort(monocrap.begin(),monocrap.end());
    sort(character.begin(),character.end());
    for(int i=0;i<q;i++){
        a=monocrap;
        b=character;
        Try_trader(n-1,m-1,querie[i]);
        long long maximun=0;
        for(int i=0;i<a.size();i++){
            maximun+=a[i];
        }
        cout<<maximun<<endl;
        a.clear();
        b.clear();
    }
    return 0;
}