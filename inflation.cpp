/* 2020.5.2 */

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> gases;
    int gas;
    for (int i=0; i<n; i++) {
        cin >> gas;
        gases.push_back(gas);
    }
    
    sort(gases.begin(),gases.end());
    
    double f = 1;
    for (int i=0; i<n; i++) {
        double f0 = (double)gases[i]/(double)(i+1);
        if (f0 > 1) {
            cout << "impossible" << endl;
            return 0;
        }
        else if (f0 < f) {
            f = f0;
        }
    }
    cout << setprecision(6) << f << endl;
    return 0;
}
