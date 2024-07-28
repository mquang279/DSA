#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll powMod(int a, int b){
    ll res = 1;
    int power = a % 5;
    while (b != 0){
        if (b % 2 == 1) res = (res * power) % 5;
        power = (power * power) % 5;
        b /= 2;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    ll tmp = 0;
    for (int i = s.length() - 1; i >= 0; i--){
        tmp = ((tmp % 5) + ((s[i] - '0') * powMod(2, s.length() - i - 1))) % 5;
    }
    if (tmp == 0) cout << "YES";
    else cout << "NO";
    return 0;
}