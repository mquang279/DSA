#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll tmp, cnt[29] = {0};
    for (int i = 0; i < n; i++){
        cin >> tmp;
        cnt[tmp % 28]++;
    }
    ll res = 0;
    for (int i = 0; i <= 28; i++){
        if (i * 2 == 28 || i == 0){
            res += cnt[i] * (cnt[i] - 1) / 2;
        }
        else{
            res += cnt[i] * cnt[28 - i];
            cnt[i] = 0;
        }
    }
    cout << res;
    return 0;
}