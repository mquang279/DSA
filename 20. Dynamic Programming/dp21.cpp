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
    int maxSum = accumulate(a, a + n, 0);
    int dp[maxSum + 1] = {0};
    dp[0] = 1;
    for (int x : a){
        for (int i = maxSum; i >= x; i--){
            if (dp[i - x] == 1){
                dp[i] = 1;
            }
        }
    }
    for (int i = 0; i <= maxSum; i++){
        if (dp[i] == 1) cout << i << " ";
    }
    return 0;
}