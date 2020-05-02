/* 2020.5.2 */

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    if ((N*(N-1)/2)%2 == 0) {
        if (N%2 == 0) {
            cout << "Even";
        }
        else {
            cout << "Either";
        }
    }
    else {
        if (N%2 == 0) {
            cout << "Odd";
        }
        else {
            cout << "Either";
        }
    }
    cout << endl;

    return 0;
}
