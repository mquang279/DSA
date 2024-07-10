#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int cnt[1000001] = {0};
    int tmp, max_val = 0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        cnt[tmp]++;
        max_val = max(max_val, cnt[tmp]);
    }
    for (int i = 0; i <= 1e6; i++){
        if (cnt[i] == max_val){
            cout << i << " " << max_val;
            return 0;
        }
    }
    return 0;
}