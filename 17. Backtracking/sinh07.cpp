#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
string student[15];
string pos[15];
bool visited[15];

void Try(int i){
    if (i == n){
        for (int j = 0; j < n; j++) cout << pos[j] << " ";
        cout << endl;
        return;
    }
    for (int j = 0; j < n; j++){
        if (!visited[j]){
            pos[i] = student[j];
            visited[j] = 1;
            Try(i + 1);
            visited[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> student[i];
    }
    sort(student, student + n);
    Try(0);
    return 0;
}