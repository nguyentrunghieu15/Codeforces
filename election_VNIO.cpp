/*Vòng đầu tiên của cuộc bầu cử tổng thống đất nước Kc97ble đang diễn ra rất sôi nổi. Có n ứng
cử viên được đánh số từ 1 đến n. Mỗi người dân của đất nước Kc97ble sẽ tiến hành bỏ phiếu ủng
hộ cho một ứng cử viên duy nhất mà họ tín nhiệm nhất. Với quy tắc bỏ phiếu như trên, có thể
xảy ra trường hợp hy hữu rằng tất cả các ứng cử viên đều có số phiếu ủng hộ bằng nhau.
Hiện tại, ứng cử viên thứ i đã có ai phiếu ủng hộ, và còn k người dân chưa tham gia bỏ phiếu.
Hãy cho biết có thể xảy ra trường hợp hy hữu nói trên hay không?*/
#include <bits/stdc++.h>

using namespace std;
bool slove(){
    int n,k;cin>>n>>k;
    int max_voted=INT_MIN;
    int sum_vote=k;
    for(int i=0;i<n;i++){
        int c;cin>>c;
        sum_vote+=c;
        if(c>max_voted)
            max_voted=c;
    }
    if(sum_vote%n==0){
        if(sum_vote/n>=max_voted)
            return true;
    }
    return false;
}
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        if(slove())
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}