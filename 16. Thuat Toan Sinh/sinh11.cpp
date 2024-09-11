/*
    [Thuật Toán Sinh]. Bài 11. Phân hoạch
    Cho số nguyên dương N, bạn hãy in ra các cách biểu diễn N dưới dạng tổng của các số tự nhiên <= N.

    Đầu vào:
    -Số nguyên dương N
    Đầu ra:
    -Dòng đầu tiên in ra số lượng cách biểu diễn. Các dòng tiếp theo in ra cách biểu diễn được liệt kê theo thứ tự từ từ điển giảm dần.

    Giới hạn:
    1<=N<=20

    Input 01:
    5
    Output 01:
    7
    5
    4+1
    3+2
    3+1+1
    2+2+1
    2+1+1+1
    1+1+1+1+1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
vector<int> partitions;
bool final = false;

void sinh(){
    int currentSize = partitions.size(), cnt = 0;
    while (!partitions.empty() && partitions.back() == 1){
        partitions.pop_back();
    }
    if (partitions.empty()){
        final = true;
        return;
    }
    partitions.back()--;
    int remainingSum = currentSize - partitions.size() + 1;
    int lastElement = partitions[partitions.size() - 1];
    for (int k = 0; k < remainingSum / lastElement; k++){
        partitions.push_back(lastElement);
    }
    if (remainingSum % lastElement != 0) partitions.push_back(remainingSum % lastElement);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    partitions.push_back(n);
    vector<vector<int>> allPartitions;
    while (!final)
    {
        allPartitions.push_back(partitions);
        sinh();
    }
    cout << allPartitions.size() << endl;
    for (auto x : allPartitions){
        for (int i = 0; i < x.size(); i++){
            if (i == x.size() - 1) cout << x[i] << endl;
            else cout << x[i] << "+";
        }
    }
    return 0;
}