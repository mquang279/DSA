/*
[Thuật Toán Sinh]. Bài 16. Tập quân sự tại Mai Lĩnh SPOJ
Tại Mai Lĩnh Resort, vào nửa đêm, cả trung đội nhận lệnh tập trung ở sân. 
Mỗi chiến sỹ được đánh số từ 1 đến N. Giám thị yêu cầu chọn ra một dãy K chiến sỹ 
để tập đội ngũ và cứ lần lượt duyệt hết tất cả các khả năng chọn K người như vậy 
từ nhỏ đến lớn (theo số thứ tự). Bài toán đặt ra là cho một nhóm K chiến sỹ hiện 
đang phải tập đội ngũ, hãy tính xem trong lượt chọn K người tiếp theo thì mấy người 
trong nhóm cũ sẽ được nghỉ. Nếu đã là nhóm cuối cùng thì tất cả đều được nghỉ.

Đầu vào
-Dòng 1: hai số nguyên dương N và K
-Dòng 2 ghi K số thứ tự của các chiến sỹ đang phải tập đội ngũ
Đầu ra:
-In ra số lượng chiến sỹ được nghỉ

Giới hạn:
1<=K<=N<=1000

Input 01:
8 3
4 6 7
Output 01:
1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
bool isFinal = false;
int beforeTeam[1001], afterTeam[1001];

void sinh(){
    int i = k - 1;
    while (i >= 0 && afterTeam[i] == n - k + 1 + i){
        i--;
    }
    if (i < 0){
        isFinal = true;
    }
    afterTeam[i]++;
    i++;
    while (i < k){
        afterTeam[i] = afterTeam[i - 1] + 1;
        i++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        cin >> beforeTeam[i];
        afterTeam[i] = beforeTeam[i];
    }
    sinh();
    if (isFinal) cout << k << endl;
    else{
        multiset<int> se(afterTeam, afterTeam + k);
        int cnt = 0;
        for (int i = 0; i < k; i++){
            if (se.find(beforeTeam[i]) == se.end()) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}