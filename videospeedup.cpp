/* 2020.3.18 */


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, k, p;
    cin >> n >> p >> k;
    int times[n+2] = {0};
    for (int i=1; i<=n; i++) {
        cin >> times[i];
    }
    times[n+1] = k;
    
    double x = 0, speed = 1.0 + (double)n*(double)p/100.0;
    for (int j=n+1; j>=1; j--) {
        x += (times[j] - times[j-1])*speed;
        speed -= (double)p/100.0;
    }
    cout << setprecision(6) << fixed << x;
    return 0;
}
