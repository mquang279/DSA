#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m;
int a[100][100];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int floodFill(int x, int y, int val){
    a[x][y] = 101;
    int res = 1;
    for (int i = 0; i < 8; i++){
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (newX >= 0 && newY >= 0 && newX < n && newY < m && a[newX][newY] == val){
            res += floodFill(newX, newY, val);
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    map<int, multiset<int>> mp;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] != 101){
                mp[a[i][j]].insert(floodFill(i, j, a[i][j]));
            }
        }
    }
    for (auto it : mp){
        cout << it.first << " : ";
        for (int x : it.second){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}