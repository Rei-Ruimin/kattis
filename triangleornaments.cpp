/* 2020.2.4 */

#include <iostream>
#include <math.h>     
#include <stdio.h>  
using namespace std;

int main()
{
    int n;
    double a, b ,c;
    double d, k;
    cin >> n;
    double L = 0;
    for(int i=0; i<n; i++) {
        cin >> a >> b>> c;
        d = sqrt(a*a/2 - c*c/4 + b*b/2);
        k = (a*a + d*d - c*c/4)/(2*a*d);
        L += 2*a*sqrt(1-k*k);
    }
    
    cout << printf ("%.4f", L);

    return 0;
}
