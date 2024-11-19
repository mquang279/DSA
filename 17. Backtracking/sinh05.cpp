#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
int a[100];

void Try(int i, int start){
    if (i == k){
        for (int j = 0; j < k; j++) cout << a[j];
        cout << endl;
        return;
    }
    for (int j = start; j <= n; j++){
        a[i] = j;
        Try(i + 1, j + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    Try(0, 1);
    return 0;
}
