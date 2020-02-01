/* 2020.1.12 */

#include <iostream>

using namespace std;

void check(int n, int A, int B, int C, int D) {
    int count = 0;
    if (0 < n%(A+B)&&n%(A+B)<=A) {
        count++;
    }
    if (0< n%(C+D) && n%(C+D) <= C) {
        count++;
    }
    if(count == 0) {
        cout << "none" << endl;
    }
    else if(count == 1){
        cout << "one" << endl;
    }
    else {
        cout << "both" << endl;
    }
    
}
int main()
{
    int A,B,C,D,X,Y,Z;
    cin >> A >> B>>C>>D>>X>>Y>>Z;
    check(X,A,B,C,D);
    check(Y,A,B,C,D);
    check(Z,A,B,C,D);

    return 0;
}
