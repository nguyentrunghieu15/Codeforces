#include <bits/stdc++.h>

using namespace std;
struct point{
    char h;
    bool visited;
};
int n, m, p;
point **A;
int mem[1000][1000];
vector <int >x;
vector <int> y;
void input(){
    cin>>n>>m>>p;
    A=new point*[n];
    for(int i=0;i<n;i++){
        A[i]=new point[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j].h;
            A[i][j].visited=true;
        }
    }
}
void clear(int a){
    int n=x.size();
    for(int i=0;i<n;i++){
        if(A[x[i]][y[i]].visited==false){
            mem[x[i]][y[i]]=a;
        }
    }
    x.clear();
    y.clear();
}
int solve(int i, int j){
    if(A[i][j].visited){
        x.push_back(i);
        y.push_back(j);
        A[i][j].visited=false;
        int above=0;
        int under=0;
        int left=0;
        int right=0;
        if(A[i-1][j].h=='*')
            above=1;
        else if(A[i-1][j].visited) above= solve(i-1,j);
        if(A[i+1][j].h=='*')
            under=1;
        else if(A[i+1][j].visited) under= solve(i+1,j);
        if(A[i][j-1].h=='*')
            left=1;
        else if(A[i][j-1].visited) left= solve(i,j-1);
        if(A[i][j+1].h=='*')
            right=1;
        else if(A[i][j+1].visited) right= solve(i,j+1);
        return above+under+right+left;
    }
    else return 0;
}
int main(){
    input();
    for(int i=0;i<p;i++){
        int x,y;
        cin>>x>>y;
        if(mem[x-1][y-1]==0){
            mem[x-1][y-1]=solve(x-1,y-1);
            cout<<mem[x-1][y-1]<<endl;
            clear(mem[x-1][y-1]);
        }else cout<<mem[x-1][y-1]<<endl;
    }
    return 0;
}