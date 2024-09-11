#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool nt[10000001];

void sang(){
    for (int i = 0; i <= 1e7; i++){
        nt[i] = true;
    }
    nt[0] = nt[1] = false;
    for (int i = 2; i <= sqrt(1e7); i++){
        if (nt[i]){
            for (int j = i * i; j <= 1e7; j += i){
                nt[j] = false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    sang();
    for (int i = 2; i <= n; i++){
        if (nt[i]) cout << i << " ";
    }
    return 0;
}