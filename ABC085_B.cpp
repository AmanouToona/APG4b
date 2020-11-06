#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> mochi(N);
    for (int i = 0; i < N; i++) {
        cin >> mochi.at(i);
    }

    sort(mochi.begin(), mochi.end());
    reverse(mochi.begin(), mochi.end());

    int ans = 1;
    for (int i = 1; i < N; i++) {
        if (mochi.at(i) < mochi.at(i - 1)) {
            ans += 1;
        }
    }

    cout << ans << endl; 

}