#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int i, j, limit;

    limit = pow(2,8);

    for (i = 0; i < limit; i++)
    {
      cout << dec << i << " : " << hex << i << endl;
    }
    for (i = limit; i < limit * 2; i++)
    {
      cout << dec << i << " : " << limit - 1 << endl;
    }
}