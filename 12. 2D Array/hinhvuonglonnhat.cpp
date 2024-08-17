#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int prefix[n + 1][n + 1] = {0};
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
        }
    }
    int maxSum = 0;
    for (int i = 3; i <= n; i++){
        for (int j = 3; j <= n; j++){
            maxSum = max(maxSum, prefix[i][j] - prefix[i - 3][j] - prefix[i][j - 3] + prefix[i - 3][j - 3]);
        }
    }
    cout << maxSum << endl;
    return 0;
}