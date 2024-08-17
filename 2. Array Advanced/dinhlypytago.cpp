#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll a[n];
    unordered_map<ll, int> mp;
    for (ll &x : a){
        cin >> x;
        x = x * x;
        mp[x]++;
    }
    sort(a, a + n, __greater());
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (mp.find(a[i] - a[j]) != mp.end()){
                if ((a[i] - a[j] != a[j]) || (a[i] - a[j] == a[j] && mp[a[j]] >= 2)){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}