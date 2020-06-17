/* 2020-6-16 */

#include <iostream>
using namespace std;

int main()
{
    int coeff[6][6] = { {1,1,1,1,1,1},
                        {0,2,6,14,30,62},
                        {0,0,6,36,150,540},
                        {0,0,0,24,240,1560},
                        {0,0,0,0,120,1800},
                        {0,0,0,0,0,720} };
    
    int n;
    cin >> n;
    int a_n[n];
    for (int i=1; i<=n; i++) {
        cin >> a_n[n-i];
    }
    
    // C0
    int C0;
    cin >> C0;
    cout << C0 << " ";
    // C1-Cn
    for (int i=0; i<n; i++) {
        int C=0;
        for (int j=0; j<n; j++) {
            C += a_n[j]*coeff[i][j];
        }
        cout << C << " ";
    }
    
    return 0;
}
