#include <bits/stdc++.h>
#include <time.h>
#include <windows.h>
using namespace std;
int n,m;
int tower1,tower2;
vector<int>A[10000];
bool visited[10000];
bool timduoc=false;
int A_visit[4];
void update(){
    cout<<"dang duyet"<<endl;
    Sleep(200);
    if(find(A[A_visit[3]].begin(),A[A_visit[3]].end(),A_visit[0])!=A[A_visit[3]].end()){

        timduoc=true;
    }
}
void Try(int n,int idex){
    visited[idex]=false;
    A_visit[n]=idex;
    if(n==3&&timduoc==false){
        update();
    }
    for(int i=0;i<A[idex].size();i++){
        if(visited[A[idex][i]]&&A[A[idex][i]].size()>=2&&timduoc==false){
            Try(n+1,A[idex][i]);
        }
        if(timduoc)
            break;
    }
    visited[idex]=true;
}
int main(){
    for(int i=0;i<10000;i++){
            visited[i]=true;
    }
    freopen("data.txt","r",stdin);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>tower1>>tower2;
        A[tower1].push_back(tower2);
        A[tower2].push_back(tower1);
    }
    for(int i=1;i<=n;i++){
        if(A[i].size()>=2&&timduoc==false){
            Try(0,i);
        }
        if(timduoc)
            break;
        A[i]={};
    }
    if(timduoc){
        for(int i=0;i<4;i++){
            cout<<A_visit[i]<<" ";
        }
    }else cout<<-1;
    return 0;
}
