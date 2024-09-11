/*
    [Mảng 1 Chiều Nâng Cao]. Bài 4. Die hard
    Bộ phim "Die Hard" mới vừa được phát hành! Có n người tại phòng vé rạp chiếu phim đứng thành một hàng lớn. 
    Mỗi người trong số họ có một tờ tiền mệnh giá 100, 50 hoặc 25 rúp. Một vé "Die Hard" có giá 25 rúp. 
    Nhân viên đặt phòng có thể bán vé cho mỗi người và trả tiền thừa nếu ban đầu anh ta không có tiền và 
    bán vé theo đúng thứ tự mọi người trong hàng không?

    Gợi ý : Khi người khách mua vé đưa tờ 50 hoặc 100 thì cần kiểm tra xem có trả lại được hay không, đưa tờ 25 
    thì không cần trả lại. Việc trả lại không phải cứ lấy số tiền đang có và so sánh với số tiền cần trả mà quan
    trọng là có tờ 25 hay không? Ví dụ nhân viên đang có 10 tờ 50 rúp nhưng không thể trả lại khi khách đưa tờ 100 
    hay 50 vì không có tờ 25 rúp để trả.

    Đầu vào:
    -Dòng đầu tiên chứa số nguyên n - số người trong hàng.
    -Dòng tiếp theo chứa n số nguyên, mỗi số bằng 25, 50 hoặc 100 - giá trị của các tờ tiền mà mọi người có.
    Đầu ra:
    -In YES nếu người bán hàng có thể bán và trả tiền thừa cho mọi người trong hàng, ngược lại in NO.

    Giới hạn:
    -1≤n≤10^6

    Input 01:
    5
    25 25 25 50 50
    Output 01:
    YES

    Input 02:
    2
    50 25
    Output 02:
    NO
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int current25 = 0, current50 = 0, customerMoney;
    for (int i = 0; i < n; i++){
        cin >> customerMoney;
        if (customerMoney == 50){
            current25--;
            current50++;
        }
        else if (customerMoney == 100){
            if (current50 >= 1 && current25 >= 1){
                current50--;
                current25--;
            }
            else{
                current25 -= 3;
            }
        }
        else current25++;
        if (current25 < 0 || current50 < 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}