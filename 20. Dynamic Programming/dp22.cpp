#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string n;
    cin >> n;
    ll res = 0;
    for (int i = 0; i < n.length(); i++){
        string substr = "";
        for (int j = i; j < n.length(); j++){
            substr += n[j];
            res += stoll(substr);
        }
    }
    cout << res;
    return 0;
}