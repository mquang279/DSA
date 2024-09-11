#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int left = 0, right = 0, sum = 0, min_length = INT_MAX, pos = 0;
    while (right < n){
        sum += a[right];
        while (sum - a[left] >= k){
            sum -= a[left];
            left++;
        }
        if (sum >= k && right - left + 1 < min_length){
            min_length = right - left + 1;
            pos = left;
        }
        right++;
    }
    if (min_length == INT_MAX) cout << -1;
    else{
        for (int i = pos; i < pos + min_length; i++) cout << a[i] << " ";
    }
    return 0;
}