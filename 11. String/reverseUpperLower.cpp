#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    cout << tmp << endl;
    for (char &x : s) x = tolower(x);
    cout << s << endl;
    for (char &x : s) x = toupper(x);
    cout << s << endl;
    return 0;
}