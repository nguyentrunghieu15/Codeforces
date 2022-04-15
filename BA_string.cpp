#include <bits/stdc++.h>

using namespace std;

string slove(string BA, int n, int k, long long x){
    vector<int> num_b;
    string short_string="";
    for(int i=0;i<n;i++){
        if(BA[i]=='a')
            short_string+="a";
        else{
            int couting=1;
            short_string+="*";
            while(BA[i+1]=='*'){
                couting++;
                i++;
            }
            num_b.push_back(couting*k);
        }
    }
    x--;
    for(int i= num_b.size()-1;i>=0;i--){
        int c=num_b[i]+1;
        num_b[i]=x%c;
        x=x/c;
    }
    string slovestring="";
    int couting=0;
    for(int i=0;i<short_string.size();i++){
        if(short_string[i]=='a')
            slovestring+="a";
        else{
            string c(num_b[couting],'b');
            slovestring+=c; 
            couting++;
        }
    }
    return slovestring;
}
int main(){
    freopen("data.txt","r",stdin);
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        int n,k;
        long long x;
        cin>>n>>k>>x;
        string BA;
        cin>>BA;
        cout<<slove(BA,n,k,x)<<endl;
    }
    return 0;
}
