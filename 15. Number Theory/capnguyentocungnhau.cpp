#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int ucln(int a, int b){
    while (b != 0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        for (int j = i + 1; j <= b; j++){
            if (ucln(i, j) == 1){
                cout << '(' << i << ',' << j << ')' << endl;
            }
        }
    }
    return 0;
}