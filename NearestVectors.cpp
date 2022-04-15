#include <bits/stdc++.h>

using namespace std;
struct vt{
    int hd;
    int td;
    int idex;
};
double tinh_goc(vt a, vt b){
    double c=(double)(a.hd*b.hd+a.td*b.td)/(sqrt(a.hd*a.hd+a.td*a.td)*sqrt(b.hd*b.hd+b.td*b.td));
    return c;
}
bool cmp1(vt a, vt b){
    vt c={1,0};
    if(tinh_goc(a,c)>tinh_goc(b,c))
        return true;
    else return false;
}
bool cmp2(vt a1, vt a2){
    vt c={-1,0};
    if(tinh_goc(a1,c)>tinh_goc(a2,c))
        return true;
    else return false;
}
int main(){
    vector<vt> A[2];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vt a;
        a.idex=i;
        cin>>a.hd>>a.td;
        if(a.td>0){
            A[0].push_back(a);
        }else
        {
            A[1].push_back(a);
        }
    }
    sort(A[0].begin(),A[0].end(),cmp1);
    sort(A[1].begin(),A[1].end(),cmp2);
    int idex_i;
    int idex_j;
    double coss_max=-2;
    for(int i=0;i<A[1].size();i++){
        A[0].push_back(A[1][i]);
    }
    for(int i=0;i<A[0].size();i++){
        if(i==0){
            if(tinh_goc(A[0].front(),A[0].back())>coss_max){
                coss_max=tinh_goc(A[0].front(),A[0].back());
                idex_i=A[0].front().idex;
                idex_j=A[0].back().idex;
            }
        }
        else{
            if(tinh_goc(A[0][i],A[0][i-1])>coss_max){
                coss_max=tinh_goc(A[0][i],A[0][i-1]);
                idex_i=A[0][i].idex;
                idex_j=A[0][i-1].idex;
            }
        }
    }
    cout<<idex_i+1<<' '<<idex_j+1;
    return 0;
}