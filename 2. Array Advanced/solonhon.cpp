#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp, curr_max = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp > curr_max) cout << tmp << " ";
        curr_max = max(curr_max, tmp);
    }
    return 0;
}