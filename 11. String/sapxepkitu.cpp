#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}