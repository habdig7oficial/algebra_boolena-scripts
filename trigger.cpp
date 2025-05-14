#include "iostream"
#include "math.h"

using namespace std;

int main(){
    for(int i = 0, j = 0; i < pow(2,8); i++, j++){
        if(j % 10 == 0 && i != 0){
            i += 6;
        }

        cout << hex << i << " : " << dec << j << endl;
    }
}