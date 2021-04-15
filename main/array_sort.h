#include <vector>
using namespace std;
#ifndef ARRAY_SORT_H_INCLUDED
#define ARRAY_SORT_H_INCLUDED
//#include "array_sort.cpp"
vector <int> input_array();
void output_array(vector <int> &a);
bool default_comparator(int &a, int &b);
bool reverse_comparator(int &a, int &b);
long long sort1(vector <int> a, bool(*comparator)(int &x, int &y));
long long sort2(vector <int> a, bool(*comparator)(int &x, int &y));
long long sort3(vector <int> a, bool(*comparator)(int &x, int &y));
long long sort4(vector <int> a, bool(*comparator)(int &x, int &y));
long long sort_t(int t, vector <int> &a);

#endif // ARRAY_SORT_H_INCLUDED
