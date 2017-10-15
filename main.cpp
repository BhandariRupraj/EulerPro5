#include <iostream>


using namespace std;
int main() {
    int i = 1;
    int check = 0;
    while(1) {
        ++i;
        check = 0;
        int test = 0;
        for(unsigned int j = 1; j < 21; ++j) {
            if(i % j == 0)
                ++check;
        }

        if(check == 20)
            break;

    }

    cout << i << endl;

    return 0;

}