/*
    [Mảng 1 Chiều Nâng Cao]. Bài 2. Kiểm tra mảng tăng dần

    Kiểm tra xem mảng đã cho có tăng chặt hay không, tức là các phần tử đứng sau luôn lớn hơn phần tử đứng trước nó.
    Gợi ý : Xét N - 1 cặp số đứng cạnh nhau, nếu cả N - 1 cặp đều thỏa mãn số đứng sau lớn hơn số đứng trước thì mảng tăng dần. 
    Lưu ý là đừng có xét a[0] với số đứng trước nó, việc này sẽ so sánh a[0] với a[-1].

    Đầu vào:
    -Dòng đầu tiên là số lượng phần tử trong mảng.
    -Dòng thứ 2 là N phần tử trong mảng.
    Đầu ra:
    -In YES nếu các phần tử trong mảng tăng dần, ngược lại in NO.

    Giới hạn
    -1≤n≤10^6
    -1≤ai≤10^9

    Input 01:
    6
    1 2 3 8 9 22
    Output 01:
    YES
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i - 1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}