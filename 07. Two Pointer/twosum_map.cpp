#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    unordered_map<int, int> mp;
    for (int &x : a){
        cin >> x;
        if (mp.find(k - x) != mp.end()){
            cout << "YES";
            return 0;
        }
        mp[x]++;
    }
    cout << "NO";
    return 0;
}