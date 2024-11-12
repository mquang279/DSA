#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
vector<int> v;

void Try(int start){
    for (int i = start; i <= n; i++){
        v.push_back(i);
        for (int x : v) cout << x << " ";
        cout << endl;
        Try(i + 1);
        v.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    Try(1);
    return 0;
}