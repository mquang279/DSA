#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    set<char> se;
    char a;
    for (int i = 0; i < n; i++){
        cin >> a;
        se.insert(a);
    }
    cout << se.size() << endl;
    for (char x : se) cout << x << " ";
    cout << endl;
    auto it1 = se.rbegin();
    auto it2 = se.begin();
    cout << *it1 << " " << *it2 << " ";
    it1--;
    it2++;
    cout << *it1 << " " << *it2;
    return 0;
}