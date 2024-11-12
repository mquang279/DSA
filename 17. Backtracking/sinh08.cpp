#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
int a[15], b[15], visited[15], cnt;

void Try(int i){
    if (i == n){
        cnt++;
        for (int j = 0; j < n; j++){
            if (a[j] != b[j]) return;
        }
        cout << cnt << endl;
        return;
    }
    for (int j = 1; j <= n; j++){
        if (!visited[j]){
            b[i] = j;
            visited[j] = 1;
            Try(i + 1);
            visited[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    Try(0);
    return 0;
}