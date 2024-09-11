/*
    [Thuật Toán Sinh]. Bài 13. Liệt kê tập con
    Cho một tập gồm N phần tử được đánh số từ 1 đến N. Nhiệm vụ của bạn là liệt kê tất cả 
    các tập con khác rỗng của N theo thứ tự từ điển tăng dần.

    Đầu vào:
    -Dòng duy nhất chứa số nguyên dương N.
    Đầu ra:
    -In ra các tập con của N theo thứ tự từ điển tăng dần.

    Input 01:
    4
    Output 01:
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 4 
    1 3 
    1 3 4 
    1 4 
    2 
    2 3 
    2 3 4 
    2 4 
    3 
    3 4 
    4
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
vector<int> v;
bool isFinal = false;

void sinh(){
    int i = v.size() - 1;
    while (i >= 0 && v[i] == 1){
        v[i] = 0;
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    v[i] = 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        v.push_back(0);
    }
    sinh();
    vector<vector<int>> res;
    while (!isFinal){
        vector<int> tmp;
        for (int i = 0; i < n; i++){
            if (v[i] != 0){
                tmp.push_back(i + 1);
            }
        }
        res.push_back(tmp);
        sinh();
    }
    sort(res.begin(), res.end());
    for (auto x : res){
        for (int val : x){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}