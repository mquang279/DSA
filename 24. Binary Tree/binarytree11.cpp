#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int findRoot(int n, int root, int in[]) {
    for (int i = 0; i < n; i++) {
        if (in[i] == root) return i;
    }
    return -1;
}

void postorder(int n, int pre[], int in[]) {
    int root = pre[0];
    int pos = findRoot(n, root, in);
    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int pre[n], in[n];
    for (int i = 0; i < n; i++) {
        cin >> pre[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> in[i];
    }

    return 0;
}