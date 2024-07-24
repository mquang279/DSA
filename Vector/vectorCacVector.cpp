#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void nhap(vector<vector<int>> &v, int n, int m){
    int tmp;
    for (int i = 0; i < n; i++){
        vector<int> v1;
        for (int j = 0; j < m; j++){
            cin >> tmp;
            v1.push_back(tmp);
        }
        v.push_back(v1);
    }
}

void xuat(vector<vector<int>> v, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void lat(vector<vector<int>> &v, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m / 2; j++){
            swap(v[i][j], v[i][m - j - 1]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector<vector<int>> v;
    nhap(v, n, m);
    lat(v, n, m);
    xuat(v, n, m);
    return 0;

}

