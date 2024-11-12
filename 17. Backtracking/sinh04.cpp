#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;
int n;

void Try(int i){
    if (i == n){
        cout << s << endl;
        return;
    }
    s += 'B';
    Try(i + 1);
    s.pop_back();
    s += 'A';
    Try(i + 1);
    s.pop_back();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    Try(0);
    return 0;
}