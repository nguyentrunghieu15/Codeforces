/*You are given a decimal representation of an integer x without leading zeros.

You have to perform the following reduction on it exactly once: take two neighboring digits in x and replace them with their sum without leading zeros (if the sum is 0, its represented as a single 0).*/
#include <bits/stdc++.h>
#include <string>
using namespace std;
int atoi(char a){
    switch(a){
        case '0':return 0;
        case '1':return 1;
        case '2':return 2;
        case '3':return 3;
        case '4':return 4;
        case '5':return 5;
        case '6':return 6;
        case '7':return 7;
        case '8':return 8;
        case '9':return 9;
    }
    return 1;
}
char itoa(int a){
    switch(a){
        case 0:return '0';
        case 1:return '1';
        case 2:return '2';
        case 3:return '3';
        case 4:return '4';
        case 5:return '5';
        case 6:return '6';
        case 7:return '7';
        case 8:return '8';
        case 9:return '9';
    }
    return '1';
}
string itos(char a, char b){
    int ab=atoi(a)+atoi(b);
    string c="";
    if(ab==0){
        c="0";
        return c;
    }else{
        if(ab<10){
            c+=itoa(ab);
        }else{
            int abc=ab%10;
            ab/=10;
            c+=itoa(ab);
            c+=itoa(abc);
        }
        return c;
    }
}
void slove(){
    string A;cin>>A;
    int n=A.size();
    string num;
    string max_num=itos(A[0],A[1])+A.substr(2);
    for(int i=2;i<n;i++){
        if(i!=n-1)
            num=A.substr(0,i-1)+itos(A[i-1],A[i])+A.substr(i+1);
        else
            num=A.substr(0,i-1)+itos(A[i-1],A[i]);
        if(num.size()>max_num.size()||num>max_num)
            max_num=num;
    }
    cout<<max_num<<endl;
}
int main(){
    freopen("data.txt","r",stdin);
    int t; cin>>t;
    for(int i=0;i<t;i++){
        slove();
    }
    return 0;
}