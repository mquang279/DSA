#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    bool check = false;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (i % 2 == 0 && tmp % 2 == 0){
            cout << tmp << " ";
            check = true;
        }
    }
    if (!check) cout << "NONE";
    return 0;
}