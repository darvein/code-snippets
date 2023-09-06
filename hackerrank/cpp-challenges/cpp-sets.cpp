// https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q, i, option, val;
    std::set<int> s;

    std::cin >> q;
    for (i = 0; i < q; ++i) {
        std::cin >> option >> val; 

        if (option==1) s.insert(val);
        if (option==2) s.erase(val);
        if (option==3)
            (s.find(val) == s.end()) ? 
                std::cout << "No" << std::endl :
                std::cout << "Yes" << std::endl;
    }

    return 0;
}
