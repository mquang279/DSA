#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> edgeList(n + 1);
    vector<pair<int, int>> adjacencyList;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j] == 1){
                edgeList[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j] == 1){
                adjacencyList.push_back({j, i});
                a[j][i] = 0;
            }
        }
    }
    sort(adjacencyList.begin(), adjacencyList.end());
    for (auto it : adjacencyList){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++){
        cout << i << " : ";
        for (int x : edgeList[i]) cout << x << " ";
        cout << endl;
    }
    return 0;
}
