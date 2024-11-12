/*
[Đồ thị]. Bài 4. Danh sách kề sang danh sách cạnh (có hướng).
Cho đồ thị có hướng G = <V, E> gồm n đỉnh và m cạnh được biểu diễn dưới dạng danh sách kề.
Hãy chuyển đổi đồ thị dưới dạng danh sách kề này sang danh sách cạnh tương ứng.

Đầu vào:
-Dòng đầu tiên là số nguyên dương n, tương ứng với số đỉnh của đồ thị.
-m dòng tiếp theo mỗi dòng chứa nhiều số nguyên, dòng thứ i tương ứng với các đỉnh trong danh sách kề của đỉnh i.
Đầu ra:
-In ra các cạnh trong đồ thị trên từng dòng, các cạnh được liệt kê tăng dần.

Giới hạn
1<=n<=1000

Ví dụ :
Input 01:
5
5 3 4 
4 1 3 5 
4 2 
3 1 2 
3 2
Output 01:
1 3
1 4
1 5
2 1
2 3
2 4
2 5
3 2
3 4
4 1
4 2
4 3
5 2
5 3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    vector<vector<int>> v(n + 1);
    for (int i = 1; i <= n; i++){
        string s, node;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> node){
            v[i].push_back(stoi(node));
        }
    }
    for (int i = 1; i <= n; i++){
        sort(v[i].begin(), v[i].end());
        for (int node : v[i]){
            cout << i << " " << node << endl;
        }
    }
    return 0;
}