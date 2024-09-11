/*  [Mảng 1 Chiều Nâng Cao]. Bài 38. Prime in range
    Cho Q truy vấn, mỗi truy vấn yêu cầu bạn in ra số lượng số nguyên tố từ L tới R. (Đừng duyệt từ L tới R rồi
    đếm nhé)

    Đầu vào
    Dòng đầu tiên là Q
    Q dòng tiếp theo mỗi dòng là 2 số L, R
    Giới hạn
    1<=Q<=10^4
    1<=L,R<=10^6
    Đầu ra
    Với mỗi truy vấn in ra số lượng số nguyên tố trong đoạn [L, R]
    
    Ví dụ :
    Input 01
    9
    3 17
    1 11
    2 18
    1 15
    4 15
    4 18
    4 17
    2 12
    4 20
    Output 01
    6
    5
    7
    6
    4
    5
    5
    5
    6
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int nt[1000001];

void sang(){
    for (int i = 0; i <= 1e6; i++){
        nt[i] = 1;
    }
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(1e6); i++){
        if (nt[i]){
            for (int j = i * i; j <= 1e6; j += i){
                nt[j] = 0;
            }
        }
    }

    for (int i = 1; i <= 1e6; i++){
        nt[i] += nt[i - 1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    sang();
    int t;
    cin >> t;
    while (t--){
        int l, r;
        cin >> l >> r;
        cout << nt[r] - nt[l - 1] << endl;
    }
    return 0;
}