#include <bits/stdc++.h>
/*Ở nhà máy nọ có N chú rô bốt được xếp thành đường thẳng đang bận rộn làm việc trên dây
chuyền. Chú rô bốt thứ i nằm ở vị trí Xi có cánh tay dài Li nên chú có thể làm các công việc
trong khoảng từ (Xi − Li
, Xi + Li). Để tránh sự va chạm giữa các chú rô bốt khi đang làm việc,
người ta quyết định sẽ bỏ đi một số rô bốt(hoặc không bỏ rô bốt nào) sao cho không có hai rô
bốt nào va chạm nhau khi đang làm việc nhưng họ cũng muốn giữ lại nhiều rô bốt nhất có thể.
Là một lập trình viên tài năng, bạn hãy tính xem nhà máy có thể giữ được nhiều nhất bao nhiêu
con rô bốt.*/
using namespace std;
int *coutRobot;
struct robot{
    int toado;
    int bankinh;
};
int search(int n){
    int idex=0;
    for(int i=1;i<n;i++){
        if(coutRobot[i]>coutRobot[idex])
            idex=i;
    }
    return idex;
}
bool cmp(robot a, robot b){
    if(a.toado<=b.toado)
        return true;
    else return false;
}
int main(){
    // freopen("data.txt","r",stdin);
    int n;cin>>n;
    coutRobot= new int[n];
    vector <int> Robot[n];
    robot * listrobot;
    listrobot = new robot[n];
    long sumrobot=0;
    for(int i=0;i<n;i++){
        cin>>listrobot[i].toado>>listrobot[i].bankinh;
    }
    sort(listrobot,listrobot+n,cmp);
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(listrobot[i].toado>=listrobot[j].toado-listrobot[j].bankinh&&listrobot[i].toado<=listrobot[j].toado+listrobot[j].bankinh)
        }
    }
    while(sumrobot!=0){
        int idex=search(n);
        sumrobot-=2*coutRobot[idex];
        coutRobot[idex]=0;
        for(auto i:Robot[idex]){
            coutRobot[i]--;
        }
        n--;
    }
    cout<<n;
    return 0;
}