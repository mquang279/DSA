#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll prefix[n], tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (i == 0) prefix[i] = tmp;
        else prefix[i] = prefix[i - 1] + tmp;
    }
    for (ll x : prefix){
        cout << x << " ";
    }
    return 0;
}