#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    set<char> se;
    char x;
    while (n--){
        cin >> x;
        if (isalpha(x)){
            x = tolower(x);
            se.insert(x);
        }
    }
    cout << se.size() << endl;
    for (char x : se) cout << x << " ";
    return 0;
}