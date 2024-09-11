#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int i = 0, j = 0;
    ll res = 0;
    while (i < n && j < m){
        if (a[i] < b[j]) i++;
        else if (a[i] > b[j]) j++;
        else{
            int tmp = a[i];
            int cnt1 = 0, cnt2 = 0;
            while (a[i] == tmp && i < n){
                cnt1++;
                i++;
            }
            while (b[j] == tmp && j < m){
                cnt2++;
                j++;
            }
            res += 1ll * cnt1 * cnt2;
        }
    }
    cout << res;
    return 0;
}