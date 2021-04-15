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

void measure_time(vector <int> &time1, vector <int> &time2, vector <int> &time3, vector <int> &time4, vector <int> &a, bool(*comparator)(int &x, int &y) = default_comparator) {
    auto a1, a2, a3, a4 = a, a, a, a;
    long long t1 = sort1(a1, comparator), t2 = sort2(a2, comparator), t3 = sort3(a3, comparator), t4 = sort4(a4, comparator);
    time1.push_back(t1);
    time2.push_back(t2);
    time3.push_back(t3);
    time4.push_back(t4);
    cout << t1 << '\n';
    return;
}

int main()
{
    vector <int> time1, time2, time3, time4;
    for(int i = 0; i < 10; i++) {
        cout << i << ": ";
        auto a = generate_array(20000, -10000, 10000);
        measure_time(time1, time2, time3, time4, a);
        cout << "1 ";
        a = generate_array(20000, -100, 100);
        measure_time(time1, time2, time3, time4, a);
        cout << "2 ";
        a = generate_array(40000, -10000, 10000);
        measure_time(time1, time2, time3, time4, a);
        cout << "3 ";
        a = generate_array(40000, -100, 100);
        measure_time(time1, time2, time3, time4, a);
        cout << "4 \n";
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
    int temp;
    cin >> temp;
    return 0;
}
