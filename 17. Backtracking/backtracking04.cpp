/*
[Quay Lui - Nhánh Cận]. Bài 4. Dãy con có tổng bằng S
Cho dãy số A[] = {a1, a2, ...an} và số tự nhiên K. Hãy tìm tất cả các dãy con của 
dãy số A[] sao cho tổng các phần tử của dãy con đó đúng bằng K. Các phần tử của 
dãy số A[] là nguyên dương và có giá trị khác nhau.
Ví dụ : với dãy con A[] = {5, 10, 15, 20, 25}, K = 50 ta có 3 dãy con {5, 10, 15, 20}, {5, 20, 25}, {10, 15, 25}.

Đầu vào:
-Dòng thứ 1 đưa vào số N là số lượng phần tử của dãy số A[] và số K;
-Dòng tiếp theo đưa vào N phần tử của dãy số A[].

Đầu ra:
-Đưa ra tất cả các dãy con của dãy số A[] thỏa mãn yêu cầu bài toán theo thứ tự từ điển, 
trong đó mỗi dãy con được bao bởi các ký tự [, ].
-Nếu không có dãy con nào thỏa mãn yêu cầu bài toán, hãy đưa ra -1.

Input 01:
10 26
12 11 9 10 6 8 14 7 5 13
Output 01:
[5 6 7 8]
[5 7 14]
[5 8 13]
[5 9 12]
[5 10 11]
[6 7 13]
[6 8 12]
[6 9 11]
[7 8 11]
[7 9 10]
[12 14]
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k, sum;
int a[102];
vector<int> v;

void Try(int start){
    if (sum == k){
        cout << '[';
        for (int i = 0; i < v.size(); i++){
            if (i == v.size() - 1) cout << v[i] << ']';
            else cout << v[i] << " ";
        }
        cout << endl;
    }
    else if (sum < k){
        for (int i = start; i < n; i++){
            sum += a[i];
            v.push_back(a[i]);
            Try(i + 1);
            sum -= a[i];
            v.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    Try(0);
    return 0;
}