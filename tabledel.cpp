/*Cho một bảng ô vuông gồm n dòng và m cột. Các dòng được đánh số từ 1 đến n, các cột được
đánh số từ 1 đếm m. Ô nằm ở dòng i và cột j được gọi là ô (i, j). Có k ô màu đen trên bảng, ô
đen thứ i nằm ở vị trí (xi
, yi). Các ô còn lại trong bảng đều có màu trắng.
Bạn có thể thực hiện một trong hai loại thao tác sau (mỗi thao tác có thể được thực hiện nhiều
lần hoặc không lần nào).
• Chọn một dòng chỉ gồm các ô màu trắng, và xóa dòng đó khỏi bảng
• Chọn một cột chỉ gồm các ô màu trắng, và xóa cột đó khỏi bảng
Hãy tìm cách thực hiện các loại thao tác trên, sao cho số ô còn lại trong bảng là nhỏ nhất có thể*/
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
bool memcolum[1000000];
bool memrow[1000000];
long long n,m,k;
long long x,y;
int main(){
    cin>>n>>m>>k;
    long long colum=0;
    long long row=0;
    for(long long i=0;i<k;i++){
        cin>>x>>y;
        if(memrow[x]==false){
            row++;
            memrow[x]=true;
        }
        if(memcolum[y]==false){
            colum++;
            memcolum[y]=true;
        }
    }
    cout<<row*colum;
    return 0;
}