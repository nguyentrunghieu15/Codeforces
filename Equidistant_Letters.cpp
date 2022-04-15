/*You are given a string s, consisting of lowercase Latin letters. Every letter appears in it no more than twice.

Your task is to rearrange the letters in the string in such a way that for each pair of letters that appear exactly twice, the distance between the letters in the pair is the same. You are not allowed to add or remove letters.

It can be shown that the answer always exists. If there are multiple answers, print any of them.*/
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int mem_set[128];
void slove(){
    memset(mem_set,0,sizeof(mem_set));
    string a; cin>>a;
    for(auto i:a) mem_set[i]++;
    for(int i=97;i<128;i++){
        if(mem_set[i]>0)
           while(mem_set[i]!=0){
               printf("%c",i);
               mem_set[i]--;
           } 
    }
    printf("\n");
}
int main(){
    // freopen("data.txt","r",stdin);
    int t;cin>>t;
    for(int i=0;i<t;i++){
        slove();
    }
    return 0;
}