#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    set<int> se;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    cout << (*se.rbegin() - *se.begin() + 1) - se.size();
    return 0;
}