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
    int left = 1, right = 1, max_val = 0;
    ll sum = 0;
    while (right < n){
        sum += a[right];
        while (sum > k && left < n){
            sum -= a[left];
            left++;
        }
        max_val = max(max_val, right - left + 1);
        right++;
    }
    cout << max_val;
    return 0;
}