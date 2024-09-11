#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isFinal = false;

void sinh(vector<int>& v){
    int i = v.size() - 2;
    while (i >= 0 && v[i] < v[i + 1]){
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    int j = v.size() - 1;
    while (v[j] > v[i]){
        j--;
    }
    swap(v[i], v[j]);
    reverse(v.begin() + i + 1, v.end());
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    set<int> se;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    vector<int> v(se.begin(), se.end());
    reverse(v.begin(), v.end());
    while (!isFinal){
        for (int x : v) cout << x << " ";
        cout << endl;
        sinh(v);
    }
    return 0;
}