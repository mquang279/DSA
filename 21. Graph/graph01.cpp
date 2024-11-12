#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> ke[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++){
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for (int i = 1; i <= nodes; i++){
        cout << i << " : ";
        sort(ke[i].begin(), ke[i].end());
        for (int x : ke[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}