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
    for(int i = 0; i < 10; i++) {
        cout << i << ": ";
        generate_array(20000, -10000, 10000, i);
        cout << "1 ";
        generate_array(20000, -100, 100, i);
        cout << "2 ";
        generate_array(40000, -10000, 10000, i);
        cout << "3 ";
        generate_array(40000, -100, 100, i);
        cout << "4 \n";
    }
    generate_array(20000, -10000, 10000, 10);
    generate_array(20000, -100, 100, 10);
    generate_array(40000, -10000, 10000, 10);
    generate_array(40000, -100, 100, 10);
    int temp;
    cin >> temp;
    return 0;
}
