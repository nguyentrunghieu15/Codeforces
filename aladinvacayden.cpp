#include <iostream>
#include <math.h>

/*Nến (còn gọi là đèn cầy) thường được thắp trong các buổi tiệc ngoài tời để tạo không khí huyền ảo, ấm cúng, lãng mạn. Hôm nay là sinh nhật Jasmine! Aladdin, Abu và thần đèn đã tổ chức một buổi tiệc thịnh soạn gồm cơ man nào là sơn hào hải vị. Trên bàn tiệc là một hàng  cây nến bằng đúng số tuổi của Jasmine. Điều đặc biệt là những cây nến này có phép (do của thần đèn).

Ban đầu  nến đều đang cháy.

Nếu thổi lần đầu thì cả  nến sẽ tắt.

Thổi lần hai thì các nến số chẵn cháy trở lại.

Thổi sang lần thứ 3 thì nến 3,6 ,9 ,12 , .... nếu đang cháy sẽ tắt, còn nếu đang tắt sẽ cháy.

Tương tự vậy với các lần 4,5 ,6 , ..., .

Aladdin nhận thấy là sau khi thổi nến một số lần thì một số nến sẽ không bị tác động nữa, từ đó nghĩ ra một trò chơi. Aladdin đố Jasmine tìm ra cây nến còn sáng thứ  sau khi thổi hết cả  lần. Nếu Jasmine trả lời đúng sẽ nhận được một phần quà đặc biệt mà Aladdin bỏ ra cả mấy ngày để chuẩn bị: .

Phải thối hết  lần thì mất công quá . Tuy nhiên Aladdin có một mẹo, không cần thổi mà cũng không cần biết có bao nhiêu nến tất cả vẫn tính được ngay số thứ tụ của cây nến đang cháy thứ . Hãy giúp Jasmine giành được quà nào! Cho . Tìm số thứ tụ của cây nến đang cháy thứ  sau  lần thổi nến*/
using namespace std;

int main(){
    long long k;cin>>k;
    double a=(1+sqrt(1+4*k))/2;
    long long min_=(long long)a;
    while(min_*(min_-1)>=k){
        min_--;
    }
    cout<<min_+k;
}