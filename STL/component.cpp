//
// Created by 29918 on 2024/3/29.
//

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

void testSixComponent()
{
    int arr[6] = {27, 210, 12, 47, 109, 83};
    vector<int ,allocator<int>> vi(arr, arr + 6);   // container(vector), allocator(allocator)
    // algorithm(count_if), function adapter(not1), function adapter(bind2nd), function object(less()),
    cout << count_if(vi.begin(), vi.end(), not1(bind2nd(less<int>(), 40))) << endl;

}