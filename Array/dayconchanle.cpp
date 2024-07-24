#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], res = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        int cnt_even = 0, cnt_odd = 0;
        for (int j = i; j < n; j++){
            if (a[j] % 2 == 0) cnt_even++;
            else cnt_odd++;
            if (cnt_even == cnt_odd) res++;
        }
    }
    cout << res;
    return 0;
}