/* 2020.4.30 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int C, P;
    cin >> C >> P;
    int differences[C-1],col1,col2;
    cin >> col1;
    for (int i=0; i<C-1; i++) {
        cin >> col2;
        differences[i] = col1-col2;
        col1 = col2;
    }
    
    // two continuous cols
    int p_10=0, p_01=0, p_00=0, p_20=0, p_02=0;
    for (int i=0; i<C-1; i++) {
        if (differences[i] == 1) {p_10++;}
        else if (differences[i] == -1) {p_01++;}
        else if (differences[i] == 0) {p_00++;}
        else if (differences[i] == 2) {p_20++;}
        else if (differences[i] == -2) {p_02++;}
    }
    
    // three continuous cols
    int p_001=0, p_100=0, p_101=0, p_011=0, p_110=0,
        p_000=0;
    for (int i=0; i<C-2; i++) {
        if (differences[i] == 0) {
            if (differences[i+1] == -1) {p_001++;}
            else if (differences[i+1] == 1) {p_110++;}
            else if (differences[i+1] == 0) {p_000++;}
        }
        else if (differences[i] == 1) {
            if (differences[i+1] == 0) {p_100++;}
            else if (differences[i+1] == -1) {p_101++;}
        }
        else if (differences[i] == -1 && differences[i+1] == 0) {
            p_011++;
        }
    }
    
    // four continuous cols
    int p_0000=0;
    for (int i=0; i<C-3; i++) {
        if (differences[i] == 0 && differences[i+1] == 0 &&
            differences[i+2] == 0) {
                p_0000++;
            }
    }
    
    // check the number of piece
    int ways = 0;
    if (P == 1) {ways = C+p_0000;}
    else if (P == 2) {ways = p_00;}
    else if (P == 3) {ways = p_10+p_001;}
    else if (P == 4) {ways = p_01+p_100;}
    else if (P == 5) {ways = p_10+p_01+p_000+p_101;}
    else if (P == 6) {ways = p_000+p_00+p_011+p_20;}
    else if (P == 7) {ways = p_000+p_00+p_110+p_02;}
    
    cout << ways << endl;
    return 0;
}
