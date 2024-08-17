#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll sum = 0;
    int min_length = INT_MAX, left = 0, right = 0;
    while (right < n){
        sum += a[right];
        while ((sum - a[left]) >= k){
            sum -= a[left];
            left++;
            min_length = min(min_length, right - left + 1);
        }
        right++;
    }
    if (min_length == INT_MAX) cout << -1;
    else cout << min_length;
    return 0;
}