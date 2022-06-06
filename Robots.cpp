#include <bits/stdc++.h>

using namespace std;
struct point{
	int x,y;
};
vector<point>A;
char C;
void slove(){
	A.clear();
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>C;
			if(C=='R'){
				A.push_back({i,j});
			}
		}
	}
	point lest_distance=A.front();
	for(auto i:A){
		if(i.x*i.x+i.y*i.y<lest_distance.x*lest_distance.x+lest_distance.y*lest_distance.y){
			lest_distance=i;
		}
	}
	bool flag=true;
	for(auto i:A){
		if(i.x<lest_distance.x||i.y<lest_distance.y){
			flag=false;
			break;
		}
	}
	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
int main(){
//	freopen("data.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		slove();
	}
	return 0;
}
