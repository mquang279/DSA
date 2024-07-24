#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    int left = -1, right = -1;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (i != n - 1 && a[i] > a[i + 1] && left == -1) left = i;
        if (i != 0 && a[i] < a[i - 1]) right = i;
    }
    if (left == -1) cout << "28tech";
    else{
        reverse(a + left, a + right + 1);
        bool check = true;
        for (int i = 0; i < n - 1; i++){
            if (i != n - 1 && a[i] > a[i + 1]){
                check = false;
                break;
            }
        }
        if (check) cout << "28tech";
        else cout << "29tech";
    }
    return 0;
}