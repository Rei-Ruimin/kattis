/* 2020.4.26 */

#include <iostream>

using namespace std;

int main()
{
    string stones;
    cin >> stones;
    int w=0, b=0;
    for (char c: stones) {
        if (c == 'W') {
            w++;
        }
        else { 
            b++; 
        }
    }
    if (w == b) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}
