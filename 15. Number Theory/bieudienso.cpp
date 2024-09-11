#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n / 111; i++){
        int x = (n - 111 * i) / 11;
        if (x * 11 + 111 * i == n){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}