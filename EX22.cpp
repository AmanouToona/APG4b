#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a, b;
    vector<pair<int, int>> table;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        table.push_back(make_pair(b, a));
    }

    sort(table.begin(), table.end());

    for (int i = 0; i < N; i++) {
        cout << table.at(i).second << " " << table.at(i).first << endl;
    }

}