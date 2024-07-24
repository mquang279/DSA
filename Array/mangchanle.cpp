#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    int cnt_odd = 0, cnt_even = 0;
    while (cin >> n){
        if (n % 2 == 0) cnt_even++;
        else cnt_odd++;
    }
    if (cnt_even > cnt_odd) cout << "CHAN";
    else if (cnt_even < cnt_odd) cout << "LE";
    else cout << "CHANLE";
    return 0;
}