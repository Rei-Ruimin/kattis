#include <iostream>

using namespace std;

int main() {
    int current_i;
    int num;
    int tot_t,t;
    char Q;
    bool flag = true;
    tot_t = 0;
    cin >> current_i >> num;
    while(flag) {
        cin >> t >> Q;
        tot_t+=t;
        if (tot_t>= 210) {
            break;
        }
        if(Q == 'T') {
            //
            current_i = (current_i+1)%8;
            if(current_i == 0){
                current_i = 8;
            }
        }
    }
    cout << current_i;

    return 0;
}
