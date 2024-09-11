/*
Cho mảng A[] gồm N số nguyên và số nguyên S, 
nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng ít nhất bằng S
Giới hạn
• 1<=N<=10^6
• 1<=A[i]<=10^6
• 1<=S<=10^9
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
    int left = 0, right = 0, cnt = 0;
    ll sum = 0, res = 0;
    while (right < n){
        sum += a[right];
        while (sum >= k){
            res += n - right;
            sum -= a[left];
            left++;
        }
        right++;
    }
    cout << res;
    return 0;
}