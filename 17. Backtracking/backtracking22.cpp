/*
[Quay Lui - Nhánh Cận]. Bài 22. Combination sum
Cho 2 số nguyên dương N và K, bạn hãy liệt kê các các tổ hợp K phần tử các số có 1 chữ số 
mà có tổng bằng N. Mỗi tổ hợp chỉ tính 1 lần và được in ra theo thứ tự từ bé đến lớn, các 
tổ hợp cũng được liệt kê theo thứ tự từ điển tăng dần. Nếu không tồn tại tổ hợp K phần tử 
thỏa mãn có tổng bằng N in ra NOT FOUND.

Đầu vào:
• Dòng duy nhất chứa N và K
Đầu ra:
• In ra các cấu hình thỏa mãn trên từng dòng

Giới hạn:
• 2<=K<=9
• 1<=N<=60

Input 01:
38 7
Output 01:
1 + 2 + 5 + 6 + 7 + 8 + 9
1 + 3 + 4 + 6 + 7 + 8 + 9
2 + 3 + 4 + 5 + 7 + 8 + 9

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k, currentSum;
vector<int> v;
bool check = false;

void Try(int i, int lastVal){
    if (i == k && currentSum == n){
        for (int j = 0; j < k; j++){
            if (j != k - 1) cout << v[j] << " + ";
            else cout << v[j];
        }
        cout << endl;
        check = true;
        return;
    }
    for (int j = lastVal + 1; j <= 9; j++){
        if (currentSum + j <= n){
            currentSum += j;
            v.push_back(j);
            Try(i + 1, j);
            currentSum -= j;
            v.pop_back();
        }
        else return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    Try(0, 0);
    if (!check) cout << "NOT FOUND";
    return 0;
}