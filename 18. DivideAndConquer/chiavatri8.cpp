/*
[Chia Và Trị]. Bài 8. Trộn 2 mảng
Cho hai mảng đã được sắp xếp A[], B[] gồm N, M phần tử theo thứ tự và số K. Nhiệm vụ của bạn là 
tìm phần tử ở vị trí số K sau khi trộn hai mảng để nhận được một mảng được sắp xếp.

Đầu vào:
-Dòng đầu tiên chứa 3 số N, M, K
-Dòng thứ 2 chứa N số nguyên của mảng A[]
-Dòng thứ 3 chứa M số nguyên của mảng B[]
Đầu ra:
-In ra đáp án của bài toán

Giới hạn
1<=N,M<=10^4
1<=K<=N+M
1<=A[i],B[i]<=10^6

Ví dụ :
Input 01
7 9 14
4 6 7 9 10 10 10 
1 1 2 5 7 8 8 9 10
Output 01
10
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    int i = 0, j = 0;
    vector<int> v;
    while (i < n && j < m){
        if (a[i] < b[j]){
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }
    while (i < n){
        v.push_back(a[i]);
        i++;
    }
    while (j < m){
        v.push_back(b[j]);
        j++;
    }
    cout << v[k - 1];
    return 0;
}