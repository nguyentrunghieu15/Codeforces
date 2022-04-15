#include <bits/stdc++.h>
using namespace std;
struct cong_nhan{
    long long san_pham;
    long long ngay_lam;
};
int main(){
    int worker;
    long long product;
    cin>>worker>>product;
    cong_nhan cn[worker];
    long a=0;
    for(int i=0;i<worker;i++){
        long long c,d;
        cin>>c>>d;
        a+=c;
        cn[i].san_pham=c;
        cn[i].ngay_lam=d;
    }
    long long dynamic_product=((product/a)+2)*a;
    int slove=(product/a)+2;
    for(int i=0;i<worker;i++){
        dynamic_product-=(slove/(cn[i].ngay_lam+1))*cn[i].san_pham;
    }
    while(dynamic_product>=product){
        for(int i=0;i<worker;i++)
            if(slove%(cn[i].ngay_lam+1)!=0)
                dynamic_product-=cn[i].san_pham;
        slove--;
    }
    cout<<slove+1;
    return 0;
}