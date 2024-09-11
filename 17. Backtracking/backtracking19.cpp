/*
[Quay Lui - Nhánh Cận]. Bài 19. Dãy con có tổng lẻ
Cho mảng A[] gồm N phần tử, liệt kê các tập con (giữ đúng thứ tự trước sau) của mảng A[] có tổng các 
phần tử là số lẻ, mỗi phần tử chỉ được lấy 1 lần. Chú ý nếu 2 tập hợp chứa 2 phần tử có giá trị giống 
nhau nhưng ở vị trí khác nhau thì được tính 2 tập hợp khác nhau.

Đầu vào:
• Dòng 1 là N : số lượng phần tử trong mảng
• Dòng 2 gồm N số trong mảng A[]
Đầu ra:
• In ra các tập con thỏa mãn theo thứ tự từ điển tăng dần, nếu không tồn tại dãy con in ra NOT FOUND.

Giới hạn:
• 2 <= N <= 15
• 1 <= A[i] <= 1000

Input 01:
4
9 7 9 9
Output 01:
7 
7 9 9 
9 
9 
9 
9 7 9 
9 7 9 
9 9 9
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, currentSum;
int a[20];
vector<int> subArray;
multiset<vector<int>> se;

void Try(int i){
    if (currentSum % 2 == 1) se.insert(subArray);
    for (int j = i; j < n; j++){
        currentSum += a[j];
        subArray.push_back(a[j]);
        Try(j + 1);
        currentSum -= a[j];
        subArray.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    Try(0);
    if (se.size() == 0) cout << "NOT FOUND";
    else{
        for (auto x : se){
            for (int i : x) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}