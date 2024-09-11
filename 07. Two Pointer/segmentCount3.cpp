/*
Cho mảng A[] gồm N số nguyên và số nguyên K, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các 
phần tử liên tiếp trong mảng mà số lượng phần từ khác nhau trong mảng con này không vượt quá K.
Giới hạn
• 1<=K<=N<=10^5
• 1<=A[i]<=10^6
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int cnt[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    int left = 0, right = 0, tmp = 0;
    ll res = 0;
    while (right < n){
        cnt[a[right]]++;
        if (cnt[a[right]] == 1) tmp++;
        while (tmp > k){
            cnt[a[left]]--;
            if (cnt[a[left]] == 0) tmp--;
            left++;
        }
        res += right - left + 1;
        right++;
    }
    cout << res;
    return 0;
}