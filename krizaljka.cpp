/* 2020.3.4 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    int la = A.size();
    int lb = B.size();
    int pa, pb;
    for (int i=0; i<la; i++) {
        size_t founda = B.find(A[i]);
        if(founda != string::npos) {
            pa = i;
            pb = founda;
            break;
        }
    }
    // print
    for (int i=0; i<lb; i++) {
        for (int j=0; j<la; j++) {
            if (j == pa) {
                cout<<B[i];
            }
            else if (i == pb) {
                cout << A[j];
            }
            else {cout << "."; }
        }
        cout << endl;
    }
    return 0;
}
