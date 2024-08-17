/*
Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm mảng con liên tiếp ngắn nhất có tổng các phần tử bằng K.
Ví dụ với mảng A[] = {1, 1, 3, 1, 2, 4, 1, 1, 2} và K = 6 thì mảng con ngắn nhất có tổng bằng 6 là 2.

Giới hạn
0<=K,N<=10^6
-10^6<=A[i]<=10^6
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
