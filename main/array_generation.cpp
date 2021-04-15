#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;


vector <int> generate_array(int n, int l, int r) {
    srand(time(NULL));
    vector <int> _array(n);
    for(int i = 0; i < n; i++) {
        _array[i] = rand() % (r - l + 1) + l;
    }
    return _array;
}

