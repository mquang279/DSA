/*
[Thuật Toán Sinh]. Bài 30. Balo
Một tên trộm đột nhập vào 28techland và muốn lấy đi 1 số đồ vật có giá trị lớn nhất. Ở 28techland 
tồn tại n đồ vật, đồ vật thứ i sẽ có trọng lượng w[i] và có giá trị là v[i], tên trộm mang theo 
cái balo có thể chứa được trọng lượng tối đa là S, nhiệm vụ của bạn là hãy giúp tên trộm lựa chọn 
các đồ vật sao cho tổng trọng lượng của chúng không vượt quá S và có giá trị lớn nhất. 
Chú ý tên trộm chỉ có thể chọn hoặc không chọn 1 đồ vật.

Đầu vào:
-Dòng đầu tiên là N và S
-Dòng thứ 2 là N số tương ứng với trọng lượng của các đồ vật
-Dòng thứ 3 là N số tương ứng với giá trị của các đồ vật
Đầu ra:
-In ra tổng giá trị của các đồ vật trong balo.

Giới hạn:
1<=N<=15
1<=S<=800
1<=w[i]<=200
1<=v[i]<=200

Input 01:
12 356
174 153 127 156 156 5 132 161 170 26 181 50 
103 32 102 85 54 166 187 173 137 54 24 91
Output 01:
617
*/


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isFinal = false;

void sinh(string& s){
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    s[i] = '1';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int weights[n], values[n];
    for (int &weight : weights){
        cin >> weight;
    }
    for (int &value : values){
        cin >> value;
    }
    string s = string(n, '0');
    int maxValue = 0;
    while (!isFinal){
        int totalWeight = 0, totalValue = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '1'){
                totalWeight += weights[i];
                totalValue += values[i];
            }
            if (totalWeight <= m){
                maxValue = max(maxValue, totalValue);
            }
        }
        sinh(s);
    }
    cout << maxValue;
    return 0;
}