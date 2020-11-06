#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> board(N, vector<char>(N, '-'));

    int A, B;
    for (int i = 0; i < M; i++) {
        cin >> A >> B;
        board.at(A - 1).at(B - 1) = 'o';
        board.at(B - 1).at(A - 1) = 'x';
    } 

    for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << board.at(i).at(j);
            if (j != N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}