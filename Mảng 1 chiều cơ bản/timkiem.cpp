#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int check[10000001] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, t, x;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        check[tmp] = 1;
    }
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> x;
        if (check[x]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}