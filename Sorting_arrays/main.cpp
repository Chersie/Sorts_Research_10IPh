#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>

using namespace std;

ifstream fin("array_origin.txt");
ofstream fout("array_sorted.txt");

vector <int> input_array() {
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
        fout << a[i] << ' ';
    }
    return;
}

void sort1(vector <int> &a) { // sort_name

}

void sort2(vector <int> &a) { // sort_name

}

void sort3(vector <int> &a) { // sort_name

}

void sort4(vector <int> &a) { // sort_name

}

bool reverse_comparator(int &a, int &b) {
    return a < b;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector <int> a = input_array();
    //
    int sort_type = 0;
    cout << "Input type of sort:\n";
    cout << "1 () \t"; // sort_name
    cout << "2 () \t"; // sort_name
    cout << "3 () \t"; // sort_name
    cout << "4 () \n"; // sort_name
    int t;
    cin >> t;
    switch (t) {
        case 1: sort1(a); break;
        case 2: sort2(a); break;
        case 3: sort3(a); break;
        case 4: sort4(a); break;
    }
    //
    output_array(a);
    return 0;
}
