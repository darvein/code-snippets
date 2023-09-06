// https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

typedef long long LL;

int main() {
    int i, score, option, n, tmp;
    std::string name;

    std::map<std::string, int> m;

    std::cin >> n;
    for (i = 1; i <= n; ++i) {
        std::cin >> option >> name;
        switch (option) {
            case 1:
                std::cin >> score;
                if (m.count(name)) {
                    tmp = m.at(name) + score;
                    m.erase(name);
                    m.insert(make_pair(name, tmp));
                } else {
                    m.insert(make_pair(name, score));
                }
                break;
            case 2:
                m.erase(name);
                break;
            case 3:
                if (m.count(name)) {
                    std::cout << m.at(name) << std::endl;
                } else {
                    std::cout << "0"  << std::endl;
                }
                break;
            default: break;
        }
    }

    //std::map<std::string, int>::iterator it;
    //for(it = m.begin(); it != m.end(); it++){
        //std::cout << it->first << " : " << it->second << std::endl;
    //}

    return 0;
}
