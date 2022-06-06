#include <iostream>
#include <vector>
using namespace std;

/*Leslie and Leon entered a labyrinth. The labyrinth consists of n halls and m one-way passages between them. The halls are numbered from 1 to n.

Leslie and Leon start their journey in the hall s. Right away, they quarrel and decide to explore the labyrinth separately. However, they want to meet again at the end of their journey.

To help Leslie and Leon, your task is to find two different paths from the given hall s to some other hall t, such that these two paths do not share halls other than the staring hall s and the ending hall t. The hall t has not been determined yet, so you can choose any of the labyrinth's halls as t except s.

Leslie's and Leon's paths do not have to be the shortest ones, but their paths must be simple, visiting any hall at most once. Also, they cannot visit any common halls except s and t during their journey, even at different times.

Input
The first line contains three integers n, m, and s, where n (2≤n≤2⋅105) is the number of vertices, m (0≤m≤2⋅105) is the number of edges in the labyrinth, and s (1≤s≤n) is the starting hall.

Then m lines with descriptions of passages follow. Each description contains two integers ui, vi (1≤ui,vi≤n; ui≠vi), denoting a passage from the hall ui to the hall vi. The passages are one-way. Each tuple (ui,vi) is present in the input at most once. The labyrinth can contain cycles and is not necessarily connected in any way.

Output
If it is possible to find the desired two paths, output "Possible", otherwise output "Impossible".

If the answer exists, output two path descriptions. Each description occupies two lines. The first line of the description contains an integer h (2≤h≤n) — the number of halls in a path, and the second line contains distinct integers w1,w2,…,wh (w1=s; 1≤wj≤n; wh=t) — the halls in the path in the order of passing. Both paths must end at the same vertex t. The paths must be different, and all intermediate halls in these paths must be distinct.*/
#define vt vector<int>

vt A[200001];
int n,m;


void get_Graphic(int m, int n){
    int u,v;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        A[u].push_back(v);
        A[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        if(A[i].size()==1){
            int v=A[i][0];
            A[i].clear();
            A[v].erase(A[v].find(A[v].begin(),A[v].end(),i);
        }
    }
}
void slove(){
    
}
int main(){
    cout<<"HELlo";
    return 0;
}
