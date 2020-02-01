/* 2020.1.13 */

#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>       /* cos */
using namespace std;
#define PI 3.14159265358979
int main()
{
    int times = 0;
    cin >> times;
    for(int i = 0; i < times; i++) {
        int n;
        cin >> n;
        double x = 0, y = 0;
        double a0 = 0,d = 0;
        double a = 90;
        for(int j = 0; j < n; j++) {
            cin >> a0 >> d;
            a = a+a0;
            x += cos ( a * PI / 180.0 )*d;
            y += sin ( a * PI / 180.0 )*d;
        }
        printf("%.8f %.8f\n",x,y);
    }

    return 0;
}
