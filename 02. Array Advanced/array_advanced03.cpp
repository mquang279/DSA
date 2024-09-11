/*
    [Mảng 1 Chiều Nâng Cao]. Bài 3. Số lớn hơn các số đứng trước
    Cho một dãy số nguyên dương có N phần tử. Hãy liệt kê số các phần tử trong dãy 
    lớn hơn tất cả các số đứng trước nó (Phần tử đầu tiên được coi là một phần tử thỏa mãn).

    Đầu vào:
    -Dòng đầu tiên là số lượng phần tử trong mảng.
    -Dòng thứ 2 là N phần tử trong mảng.
    Đầu ra:
    -Liệt kê các số thỏa mãn

    Giới hạn
    2≤n≤10^6
    -10^9≤ai≤10^9

    Input 01
    6
    2 6 1 3 9 9
    Output 01
    2 6 9
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp, curr_max = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp > curr_max) cout << tmp << " ";
        curr_max = max(curr_max, tmp);
    }
    return 0;
}