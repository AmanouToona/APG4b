#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG;

int main() {
    int N;

    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int average = 0;
    for (int i = 0; i < A.size(); i++ ){
        average += A.at(i);
    }
    average /= A.size();

    for (int i = 0; i < A.size(); i++ ) {
        if (A.at(i) < average) {
            cout << average - A.at(i) << endl;
        }
        else {
            cout << A.at(i) - average << endl;
        }
    }
}
