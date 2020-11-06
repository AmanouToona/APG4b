#include <bits/stdc++.h>
using namespace std;


int operation(int a, int b, string op) {
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


void print_int(int a) {
    cout << a << endl;
}


void print_vec(vector<int> vec) {
    cout << "[" ;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
    cout << "]" << endl;
}

string read_name() {
    string name, unuse;
    cin >> name >> unuse; 
    return name;
}

int read_int(map<string, int> &var_int) {
    string val;
    cin >> val;
    if (isdigit(val.at(0))){
        return stoi(val);
    }
    else {
        return var_int.at(val);
    }
}

int calc_int(map<string, int> &var_int) {
    string val;
    int a;

    val = read_name();

    char symbol;
    while (true) {
        a = read_int(var_int);
        cin >> symbol;
    }
    

}


int main() {
    int n, val;
    cin >> n;

    vector<int> int_strage(26);
    vector<vector<int>> vec_storatge(26, vector<int>());

    string command;
    cin >> command;

    if (command == "int") {

    }else if (command == "print_int") {

    }else if (command == "vec") {

    }else {

    }


}
