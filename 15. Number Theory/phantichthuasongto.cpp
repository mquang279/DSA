#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    vector<string> v;
    for (int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while (n % i == 0 && n != 0){
            n /= i;
            cnt++;
        }
        if (cnt != 0){
            v.push_back(to_string(i) + "^" + to_string(cnt));
        }
    }
    if (n != 1) v.push_back(to_string(n) + "^1");
    for (int i = 0; i < v.size() - 1; i++){
        cout << v[i] << " * ";
    }
    cout << v[v.size() - 1];
    return 0;
}