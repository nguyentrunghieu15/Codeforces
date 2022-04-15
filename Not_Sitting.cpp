/*Rahul and Tina are looking forward to starting their new year at college. As they enter their new classroom, they observe the seats of students are arranged in a n×m grid. The seat in row r and column c is denoted by (r,c), and the distance between two seats (a,b) and (c,d) is |a−c|+|b−d|.

As the class president, Tina has access to exactly k buckets of pink paint. The following process occurs.

First, Tina chooses exactly k seats in the classroom to paint with pink paint. One bucket of paint can paint exactly one seat.
After Tina has painted k seats in the previous step, Rahul chooses where he sits. He will not choose a seat that has been painted pink due to his hatred of the colour pink.
After Rahul has chosen his seat, Tina chooses a seat for herself. She can choose any of the seats, painted or not, other than the one chosen by Rahul.
Rahul wants to choose a seat such that he sits as close to Tina as possible. However, Tina wants to sit as far away from Rahul as possible due to some complicated relationship history that we couldn't fit into the statement!

Now, Rahul wonders for k=0,1,…,n⋅m−1, if Tina has k buckets of paint, how close can Rahul sit to Tina, if both Rahul and Tina are aware of each other's intentions and they both act as strategically as possible? Please help satisfy Rahul's curiosity!

Input*/
# include <bits/stdc++.h>
using namespace std;
void slove(){
    int n,m;
    cin>>n>>m;
    int max_distance=n+m-2;
    int min_distance=n/2+m/2;
    cout<<min_distance<<' '<<max_distance<<endl;
    if(min_distance==max_distance){
        for(int i=0;i<n*m;i++){
            cout<<min_distance<<' ';
        }
        return;
    }
    else{
        vector <int >A;
        long long sumpaint=m*n;
        int soluog=0;
        while(n==0||m==0){
            int x=0;
            int y=0;
            if(n/2>0)
                x=1;
            if(m/2>0)
                y=1;
            soluog=(x+1)*2+(y+1)*2;
            A.push_back(soluog);
            n-=(x+1);
            m-=(y+1);
        }
        n+=m;
        
        for(int i=A.size()-1;i>=0;i--){
            for(int j=0;j<A[i];j++)
                cout<<min_distance<<' ';
            min_distance++;
        }
        A.clear();
    }
}
int main(){
    freopen("data.txt","r",stdin);
    int t ;cin>>t;
    for(int i=0;i<t;i++){
        slove();
        cout<<"\n";
    }
    return 0;
}
