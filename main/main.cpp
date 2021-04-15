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

int main() {
    vector <vector <int> > results(2, vector <int>(40));

    ifstream fin1("generated_arrays2.txt");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 4; j++) {
            string f;
            fin1 >> f;
            vector <int> a = input_array(f + ".txt");
            cout << a.size() << ' ';
            int t = sort4(a);
            results[0][10 * j + i] = t;
        }
    }
    fin1.close();
    ofstream fout1("sort4.txt");
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            fout1 << results[0][i * 10 + j] << ' ';
        }
        fout1 << '\n';
    }
    ifstream fin2("generated_arrays2.txt");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 4; j++) {
            string f;
            fin2 >> f;
            vector <int> a = input_array(f + ".txt");
            cout << a.size() << ' ';
            int t = sort5(a);
            results[1][10 * j + i] = t;
        }
    }
    fin2.close();
    ofstream fout2("sort5.txt");
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            fout2<< results[1][i * 10 + j] << ' ';
        }
        fout2 << '\n';
    }

    return 0;
}
