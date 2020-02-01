#include <stdio.h>      /* printf */
#include <math.h>       /* log2 */
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    if(log2(n) == ceil(log2(n))) {
        cout << (int)log2(n) + 1;
    }
    else{
        cout << (int)ceil(log2(n))+1;
    }
}
