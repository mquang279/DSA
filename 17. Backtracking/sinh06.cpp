#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
int a[20];
bool visited[20];

void Try(int pos) {
    if (pos == n) {
        for (int i = 0; i < n; i++) cout << a[i];
        cout << endl;
        return;
    } 
    for (int i = n; i >= 1; i--) {
        if (!visited[i]) {
            a[pos] = i;
            visited[i] = true;
            Try(pos + 1);
            visited[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    Try(0);
    return 0;
}