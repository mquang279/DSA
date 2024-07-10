#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp, pos_min = 0, pos_max = 0, min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp <= min_val){
            pos_min = i;
            min_val = tmp;
        }
        if (tmp > max_val){
            pos_max = i;
            max_val = tmp;
        }
    }
    cout << pos_min << " " << pos_max << endl;
    return 0;
}