
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int tmp;
    map<int, int> mp;
    mp[0] = 0;
    ll sum = 0;
    int maxLength = -1;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        sum = ((sum % k) + (tmp % k)) % k;
        if (sum < 0) sum += k;
        if (mp.find(sum) != mp.end()){
            maxLength = max(maxLength, i + 1 - mp[sum]);
        }
        if (sum != 0 && mp[sum] == 0) mp[sum] = i + 1;
    }
    cout << maxLength;
    return 0;
}