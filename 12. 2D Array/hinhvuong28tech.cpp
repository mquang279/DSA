#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[] = {0, -1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {0, -1, 0, 1, 1, 1, 0, -1, -1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            a[i][j] = tolower(a[i][j]);
        }
    }
    unordered_set<char> targetChars({'2', '8', 't', 'e', 'c', 'h'});
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n; j++){
            unordered_set<char> remainingChar(targetChars);
            for (int k = 0; k < 9; k++){
                int x = i + dx[k];
                int y = j + dy[k];
                if (x >= 0 && y >= 0 && x < n && y < n && remainingChar.find(a[x][y]) != remainingChar.end()){
                    remainingChar.erase(a[x][y]);
                }
                if (remainingChar.empty()){
                    cout << "28tech";
                    return 0;
                }
            }
        }
    }
    cout << "29tech";
    return 0;
}