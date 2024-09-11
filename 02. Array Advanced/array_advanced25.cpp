/*  [Mảng 1 Chiều Nâng Cao]. Bài 25. Mảng 012
    Cho dãy số A[] gồm có N phần tử, các phần tử trong mảng chỉ là 0 1 hoặc 2.
    Hãy sắp xếp các phần tử trong mảng theo thứ tự tăng dần.
    Gợi ý : Đừng dùng hàm sort
    
    Đầu vào
    Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]
    Giới hạn
    1 ≤ N ≤ 10^7
    0 ≤ A[i] ≤ 2
    Đầu ra
    In ra mảng được sắp xếp tăng dần.
    Ví dụ :
    
    Input 01
    5
    1 1 0 2 1
    Output 01
    0 1 1 1 2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    for (auto it : mp){
        for (int i = 0; i < it.second; i++){
            cout << it.first << " ";
        }
    }
    return 0;
}