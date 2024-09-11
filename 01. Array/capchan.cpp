#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp, cnt_odd = 0, cnt_even = 0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp % 2 == 0) cnt_even++;
        else cnt_odd++;
    }
    cout << (1ll * cnt_even * (cnt_even - 1) / 2) + (1ll * cnt_odd * (cnt_odd - 1) / 2);
    return 0;
}