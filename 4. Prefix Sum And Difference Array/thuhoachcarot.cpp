#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int tmp, prefix[n + 1][m + 1] = {0};
    for (int i = 0; i <= n; i++){
        prefix[i][0] = 0;
    }
    for (int i = 0; i <= m; i++){
        prefix[0][i] = 0;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> tmp;
            prefix[i][j] = tmp + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }
    int t;
    cin >> t;
    while (t--){
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << prefix[x2][y2] - prefix[x2][y1 - 1] - prefix[x1 - 1][y2] + prefix[x1 - 1][y1 - 1] << endl;
    }

    return 0;
}