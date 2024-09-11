#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

unordered_set<int> se;
int max_val = 1;

void check(){
    for (int i = 2; i <= sqrt(1e6); i++){
        int cnt = 0;
        for (int j = i; j <= 1e6; j += i){
            if (se.find(j) != se.end()) cnt++;
            if (cnt == 2){
                max_val = max(max_val, i);
                break;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    return 0;
}