/* 2020.5.9 */

#include <iostream>
#include <math.h>

#define PI 3.14159265
using namespace std;

int main()
{
    double H, v;
    cin >> H >> v;
    if (0<=v && v<=180) {
        cout << "safe" << endl;
    }
    else if (v == 270) {
        cout << H << endl;
    }
    else if (v < 270) {
        int seconds = H/sin((v-180)*PI/180);
        cout << seconds << endl;
    }
    else {
        int seconds = H/sin((360-v)*PI/180);
        cout << seconds << endl;
    }
    return 0;
}
