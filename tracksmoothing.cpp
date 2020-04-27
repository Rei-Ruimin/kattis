/* 2020.4.26 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int num_test;
    cin >> num_test;
    for (int i=0; i<num_test; i++) {
        double r;
        int num_point;
        cin >> r >> num_point;
        // calculate the length
        double x0, y0, x1, y1, x2, y2, length=0;
        cin >> x0 >> y0;
        x1 = x0;
        y1 = y0;
        for (int j=1; j<num_point; j++) {
            cin >> x2 >> y2;
            length += sqrt(pow(x2-x1,2)+pow(y2-y1,2));
            x1 = x2;
            y1 = y2;
        }
        // last point
        length += sqrt(pow(x2-x0,2)+pow(y2-y0,2));
        double factor = 1 - 2*M_PI*r/length;
        if (factor < 0) {
            cout << "Not possible" << endl;
        }
        else {
            cout << setprecision(6) << factor << endl;
        }
        
    }

    return 0;
}
