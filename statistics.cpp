/* 2020.5.12 */

#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0;
    while(cin >> n) {
        counter++;
        int max = -1000000, min = 1000000, temp;
        for (int i=0; i<n; i++) {
            cin >> temp;
            if (temp > max) {max = temp;}
            if (temp < min) {min = temp;}
        }
        cout << "Case " << counter << ": " <<
        min << " " << max << " " << max-min << endl;
    }

    return 0;
}
