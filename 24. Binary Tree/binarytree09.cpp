#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX_NODES = 5000;
int a[MAX_NODES], currentLevel = 1;
bool hasReversed = false;

void addNode(int i, int parent, int child, char position) {
    if (a[i] == 0) return;
    if (a[i] == parent) {
        if (position == 'L') {
            a[i * 2] = child;
        } else {
            a[i * 2 + 1] = child;
        }
    } else {
        addNode(i * 2, parent, child, position);
        addNode(i * 2 + 1, parent, child, position);
    }
}

void spiralTraversal() {
    queue<int> q;
    cout << 1 << " ";
    if (a[2] != 0 && a[3] != 0) {
        q.push(2);
        q.push(3);
    }
    while (!q.empty()) {
        if (currentLevel % 2 == 1) {
            cout << q.front() << " ";
        } else {
            
        }
        int u = q.front();
        q.pop();
        
        if (q.empty()) currentLevel++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    a[1] = 1;
    for (int i = 0; i < n; i++) {
        int parent, child;
        char position;
        cin >> parent >> child >> position;
    }
    return 0;
}