/*	[Mảng 1 Chiều Nâng Cao]. Bài 10. Tìm hợp, giao của 2 mảng
	Cho 2 mảng số nguyên a và b gồm n và m phần tử. Gọi mảng c và d lần lượt là mảng chỉ bao gồm các phần tử khác
    nhau của a và b.
	Hãy tìm mảng giao và hợp của mảng c và d và liệt kê theo thứ tự tăng dần.

	Đầu vào:
	-Dòng đầu tiên là số lượng phần tử của 2 dãy n và m.
	-Dòng thứ 2 là n phần tử trong dãy số 1.
	-Dòng thứ 3 là m phần tử trong dãy thứ 2.
	Đầu ra
	-Dòng đầu tiên in ra giao của 2 mảng c và d. Dòng thứ 2 in ra hợp của 2 mảng c và d.

    Giới hạn:
	1≤n,m≤10^6
	0≤ai≤10^7

	Ví dụ :
	Input 01
	5 6
	1 2 1 2 7
	1 2 3 4 5 6
	Output 01
	1 2
	1 2 3 4 5 6 7
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, tmp;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (mp.find(tmp) == mp.end()) mp[tmp] = 1;
    }
    for (int i = 0; i < m; i++){
        cin >> tmp;
        if (mp[tmp] == 1) mp[tmp]++;
    }
    for (auto it : mp){
        if (it.second == 2) cout << it.first << " ";
    }
    cout << endl;
    for (auto it : mp) cout << it.first << " ";
    return 0;
}