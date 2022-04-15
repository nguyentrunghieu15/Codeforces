/*Bạn có một từ gồm N chữ cái in thường và trong đó có M chữ cái bị mờ đi không thể đọc được.
Ngoài ra, bạn còn có M dòng gợi ý dùng để khôi phục lại từ ban đầu. Dòng thứ i sẽ có K chữ cái
là những chữ có thể xuất hiện ở vị trí chữ cái bị mờ thứ i. Từ những gợi ý này bạn có thể tạo ra
được một dãy các từ, sắp xếp dãy các từ này tăng dần theo thứ tứ chữ cái và từ ban đầu bạn cần
tìm sẽ nằm ở vị trí thứ X. Các bạn hãy viết một chương trình để khôi phục lại từ này nhé!*/
#include <bits/stdc++.h>

using namespace std;
vector<char> sugest[500];
int n,m,k,x;
stack<char> slove;
string A;
char c;
bool cmp(char a, char b){
    if(a<=b)
        return true;
    else return false;
}
int main(){
    cin>>n>>m>>k>>x;
    fflush(stdin);getline(cin,A);
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            cin>>c;
            sugest[i].push_back(c);
        }
        sort(sugest[i].begin(),sugest[i].end(),cmp);
    }
    x--;
    for(int i=m-1;i>=0;i--){
        int iedx=x%k;
        slove.push(sugest[i][iedx]);
        x/=k;
    }
    for(int i=0;i<n;i++){
        if(A[i]!='#'){
            cout<<A[i];
        }else{
            cout<<slove.top();
            slove.pop();
        }
    }
    return 0;
}