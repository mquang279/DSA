#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[2][3];

void rotateLeft(){
    int tmp = a[0][1];
    a[0][1] = a[0][0];
    int tmp2 = a[1][1];
    a[1][1] = tmp;
    int tmp3 = a[1][0];
    a[1][0] = tmp2;
    a[0][0] = tmp3;
}

void rotateRight(){
    int tmp = a[0][2];
    a[0][2] = a[0][1];
    int tmp2 = a[1][2];
    a[1][2] = tmp;
    int tmp3 = a[1][1];
    a[1][1] = tmp2;
    a[0][1] = tmp3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    char x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == 'L') rotateLeft();
        else rotateRight();
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}