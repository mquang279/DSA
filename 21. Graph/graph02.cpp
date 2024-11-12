/*
[Đồ thị]. Bài 2. Danh sách kề sang danh sách cạnh
Cho đồ thị vô hướng G = <V, E> gồm n đỉnh và m cạnh được biểu diễn dưới dạng danh sách kề.
Hãy chuyển đổi đồ thị dưới dạng danh sách kề này sang danh sách cạnh tương ứng.
Gợi ý : Đối với mỗi dòng đọc như 1 chuỗi rồi tách các số trong dòng đó để thu được danh sách kề

Đầu vào:
-Dòng đầu tiên là số nguyên dương n, tương ứng với số đỉnh của đồ thị.
-n dòng tiếp theo mỗi dòng chứa nhiều số nguyên, dòng thứ i tương ứng với các đỉnh trong danh sách kề của đỉnh i.
Đầu ra:
-In ra các cạnh trong đồ thị trên từng dòng, các cạnh được liệt kê tăng dần. Chú ý mỗi cạnh chỉ liệt kê một lần.

Giới hạn
1<=n<=1000

Ví dụ :
Input 01
5
4 
3 4 5 
2 5 
1 2 
2 3
Output 01
1 4
2 3
2 4
2 5
3 5
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
    vector<pair<int, int>> edges;
    for (int i = 1; i <= n; i++){
        string s, word;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> word) {
            int node = stoi(word);
            if (node > i){
                edges.push_back({i, node});
            }
        }
    }
    for (auto it : edges){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}