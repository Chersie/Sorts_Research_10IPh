#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "array_generation.h"
#include "array_sort.h"

using namespace std;

void measure_time(vector <int> &time1, vector <int> &time2, vector <int> &time3, vector <int> &time4, vector <int> a, bool(*comparator)(int &x, int &y) = default_comparator) {
    time1.push_back(sort1(a, comparator));
    time2.push_back(sort2(a, comparator));
    time3.push_back(sort3(a, comparator));
    time4.push_back(sort4(a, comparator));
    return;
}

int main()
{
    ofstream fout("output.txt");
    vector <int> time1, time2, time3, time4;
    for(int i = 0; i < 9; i++) {
        auto a = generate_array(20000, -10000, 10000);
        measure_time(time1, time2, time3, time4, a);
        a = generate_array(20000, -100, 100);
        measure_time(time1, time2, time3, time4, a);
        a = generate_array(40000, -10000, 10000);
        measure_time(time1, time2, time3, time4, a);
        a = generate_array(40000, -100, 100);
        measure_time(time1, time2, time3, time4, a);
    }
    auto a = generate_array(20000, -10000, 10000);
    sort(a.begin(), a.end());
    measure_time(time1, time2, time3, time4, a, reverse_comparator);
    a = generate_array(20000, -100, 100);
    measure_time(time1, time2, time3, time4, a, reverse_comparator);
    a = generate_array(40000, -10000, 10000);
    measure_time(time1, time2, time3, time4, a, reverse_comparator);
    a = generate_array(40000, -100, 100);
    measure_time(time1, time2, time3, time4, a, reverse_comparator);
    for(int i = 0; i < time1.size(); i++) {
        cout << time1[i] << ' ';
    }
    return 0;
}
