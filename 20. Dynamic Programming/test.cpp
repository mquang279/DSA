#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[10000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //dp[i] : Độ dài dãy con tăng dài nhất kết thúc tại vị trí i.   
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << *max_element(dp + 1, dp + n + 1);
    return 0;
}