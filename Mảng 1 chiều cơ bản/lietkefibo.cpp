#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll f[100];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 93; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    ll tmp;
    bool check = false;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        for (int j = 0; j < 93; j++){
            if (tmp == f[j]){
                cout << tmp << " ";
                check = true;
                break;
            }
        }
    }
    if (!check) cout << "NONE";
    return 0;
}