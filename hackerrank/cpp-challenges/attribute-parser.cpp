// https://www.hackerrank.com/challenges/attribute-parser/problem

#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
#include <bits/stdc++.h>

typedef long long LL;

class Tag{
    private:
        std::map<std::string, std::string> props;
        std::vector<Tag> childrens;
        std::string name;

    public:
        Tag(){};

        void setName(std::string n) { name = n; }
        std::string getName(){ return name; }

        void setProp(std::map<std::string, std::string> p){ props = p; }
        std::map<std::string, std::string> getProp(){ return props; }
};

int main() {
    int n, q, i, tmp;
    std::string line, tmpstr;

    std::smatch m;
    std::regex r;

    std::vector<Tag> tags;

    std::cin >> n >> q;

    for (i = 0; i <= n; ++i) {
        getline(std::cin, line);
        Tag *t = new Tag();

        r = "^<(\\w*)";
        std::regex_search(line, m, r);
        t->setName(m[1]);

        r = "<*\\s(.*)>";
        std::regex_search(line, m, r);
        tmpstr = m[1];
        tmpstr.erase( std::remove( tmpstr.begin(), tmpstr.end(), '\"'), tmpstr.end()  );
        tmpstr.erase( std::remove_if( tmpstr.begin(), tmpstr.end(), ::isspace), tmpstr.end()  );

        r = "(\\w*)=(\\w*)";
        std::regex_search(tmpstr, m, r);
        std::map<std::string, std::string> p;
        p.insert(std::make_pair(m[1], m[2]));
        t->setProp(p);
    }

    return 0;
}

// Not yet finished
