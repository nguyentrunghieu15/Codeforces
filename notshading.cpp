#include<bits/stdc++.h>
/*There is a grid with n rows and m columns. Some cells are colored black, and the rest of the cells are colored white.

In one operation, you can select some black cell and do exactly one of the following:

color all cells in its row black, or
color all cells in its column black.
You are given two integers r and c. Find the minimum number of operations required to make the cell in row r and column c black, or determine that it is impossible*/
using namespace std;
char grid[50][50];
int slove(){
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='B')
                flag=true;
        }
    }
    if(grid[r-1][c-1]=='B'){
        return 0;
    }
    for(int i=0;i<m;i++){
        if(grid[r-1][i]=='B'){
            return 1;
            }
    }
    for(int i=0;i<n;i++){
        if(grid[i][c-1]=='B'){
            return 1;
        }
    }
    if(flag){
        return 2;
        }

    return -1;
}
int main(){
    // freopen("data.txt","r",stdin);
    int t;cin>>t;
    for(int i=0;i<t;i++){
        cout<<slove()<<endl;
    }
    return 0;
}