#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

vector <int> input_array(string file) {
    ifstream fin(file);
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

long long sort1(vector <int> &a, bool(*comparator)(int &x, int &y) = default_comparator) { // sort_name
    long long _t = clock();
    int n = a.size();
    for(int j = 0; j < n - 1; j++) {
        int mn = j;
        for(int i = j + 1; i < n; i++) {
            if (!comparator(a[i], a[mn])) {
                mn = i;
            }
        }
        swap(a[j], a[mn]);
    }
    return clock() - _t;
}

long long sort2(vector <int> &a, bool(*comparator)(int &x, int &y) = default_comparator) { // sort_name
    long long _t = clock();
    int n = a.size();
    for (int k=0; k<n-1; k++)
        for (int i=0; i<n-k; i++)
            if (comparator(a[i], a[i+1]))
            {
                int b=a[i];
                a[i]=a[i+1];
                a[i+1]=b;
            }

    return clock() - _t;
}

long long sort3(vector <int> &a, bool(*comparator)(int &x, int &y) = default_comparator) { // sort_name
    long long _t = clock();
    int n = a.size();
      for (int i = 0; i < n; i++)
      {
          int k = i;
          while ((k > 0)  && (!comparator(a[k], a[k - 1])))
          {
              swap (a[k], a[k-1]);
              k--;
          }
      }
    return clock() - _t;
}

void qs(vector <int> &a, int l, int r, bool(*comparator)(int &x, int &y) = default_comparator) {
    int x = a[(l + r) / 2];
    int i = l;
    int j = r;
    while(i <= j) {
        while(comparator(x, a[i])) i++;
        while(comparator(a[j], x)) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (i < r) qs(a, i, r, comparator);
    if (l < j) qs(a, l, j, comparator);
    return;
}

long long sort4(vector <int> &a, bool(*comparator)(int &x, int &y) = default_comparator) { // sort_name
    long long _t = clock();
    qs(a, 0, a.size() - 1, comparator);
    return clock() - _t;
}

long long sort5(vector <int> &a, bool(*comparator)(int &x, int &y) = default_comparator) {
    long long _t = clock();
    sort(a.begin(), a.end(), comparator);
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

