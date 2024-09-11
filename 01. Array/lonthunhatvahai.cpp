#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp, max1_val, max2_val;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp >= max1_val){
            max2_val = max1_val;
            max1_val = tmp;
        }
        else if (tmp >= max2_val) max2_val = tmp;
    }
    cout << max1_val << " " << max2_val;
    return 0;
}