/* 2020.3.5 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, P;
    cin >> S >> P;
    // equal
    if (S.size()-P.size()!=0 && S.size()-P.size()!=1) {
        cout << "No" << endl;
        return 0;
    }
    if (S.compare(P) == 0) {
        cout << "Yes" << endl;
        return 0;
    }
    string first_n_1 = S.substr(0, S.size()-1);
    string last_n_1 = S.substr(1, S.size());
    if (first_n_1.compare(P) == 0 &&
        S.back() <= 57 && S.back() >=48) {
        cout << "Yes" << endl;
        return 0;
    }
    if (last_n_1.compare(P) == 0 &&
        S[0] <= 57 && S[0] >= 48) {
        cout << "Yes" << endl;
        return 0;
    }
    if (first_n_1.compare(P) == 0 &&
        S.back() <= 39 && S.back() >=30) {
        cout << "Yes" << endl;
        return 0;
    }
    if(S.size() == P.size()) {
        bool reversecase = true;
        for(int i=0; i<S.size(); i++) {
            if( 97<=S[i] && S[i] <= 122) {
                if(P[i] != S[i] - 32) {
                    reversecase = false;
                } 
            }
            else if( 65<=S[i] && S[i] <= 90) {
                if(P[i] != S[i] + 32) {
                    reversecase = false;
                } 
            }
            else {
                if(P[i]!=S[i]) {reversecase = false;}
            }
        }
        if (reversecase) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
