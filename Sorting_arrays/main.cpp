#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <ctime>

using namespace std;



vector <int> input_array() {
    ifstream fin("array_origin.txt");
    int n;
    fin >> n;
    vector <int> _array(n);
    for(int i = 0; i < n; i++) {
        fin >> _array[i];
    }
    return _array;
}

void output_array(vector <int> &a) {
    int n = a.size();
    for(int i = 0; i < n; i++) {
        //fout << a[i] << ' ';
    }
    return;
}

bool default_comparator(int &a, int &b) {
    return a > b;
}

bool reverse_comparator(int &a, int &b) {
    return a < b;
}

long long sort1(vector <int> a) { // sort_name
    long long _t = clock();

    return clock() - _t;
}

long long sort2(vector <int> a) { // sort_name
    long long _t = clock();

    return clock() - _t;
}

long long sort3(vector <int> a) { // sort_name
    long long _t = clock();

    return clock() - _t;
}

long long sort4(vector <int> a, bool(*comparator)(int &x, int &y) = default_comparator) { // sort_name
    long long _t = clock();

    return clock() - _t;
}

long long sort_t(int t, vector <int> &a) {
    switch (t) {
            case 1: return sort1(a);
            case 2: return sort2(a);
            case 3: return sort3(a);
            case 4: return sort4(a);
    }
    return -1;
}

int main()
{
    return 0;
}
