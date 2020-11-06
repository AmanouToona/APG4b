#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<int, int> counter;

    int A;
    for (int i = 0; i < N; i++) {
        cin >> A;
        if (counter.count(A)) {
            counter[A] += 1;
        }
        else {
            counter[A] = 1;
        }
    }

    int count_max = 0, num_max;
    for (auto p :counter) {
        if (p.second > count_max) {
            num_max = p.first;
            count_max = p.second;
        }
    }
    
    cout << num_max << " " << count_max << endl;


}
