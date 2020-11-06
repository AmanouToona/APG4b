#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> card(N);
    for (int i = 0; i < N; i++) {
        cin >> card.at(i);
    }

    sort(card.begin(), card.end());
    reverse(card.begin(), card.end());

    int A = 0, B = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            A += card.at(i);
        }
        else {
            B += card.at(i);
        }
    }

    cout << A - B << endl;

}