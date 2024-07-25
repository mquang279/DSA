#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    char tmp;
    set<char> se;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    cout << se.size() << endl;
    for (char x : se) cout << x << " ";
    cout << endl;
    for (auto it = se.rbegin(); it != se.rend(); it++){
        cout << *it << " ";
    }
    return 0;
}