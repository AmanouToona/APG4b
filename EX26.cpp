#include <bits/stdc++.h>
using namespace std;


int return_int (string value_str, map<string, int> &int_table) {
    if (isdigit(value_str.at(0))) {
        return stoi(value_str);
    }
    else {
        return int_table.at(value_str);
    }
}


vector<int> return_vec (vector<string> &vec_str, map<string, vector<int>> &vec_table, map<string, int> &int_table) {
        string val;
        vector<int> result;

        val = vec_str.at(0);
        if (val != "[") {
            return vec_table.at(val);
        }

        for (string val : vec_str) {
            if (val == "[") {
                continue;
            }
            else if (val == "]") {
                break;
            }

            result.push_back(return_int(val, int_table));
        }
        return result;
}


int calc_int(int a, int b, string op) {
    if (op == "+") {
        return a + b;
    }
    else if (op == "-") {
        return a - b;
    }
    else if (op == "/") {
        return a / b;
    }
    else {
        return a * b;
    }
}

vector<int> calc_vec(vector<int> &vec_a, vector<int> &vec_b, string op) {
    vector<int> result;
    for (int i=0; i < vec_a.size(); i ++) {
        result.push_back(calc_int(vec_a.at(i), vec_b.at(i), op));
    }
    return result;
}


void print_int(int val){
    cout << val << endl;
}


void print_vec(vector<int> vec) {
    cout << "[" << " ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
    cout << "]" << endl;
    return;
}


int formula_int(map<string, int> int_table) {
    string symbol, string_val;
    int result;

    cin >> string_val;

    result = return_int(string_val, int_table);

    while (true) {
        cin >> symbol;
        if (symbol == ";") {
            return result;
        }

        cin >> string_val;
        result = calc_int(result, return_int(string_val, int_table), symbol);
    }
}


vector<int> formula_vec (map<string, vector<int>> &vec_table, map<string, int> &int_table) {
    string symbol, string_in = "";
    vector<int> result, effect;
    vector<string> string_vec;
    set<string> symbols = {"+", "-", "/", "*", ";"};

    while (true) {
        cin >> string_in;

        if (symbols.count(string_in)) {
            symbol = string_in;
            break;
        }
        if (string_in == ",") {
            continue;
        }
        string_vec.push_back(string_in);
    }

    result = return_vec(string_vec, vec_table, int_table);
    if (symbol == ";") {
        return result;
    }

    while (symbol != ";") {
        vector<string> string_vec;

         while (true) {
            cin >> string_in;

            if (symbols.count(string_in)) {
                break;
            }
            if (string_in == ",") {
                continue;
            }

        string_vec.push_back(string_in);
        }
        
        effect = return_vec(string_vec, vec_table, int_table);

        result = calc_vec(result, effect, symbol);

        symbol = string_in;
    }

    return result;
}


int main() {
    int n, val;
    cin >> n;

    map<string, int> int_strage;
    map<string, vector<int>> vec_storatge;

    string command;
    for (int i = 0; i < n; i++){
        cin >> command;

        if (command == "int") {
            string name, unuse;
            cin >> name >> unuse;  // unuse is "="

            int_strage[name] = formula_int(int_strage);

        }else if (command == "print_int") {
            int val;
            val = formula_int(int_strage);
            cout << val << endl;

        }else if (command == "vec") {
            string name, unuse;
            cin >> name >> unuse;  // unuse is "="

            vec_storatge[name] = formula_vec(vec_storatge, int_strage);

        }else {
            vector<int> vec;
            vec = formula_vec(vec_storatge, int_strage);
            print_vec(vec);
        }
    }
}
