#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, res = INT_MAX;
ll targetSum, sum;
int a[50];

void Try(int i, int cnt){
    if (cnt > res) return;
    for (int j = i; j < n; j++){
        if (sum + a[j] <= targetSum){
            sum += a[j];
            if (sum == targetSum){
                res = min(res, cnt);
            }
            else{
                Try(j + 1, cnt + 1);
            }
            sum -= a[j];
        }
        else return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> targetSum;
    ll tmp = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        tmp += a[i];
    }
    sort(a, a + n);
    Try(0, 1);
    if (res == INT_MAX) cout << -1;
    else cout << res;
    return 0;
}