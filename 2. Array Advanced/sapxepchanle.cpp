#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    vector<int> oddNum, evenNum;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp % 2 == 0) evenNum.push_back(tmp);
        else oddNum.push_back(tmp);
    }
    sort(oddNum.begin(), oddNum.end(), __greater());
    sort(evenNum.begin(), evenNum.end());
    for (int x : oddNum) cout << x << " ";
    for (int x : evenNum) cout << x << " ";
    return 0;
}