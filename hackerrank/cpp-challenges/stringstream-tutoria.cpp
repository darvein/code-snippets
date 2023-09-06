// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
//
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> v = {};
    stringstream ss(str);
    string tmp;

    while(getline(ss, tmp, ',')) v.push_back(atoi(tmp.c_str()));

    return(v);
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}


