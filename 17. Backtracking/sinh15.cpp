#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s, currentPermutation;
int visited[20];

void Try(){
    if (s.length() == currentPermutation.length()){
        cout << currentPermutation << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++){
        if (!visited[i]){
            currentPermutation += s[i];
            visited[i] = 1;
            Try();
            currentPermutation.pop_back();
            visited[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> s;
    set<char> uniqueChars(s.begin(), s.end());
    s = "";
    for (char x : uniqueChars) s += x;
    Try();
    return 0;
}