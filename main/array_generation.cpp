#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;


void generate_array(int n, int l, int r, string name)
{
    ofstream fout(name + '_' + to_string(n) + '_' + to_string(l) + '_' + to_string(r) + ".txt");
    srand(time(NULL));
    vector <int> _array(n);
    fout << n << '\n';
    for(int i = 0; i < n; i++) {
        _array[i] = rand() % (r - l + 1) + l;
        fout << _array[i] << ' ';
    }
    return;
}

