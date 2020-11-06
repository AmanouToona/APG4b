#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string s;

    cin >> N;

    for (int i = 0; i < N; i ++ ) {
        cin >> s;
        if (s == "Y") {
            cout << "Four" << endl;
            break;
        }
        if (i == N - 1) {
            cout << "Three" << endl;
        }
    }
}
