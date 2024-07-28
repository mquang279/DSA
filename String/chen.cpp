#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    int pos;
    getline(cin, s);
    cin >> pos;
    s.insert(pos, "28tech");
    cout << s;
    return 0;
}