#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("data.txt","r",stdin);
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        long long ngang,doc;
        cin>>ngang>>doc;
        long long max_square=0;
        for(int k=0;k<4;k++){
            set<int>edge;
            int n;
            cin>>n;
            long long extrym_point1=INT_MAX;
            long long extrym_point2=INT_MIN;
            for(int j=0;j<n;j++){
                long long c;cin>>c;
                if(c>extrym_point2)
                    extrym_point2=c;
                if(c<extrym_point1)
                    extrym_point1=c;
            }
            long long dynamic_square;
            if(k==0||k==1)
                dynamic_square=(extrym_point2-extrym_point1)*doc;
            else
                dynamic_square=(extrym_point2-extrym_point1)*ngang;
            if(dynamic_square>max_square)
                max_square=dynamic_square;
        }
        cout<<max_square<<endl;
    }
} 