/*
[Tham Lam]. Bài 2. Tổng lớn nhất, nhỏ nhất
Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo 
thực hiện phép cộng. Tèo không bao giờ tính toán sai, nhưng thỉnh thoảng cậu 
ta chép các con số một cách không chính xác. Lỗi duy nhất của là ghi nhầm '5' 
thành '6' hoặc số '6' thành số '5'. Cho hai số, A và B, tính tổng nhỏ nhất và 
lớn nhất mà Tèo có thể nhận được.

Đầu vào:
-Dòng duy nhất chứa 2 số A và B
Đầu ra:
-In ra tổng lớn nhất, nhỏ nhất tìm được

Giới hạn
1<=A<=B<=10^16

Ví dụ :
Input 01:
607 53
Output 01:
670 560
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    string minA = a, maxA = a, minB = b, maxB = b;
    for (int i = 0; i < a.length(); i++){
        if (a[i] == '5'){
            maxA[i] = '6';
        }
        else if (a[i] == '6'){
            minA[i] = '5';
        }
    }
    for (int i = 0; i < b.length(); i++){
        if (b[i] == '5'){
            maxB[i] = '6';
        }
        else if (b[i] == '6'){
            minB[i] = '5';
        }
    }
    cout << stoll(maxA) + stoll(maxB) << " " << stoll(minA) + stoll(minB);
    return 0;
}