#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<char, int>> v;
    while (n--){
        char a;
        int b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    int cnt = 0;
    for (int i = v.size() - 1; i >= 0; i--){
        if (v[i].first == 'o' || v[i].first == 'a' || v[i].first == 'i' || v[i].first == 'e' || v[i].first == 'u'){
            cnt++;
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
    if (!cnt) cout << "28tech";
    return 0;
}