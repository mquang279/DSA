/*
[Thuật Toán Sinh]. Bài 10. Chỉnh hợp lặp
Cho 2 số nguyên dương N và K. Nhiệm vụ của bạn là sinh ra chỉnh hợp lặp chập K của N phần tử gồm các số tự nhiên từ 1 đến N.
Ví dụ N = 3, K = 2 bạn sẽ có các kết quả là : 11, 12, 13, 21, 22, 23, 31, 32, 33. Số chỉnh hợp lặp chập K của N sẽ là N^K.

Đầu vào:
-1 dòng duy nhất chứa 2 số nguyên dương N và K.
Đầu ra:
-In ra các cấu hình của chỉnh hợp lặp chập K của N.

Giới hạn:
1<=K,N<=8

Input 01:
2 4
Output 01:
1111
1112
1121
1122
1211
1212
1221
1222
2111
2112
2121
2122
2211
2212
2221
2222
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
vector<int> partitions(9, 1);
bool final = false;

void sinh(){
    int i = k - 1;
    while (i >= 0 && partitions[i] == n){
        partitions[i] = 1;
        i--;
    }
    if (i < 0){
        final = true;
        return;
    }
    partitions[i]++;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    while (!final){
        for (int i = 0; i < k; i++){
            cout << partitions[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}