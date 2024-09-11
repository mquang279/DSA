/*
[Quay Lui - Nhánh Cận]. Bài 14. Tổ hợp có tổng bằng X
Cho mảng A[] gồm N số nguyên dương phân biệt và số X. Nhiệm vụ của bạn là tìm phép tổ hợp các số trong 
mảng A[] có tổng bằng X. Các số trong mảng A[] có thể được sử dụng nhiều lần. Mỗi tổ hợp các số của mảng 
A[] được in ra theo thứ tự không giảm các số.
Ví dụ với A[] = {2, 4, 6, 8}, X = 8 ta có các tổ hợp các số như sau: {2, 2, 2, 2}, {2, 2, 4}, {2, 6}, {4, 4}, {8}.

Đầu vào:
-Dòng thứ nhất là hai số N và X
-Dòng tiếp theo đưa vào N số của mmảng A[]
Đầu ra:
-In ra số tổ hợp thỏa mãn sau đó in ra các tổ hợp thỏa mãn trên từng dòng. Xem output để rõ hơn cách in. 
Trong trường hợp không có tổ hợp thỏa mãn thì in ra -1.

Giới hạn
1<=N<=20
1<=X,A[i]<=100

Input 01:
3 10
4 2 3
Output 01:
5
{2 2 2 2 2}
{2 2 2 4}
{2 2 3 3}
{2 4 4}
{3 3 4}
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, x;
int a[50];
vector<int> v;
set<vector<int>> se;

void Try(int i){
    for (int j = i; j < n; j++){
        int sum = accumulate(v.begin(), v.end(), 0);
        if (sum + a[j] <= x){
            v.push_back(a[j]);
            if (sum + a[j] == x){
                se.insert(v);
            }
            Try(j);
            v.pop_back();
        }
        else break;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    Try(0);
    if (se.size() == 0){
        cout << -1;
        return 0;
    }
    cout << se.size() << endl;
    for (vector<int> x : se){
        cout << "{";
        for (int i = 0; i < x.size(); i++){
            if (i != x.size() - 1) cout << x[i] << " ";
            else cout << x[i] << "}" << endl;
        }
    }
    return 0;
}