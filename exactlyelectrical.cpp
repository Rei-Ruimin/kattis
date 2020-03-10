/* 2020.3.9 */

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;
    int s = abs(a-c)+abs(b-d);

    if(t >= s && (t-s)%2 == 0) {
        cout << "Y" << endl;
    }
    else {
        cout << "N" << endl;
    }

    return 0;
}
