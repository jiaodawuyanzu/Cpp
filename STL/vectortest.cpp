//
// Created by 29918 on 2024/4/1.
//

#include <vector>
#include <stdexcept>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <ctime>
#include <algorithm>
#include "common.h"

namespace vectortest {

    void vector_test(long& value)
    {
        cout << "vector test enter" << endl;
        vector<string> c;
        char buf[10];

        clock_t timeStart = clock();
        for (long i = 0; i < value; ++i) {
            try {
                snprintf(buf, 10, "%d", rand());
                c.push_back(buf);
            } catch(exception& p) {
                cout << "i = " << i << " " << p.what() << endl;
                abort();
            }
        }

        cout << "milli-second :" << (clock() - timeStart) << endl;
        cout << "vector.size() = " << c.size() << endl;
        cout << "vector.foront() = " << c.front() << endl;
        cout << "vector.back() = " << c.back() << endl;
        cout << "vector.data() = " << c.data() << endl;
        cout << "vector.capacity = " << c.capacity() << endl;

        string target = get_a_target_string();
        {
            timeStart = clock();
            auto pItem = ::find(c.begin(), c.end(), target);
            cout << "::find milli-seconds : " << (clock() - timeStart) << endl;

            if (pItem != c.end()) {
                cout << "found, " << *pItem << endl;
            } else {
                cout << "not found! " << endl;
            }
        }
        {
            timeStart = clock();
            sort(c.begin(), c.end());
            string* pitem = (string*) bsearch(&target, c.data(), c.size(), sizeof(string), compareStrings);
            cout << "sort + bsearch, milli-seconds : " << (clock() - timeStart) << endl;
            if (pitem != NULL) {
                cout << "found " << *pitem << endl;
            } else {
                cout << "not found " << endl;
            }
        }
    }

}