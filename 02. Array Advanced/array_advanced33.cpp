/*  [Mảng 1 Chiều Nâng Cao]. Bài 33. Minimum subarray
    Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm mảng con liên tiếp ngắn nhất có tổng các phần
    tử bằng K.
    Ví dụ với mảng A[] = {1, 1, 3, 1, 2, 4, 1, 1, 2} và K = 6 thì mảng con ngắn nhất có tổng bằng 6 là 2.
    
    Đầu vào
    Dòng thứ nhất gồm N và K
    Dòng thứ 2 gồm các phần tử trong mảng A[]
    Giới hạn
    0<=K,N<=10^6
    -10^6<=A[i]<=10^6
    Đầu ra
    In ra độ dài của mảng con ngắn nhất đó hoặc in ra -1 nếu không tồn tại mảng con có tổng bằng K
    
    Ví dụ :
    Input 01
    6 4
    1 1 1 3 2 4
    Output 01
    1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    ll sum = 0;
    int a[n], min_length = INT_MAX;
    for (int &x : a) cin >> x;
    int left = 0, right = 0;
    while (right < n){
        sum += a[right];
        while (sum - a[left] >= k && left < right){
            sum -= a[left];
            left++;
        }
        if (sum == k) min_length = min(min_length, right - left + 1);
        right++;
    }
    if (min_length == INT_MAX) min_length = -1;
    cout << min_length;
    return 0;
}
