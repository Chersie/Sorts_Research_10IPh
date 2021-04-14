#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;


ofstream fout("array_generated.txt");

vector <int> generate_array(int n, int l, int r) {
    srand(time(NULL));
    vector <int> _array(n);
    for(int i = 0; i < n; i++) {
        _array[i] = rand() % (r - l + 1) + l;
    }
    return _array;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, l, r;
    cout << "¬ведите размер массива и ограничени€ дл€ чисел\n";
    cin >> n >> l >> r;
    vector <int> a = generate_array(n, l, r);
    fout << n << '\n';
    for(int i = 0; i < n; i++) {
        fout << a[i] << ' ';
    }
    return 0;
}
