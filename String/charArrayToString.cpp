#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string array_to_string(char a[], int n){
    string res = "";
    for (int i = 0; i < n; i++){
        res += a[i];
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    char a[10001];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << array_to_string(a, n) << endl;
}
