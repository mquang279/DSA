#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    int pos = -1;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] == x && pos == -1) pos = i;
    }
    if (pos == -1){
        cout << "NOT FOUND";
        return 0;
    }
    for (int i = pos; i < n - 1; i++){
        a[i] = a[i + 1];
    }
    for (int i = 0; i < n - 1; i++){
        cout << a[i] << " ";
    }
    return 0;
}