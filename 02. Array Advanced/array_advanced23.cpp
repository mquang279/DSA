/*  [Mảng 1 Chiều Nâng Cao]. Bài 23. Trộn 2 dãy đã sắp xếp
    Cho hai dãy số nguyên dương A và B. Hãy trộn hai dãy với nhau sao cho dãy A được đưa vào các vị trí có chỉ số
    chẵn, dãy B được đưa vào các vị trí có chỉ số lẻ. Đồng thời, dãy A được sắp xếp tăng dần, còn dãy B được sắp xếp
    giảm dần. (Chú ý: chỉ số tính từ 0)
    Đầu vào
    Dòng đầu tiên ghi số n là số lượng phần tử của 2 dãy.
    Dòng tiếp theo ghi n số nguyên dương của dãy A.
    Dòng tiếp theo ghi n số nguyên dương của dãy B.
    Giới hạn
    1≤n≤10^5
    1≤ai,bi≤10^9
    Đầu ra
    In ra kết quả theo yêu cầu của bài toán
    Ví dụ :
    Input 01
    4
    4 2 7 1
    5 6 2 8
    Output 01
    1 8 2 6 4 5 7 2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + n, __greater());
    int i = 0, j = 0;
    while (i < n && j < n){
        int tmp = i + j;
        if (tmp % 2 == 0){
            cout << a[i] << " ";
            i++;
        }
        else{
            cout << b[j] << " ";
            j++;
        }
    }
    if (i != n) cout << a[n - 1];
    if (j != n) cout << b[n - 1];
    return 0;
}