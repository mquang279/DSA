#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    map<int, int> mp;
    int left = 0, right = 0, res = 0;
    while (right < n){
        mp[a[right]]++;
        while (mp[a[right]] >= 2 && left < right){
            mp[a[left]]--;
            left++;
        }
        res = max(res, right - left + 1);
        right++;
    }
    cout << res;
    return 0;
}