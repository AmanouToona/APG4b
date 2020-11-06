#include <bits/stdc++.h>
using namespace std;

struct Clock {
    int hour, minute, second;

    void set(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
        return;
    }

    string to_str(){
        string h, m, s;
        h = to_string(hour);
        m = to_string(minute);
        s = to_string(second);

        if (h.size() == 1) h = '0' + h;
        if (m.size() == 1) m = '0' + m;
        if (s.size() == 1) s = '0' + s;

        return h + ':' + m + ':' + s;
    }

    void shift(int diff_second) {
        int now_second, new_second; 

        now_second = hour * 3600 + minute * 60 + second;
        new_second = now_second + diff_second + 24 * 3600;
        new_second %= 24 * 3600;

        hour = new_second / 3600;
        new_second -= hour * 3600;
        minute = new_second / 60;
        second = new_second - minute * 60;        
    }

};


int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;
 
  // Clock構造体のオブジェクトを宣言
  Clock clock;
 
  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);
 
  // 時刻を出力
  cout << clock.to_str() << endl;
 
  // 時計を進める(戻す)
  clock.shift(diff_second);
 
  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}