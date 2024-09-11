/*  [Mảng 1 Chiều Nâng Cao]. Bài 35. Count maximum subset
    Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm số lượng phần tử lớn nhất trong mảng
    sao cho độ chênh lệch giữa 2 phần tử bất kì trong tập hợp bạn chọn ra không vượt quá K.
    
    Đầu vào
    Dòng đầu tiên là số lượng phần tử trong mảng.
    Dòng thứ 2 là N phần tử trong mảng.
    Giới hạn
    1<=K<=N<=10^6
    0<=A[i]<=10^6
    Đầu ra
    In ra đáp án của bài toán
    
    Ví dụ :
    Input 01
    5 3
    1 2 3 3 2
    Output 01
    5
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
    int maxLength = 0;
    for (int i = 0; i < n; i++){
        auto it = upper_bound(a, a + n, a[i] + k);
        it--;
        int tmp = it - (a + i) + 1;
        maxLength = max(maxLength, tmp);
    }
    cout << maxLength;
    return 0;
}
