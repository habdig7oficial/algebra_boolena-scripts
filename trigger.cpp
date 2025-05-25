#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int i, j, limit;

    limit = 2 << 7;

    for (i = 0; i < limit; i++)
    {
      cout << dec << i << " : " << hex << i << endl;
    }
}