#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(string s){
    int cnt_odd = 0, cnt_even = 0;
    for (int i = 0; i < s.length(); i++){
        if (i % 2 == 0) cnt_even += s[i] - '0';
        else cnt_odd += s[i] - '0';
    }
    return (abs(cnt_even - cnt_odd) % 11 == 0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    if (check(s)) cout << "YES";
    else cout << "NO";
    return 0;
}