/*
[Thuật Toán Sinh]. Bài 25. Mã số máy tính
Số lượng máy tính ở các phòng thực hành tăng lên nhanh chóng. Để gán mã cho các máy tính của trường đó 
người ta sử dụng mã gồm 2*N ký tự, trong đó: N ký tự đầu tiên là hoán vị của N chữ cái in hoa đầu tiên, 
tính từ A. N ký tự tiếp theo là các ký tự số bất kỳ từ 1 đến N (có thể trùng nhau). Người ta ước tính 
chỉ cần N = 5 là đủ để gán mã cho toàn bộ máy tính kể cả khi mở rộng quy mô các phòng thực hành. 
Hãy viết chương trình liệt kê các mã tạo được với giá trị N cho trước.

Đầu vào:
-Số nguyên dương N
Đầu ra:
-Ghi ra lần lượt các mã khác nhau tạo được theo thứ tự từ điển, mỗi mã ghi trên một dòng

Giới hạn:
1 < N < 6

Input 01:
2
Output 01:
AB11
AB12
AB21
AB22
BA11
BA12
BA21
BA22
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
bool isFinal = false;

void generateFirstPart(string& s){
    int i = s.length() - 2;
    while (i >= 0 && s[i] > s[i + 1]){
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    int j = s.length() - 1;
    while (s[j] < s[i]){
        j--;
    }
    swap(s[i], s[j]);
    reverse(s.begin() + i + 1, s.end());
}

void generateSecondPart(string& s){
    int i = s.length() - 1;
    while (i >= 0 && s[i] == (char)('0' + n)){
        s[i] = '1';
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    s[i]++;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;

    //First Part
    vector<string> firstPart;
    string s1 = "";
    for (int i = 0; i < n; i++){
        s1 += (char)('A' + i);
    }
    while (!isFinal){
        firstPart.push_back(s1);
        generateFirstPart(s1);
    }
    isFinal = false;
    
    //Second Part
    vector<string> secondPart;
    string s2 = string(n, '1');
    while (!isFinal){
        secondPart.push_back(s2);
        generateSecondPart(s2);
    }
    
    for (int i = 0; i < firstPart.size(); i++){
        for (int j = 0; j < secondPart.size(); j++){
            cout << firstPart[i] << secondPart[j] << endl;
        }
    }
    return 0;
}