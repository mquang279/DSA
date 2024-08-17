#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    int a[n];
    ll sum = 0;
    map<ll, int> mp;
    mp[0] = 0;
    int max_length = -1, pos = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += 1ll * a[i];
        if (mp.find(sum) != mp.end()){
            if (i - mp[sum] + 1 > max_length){
                max_length = i - mp[sum] + 1;
                pos = mp[sum];
            }
        }
        else mp[sum] = i + 1;
    }
    for (int i = pos; i < pos + max_length; i++){
        cout << a[i] << " ";
    }
    if (max_length == -1) cout << "NOT FOUND";
    return 0;
}