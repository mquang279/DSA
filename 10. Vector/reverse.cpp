#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    int left, right;
    cin >> left >> right;
    reverse(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    cout << endl;
    reverse(v.begin() + left, v.begin() + right + 1);
    for (int x : v) cout << x << " ";
    return 0;
}