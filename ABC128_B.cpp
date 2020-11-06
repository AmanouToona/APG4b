#include <bits/stdc++.h>
using namespace std;


int main() {
    int N;
    cin >> N;

    vector<tuple<string, int, int>> restaurant;

    int P;
    string C;
    for (int i = 0; i < N; i++) {
        cin >> C >> P;
        restaurant.push_back(make_tuple(C, 100 -P, i + 1)); 
    }

    sort(restaurant.begin(), restaurant.end());

    for (int i = 0; i < N; i++) {
        cout << get<2>(restaurant.at(i)) << endl;
    }

}
