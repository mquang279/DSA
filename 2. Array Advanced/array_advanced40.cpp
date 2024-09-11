/*  [Mảng 1 Chiều Nâng Cao]. Bài 40. Mảng con
    Cho mảng A[] gồm N phần tử, mảng B gồm M phần tử. Nhiệm vụ của bạn là xác định xem B có phải là một mảng con
    (không cần liên tiếp nhưng cần giữ đúng thứ tự các phần tử) của mảng A hay không.
    Ví dụ mảng A[] = {1, 1, 2, 8, 9, 3, 4}, B[] = {1, 2, 9, 4} là một mảng con của mảng A
    
    Đầu vào
    Dòng đầu tiên gồm N và M
    Dòng thứ 2 gồm N số A[i]
    Dòng thứ 3 gồm M số B[i]
    Giới hạn
    1<=N,M<=10^6
    1<=A[i],B[i]<=10^6
    Đầu ra
    In ra YES nếu B là mảng con của A, ngược lại in NO.
    
    Ví dụ :
    Input 01
	16 2
	3 6 10 10 10 2 8 4 2 1 9 4 2 1 6 3 
	2 3
    Output 01
    YES
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    int pos = 0;
    for (int x : a){
        if (x == b[pos]) pos++;
        if (pos == m) break;
    }
    if (pos == m) cout << "YES";
    else cout << "NO";
    return 0;
}