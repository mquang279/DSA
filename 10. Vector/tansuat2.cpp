#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<char, int>> v;
    char a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        auto it = v.begin();
        while (it != v.end()){
            if (it->first == a[i]){
                it->second++;
                break;
            }
            it++;
        }
        if (it == v.end()) v.push_back({a[i], 1});
    }
    cout << v.size() << endl;
    for (auto it : v){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}