#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    int cnt[10] = {0};
    for (int i = 0; i < n; i++){
        cin >> tmp;
        while (tmp != 0){
            cnt[tmp % 10]++;
            tmp /= 10;
        }
    }
    for (int i = 0; i <= 9; i++){
        if (cnt[i]) cout << i << " ";
    }
    return 0;
}