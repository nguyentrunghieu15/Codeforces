/*This is a harder version of the problem with bigger constraints.

Korney Korneevich dag up an array a of length n. Korney Korneevich has recently read about the operation bitwise XOR, so he wished to experiment with it. For this purpose, he decided to find all integers x≥0 such that there exists an increasing subsequence of the array a, in which the bitwise XOR of numbers is equal to x.

It didn't take a long time for Korney Korneevich to find all such x, and he wants to check his result. That's why he asked you to solve this problem!

A sequence s is a subsequence of a sequence b if s can be obtained from b by deletion of several (possibly, zero or all) elements.

A sequence s1,s2,…,sm is called increasing if s1<s2<…<sm.*/
#include <bits/stdc++.h>

using namespace std;
bool mem[5001];
int memback[5001];
int memfront[5001];
int couting=0;
set<int>a;
int main(){
    int n;cin>>n;
    int c;
    for(int i=0;i<n;i++){
        cin>>c;
        if(mem[c]==false){
            a.insert(c);
            mem[c]=true;
            couting++;
            memfront[c]=i;
            memback[c]=i;
        }else{
            memback[c]=i;
        }
    }
    if(mem[0]==false){
        couting++;
        mem[0]=true;
    }
    set<int>:: iterator i,j;
    for(i=a.begin();i!=a.end();i++){
        j=i;
        j++;
        for(;j!=a.end();j++){
            if(memfront[*i]<memback[*j]&&mem[*i^*j]==false){
                mem[*i^*j]=true;
                couting++;
                cout<<*i<<"="<<memfront[*i]<<"-"<<*j<<"="<<memback[*j]<<":"<<(*i^*j)<<endl;
            }
        }
    }
    cout<<couting<<endl;
    for(int i=0;i<=5000;i++){
        if(mem[i])
            cout<<i<<' ';
    }
}