#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX_NODES = 100;
int a[MAX_NODES];
int level, currentLevel = 0;
bool hasSameLevel = true;

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

int countChild(int i) {
    int res = 0;
    if (a[i * 2] != 0) res++;
    if (a[i * 2 + 1] != 0) res++;
    return res;
}

void checkLevel(int i) {
    if (i >= MAX_NODES || a[i] == 0) return;
    currentLevel++;
    if (a[i * 2] == 0 && a[i * 2 + 1] == 0) {
        if (level != currentLevel) {
            if (level == 0) level = currentLevel;
            else {
                hasSameLevel = false;
            }
        }
    } else {
        checkLevel(i * 2);
        checkLevel(i * 2 + 1);
    }
    currentLevel--;
}

bool isFullBinaryTree(int i) {
    if (i >= MAX_NODES && a[i] == 0) return true;
    if (countChild(i) != 0 && countChild(i) != 2) return false;
    return isFullBinaryTree(i * 2) && isFullBinaryTree(i * 2 + 1);
}

bool isPerfectTree() {
    checkLevel(1);
    return hasSameLevel && isFullBinaryTree(1);
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
        addNode(1, parent, child, position);
    }
    if (isPerfectTree) cout << "YES";
    else cout << "NO";
    return 0;
}