#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool nt[1000001];

void sang(){
    for (int i = 0; i <= 1e6; i++){
        nt[i] = true;
    }
    nt[0] = nt[1] = false;
    for (int i = 2; i <= sqrt(1e6); i++){
        if (nt[i]){
            for (int j = i * i; j <= 1e6; j += i){
                nt[j] = false;
            }
        }
        
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    sang();
    vector<int> v;
    while (cin >> n){
        v.push_back(n);
    }
    for (int i = v.size() - 1; i >= 0; i--){
        if (nt[v[i]]) cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++){
        if (!nt[v[i]]) cout << v[i] << " ";
    }
    return 0;
}
