/*  [Mảng 1 Chiều Nâng Cao]. Bài 30. Chia mảng
    Cho mảng A[] gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích
    cỡ K và N - K sao cho hiệu giữa tổng hai mảng con là lớn nhất.
    Ví dụ: Mảng A[] = {8, 4, 5, 2, 10}, K = 2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và
    {8, 5, 10} có hiệu của hai mảng con là 23 - 6 = 17 là lớn nhất.
    Gợi ý : Đưa những số nhỏ về tập có ít phần tử, những số lớn về tập có nhiều phần tử thì độ lệch sẽ lớn nhất.
    
    Đầu vào
    Dòng đầu tiên là 2 số N và K.
    Dòng thứ 2 là N số trong mảng A
    Giới hạn
    1 ≤ K < N ≤ 10^5
    0 ≤ A[i] ≤ 10^7
    Đầu ra
    In ra hiệu lớn nhất có thể.
    
    Ví dụ :
    Input 01
    5 2
    8 4 5 2 10
    Output 01
    17
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    int min_length, max_length;
    min_length = min(k, n - k);
    max_length = max(k, n - k);
    ll min_val = 0, max_val = 0;
    for (int i = 0; i < min_length; i++){
        min_val += 1ll * a[i];
    }
    for (int i = n - 1; i >= min_length; i--){
        max_val += 1ll * a[i];
    }
    cout << max_val - min_val;
    return 0;
}