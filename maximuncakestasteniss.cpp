/*A. Maximum Cake Tastiness
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are n pieces of cake on a line. The i-th piece of cake has weight ai (1≤i≤n).

The tastiness of the cake is the maximum total weight of two adjacent pieces of cake (i. e., max(a1+a2,a2+a3,…,an−1+an)).

You want to maximize the tastiness of the cake. You are allowed to do the following operation at most once (doing more operations would ruin the cake):

Choose a contiguous subsegment a[l,r] of pieces of cake (1≤l≤r≤n), and reverse it.
The subsegment a[l,r] of the array a is the sequence al,al+1,…,ar.

If you reverse it, the array will become a1,a2,…,al−2,al−1,ar––,ar−1––––,…–––,al+1––––,al––,ar+1,ar+2,…,an−1,an.

For example, if the weights are initially [5,2,1,4,7,3], you can reverse the subsegment a[2,5], getting [5,7–,4–,1–,2–,3]. The tastiness of the cake is now 5+7=12 (while before the operation the tastiness was 4+7=11).

Find the maximum tastiness of the cake after doing the operation at most once.*/

#include <bits/stdc++.h>

using namespace std;
int n;
int x;

void slove(){
    cin>>n;
    cin>>x;
    int maxtasteniss=x,mintasteniss;
    cin>>x;
    if(x>maxtasteniss){
        mintasteniss=maxtasteniss;
        maxtasteniss=x;
    }
    else{
        mintasteniss=x;
    }
    for(int i=2;i<n;i++)
    {
        cin>>x;
        if(x>maxtasteniss){
            mintasteniss=maxtasteniss;
            maxtasteniss=x;
        }
        else{
            if(x>mintasteniss)
                mintasteniss=x;
        }
    }
    cout<<mintasteniss+maxtasteniss<<endl;
    return;
}
int main(){
    int t;cin>>t;
    while(t--){
        slove();
    }
    return 0;
}