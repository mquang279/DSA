#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    string goal = "python";
    int pos = 0;
    for (char x : s){
        if (pos < goal.size() && x == goal[pos]) pos++;
    }
    if (pos == goal.size()) cout << "YES";
    else cout << "NO";
    return 0;
}