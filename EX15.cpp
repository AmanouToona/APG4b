#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> score) {
    int total = 0;
    for (int i = 0; i < score.size(); i++) {
            total += score.at(i);
    }
    return total;    
}

void output(int sum_a, int sum_b, int sum_c) {
    cout << sum_a * sum_b * sum_c << endl;
    return;
}

vector<int> input(int N) {
    vector<int> score(N);
    for (int i = 0; i < N; i++) {
        cin >> score.at(i);
    }
    return score;
}


int main() {
    int N;
    cin >> N;

    vector<int> A = input(N);
    vector<int> B = input(N);
    vector<int> C = input(N);

    int sum_a = sum(A);
    int sum_b = sum(B);
    int sum_c = sum(C);

    output(sum_a, sum_b, sum_c);

}
