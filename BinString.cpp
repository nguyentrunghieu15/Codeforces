#include <bits/stdc++.h>

using namespace std;
void slove(){
	int num0=0;
	int num1remove=0;
	int slove;
	string S;
	cin>>S;
	for(auto i:S){
		if(i=='0')
			num0++;
	}
	slove=num0;
	int l=0,r=S.length()-1;
	int lf=0,rg=S.length()-1;
	int _min;
	while(l<=r){
		while(l<=r&&S[l]=='1') l++;
		while(r>=l&&S[r]=='1') r--;
		if(l<=r){
			if(l-lf<rg-r){
				_min=l-lf;
				lf=++l;
			}else{
				_min=rg-r;
				rg=--r;
			}
			num0--;
			num1remove+=_min;
			if(slove>=max(num0,num1remove)){
				slove=max(num0,num1remove);
			}else{
				break;
			}
		}
	}
	cout<<slove<<endl;
}
int main(){
//	freopen("data.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		slove();
	}
}
