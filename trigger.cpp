#include "iostream"

#include "cmath"

using namespace std;

int main() {

  int limit = pow(2, 8);
  for (int i = 0, j = 0; j < limit; ++i, ++j) {

    for(int k = 1, l = 0; k < limit; k = k << 0x4, l++){
        if (((j % (0xa << (l * 0x4)) == 0))  && i != 0) {

            i += (0x6 << (l * 0x4));


        }
        //cout << endl << "k: " << l << endl;
    }


    cout << hex << i << " : " << j << endl;
  }

  // cout << 0x160 - 0x99 << endl;
}