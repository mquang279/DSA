/*
Cho mảng A[] gồm N số nguyên và số nguyên K, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp 
trong mảng mà độ chênh lệch giữa phần tử lớn nhất và phần tử nhỏ nhất trong mảng con đó không vượt quá K.
Giới hạn
• 1<=N<=10^5
• 1<=A[i],K<=10^6
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
    int left = 0, right = 0, curr_min = a[0], curr_max = a[0];
    ll res = 0;
    while (right < n){
        curr_min = min(curr_min, a[right]);
        curr_max = max(curr_max, a[right]);
        while (curr_max - curr_min > k){
            if (a[left] == curr_max) curr_max = *max_element(a + left + 1, a + right + 1);
            if (a[left] == curr_min) curr_min = *min_element(a + left + 1, a + right + 1);
            left++;
        }
        res += right - left + 1;
        right++;
    }
    cout << res;
    return 0;
}