// https://www.hackerrank.com/challenges/vector-erase/problem

#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

//using namespace std;

int main() {
    int size, tmp;
    int index1, index2;
    std::vector<int> v;

    std::cin >> size;
    for (int i = 0; i < size; ++i) {
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cin >> index1;
    v.erase(v.begin()+index1-1);

    std::cin >> index1;
    std::cin >> index2;
    v.erase(v.begin()+index1-1, v.begin()+index2-1);

    std::cout << v.size() << std::endl;
    for(int i: v) std::cout << i << " ";

    return 0;
}
