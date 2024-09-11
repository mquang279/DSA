#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    while (n != 0){
        int digit = n % 10;
        if (digit != 0 && digit != 6 && digit != 8){
            cout << 0;
            return 0;
        }
        n /= 10;
    }
    cout << 1;
    return 0;
}