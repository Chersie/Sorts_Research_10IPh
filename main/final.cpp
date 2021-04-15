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
    ofstream fout("generated_arrays2.txt");
    for(int i = 0; i < 10; i++) {
        generate_array(200000, -100, 100, to_string(i) + "_200000_-100_100");
        fout << to_string(i) + "_200000_-100_100\n";
        generate_array(200000, -10000, 10000, to_string(i) + "_200000_-10000_10000");
        fout << to_string(i) + "_200000_-10000_10000\n";
        generate_array(400000, -100, 100, to_string(i) + "_400000_-100_100");
        fout << to_string(i) + "_400000_-100_100\n";
        generate_array(400000, -10000, 10000, to_string(i) + "_400000_-10000_10000");
        fout << to_string(i) + "_400000_-10000_10000\n";
    }

    return 0;
}
