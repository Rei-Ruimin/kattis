/* 2020.5.5 */

#include <iostream>

using namespace std;

int main()
{
    int N, P, Q;
    cin >> N >> P >> Q;
    if (((P+Q)/N)%2 == 1) {
        cout << "opponent" << endl;
    }
    else {
        cout << "paul" << endl;
    }
}
