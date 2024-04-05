//
// Created by 29918 on 2024/4/1.
//

#include "listtest.h"
#include "common.h"
#include <ctime>
#include <algorithm>
#include <cstring>
#include <cstdio>

namespace listtest {
    void list_test(long& value)
    {
        cout << "test list enter" << endl;

        list<string> c;
        char buf[10];
        clock_t timeStart = clock();
        for (long i = 0; i < value; ++i) {
            try {
                snprintf(buf, 10, "%d", rand());
                c.push_back(buf);
            } catch (exception& p) {
                cout << "i = " << i << " " << p.what() << endl;
            }
        }
        cout << "milli-seconds : " << (clock() - timeStart) << endl;
        cout << "list.size() = " << c.size() << endl;
        cout << "list.max_size() =" << c.max_size() << endl;
        cout << "list.front() = " << c.front() << endl;
        cout << "list.back() = " << c.back() << endl;

        string target = get_a_target_string();
        timeStart = clock();
        auto pItem = ::find(c.begin(), c.end(), target);
        if (pItem != c.end()) {
            cout << "found , " << *pItem << endl;
        } else {
            cout << "not found! " << endl;
        }

        timeStart = clock();
        c.sort();
        cout << "c.sort(), milli-seconds : " << (clock() - timeStart) << endl;
    }

}

