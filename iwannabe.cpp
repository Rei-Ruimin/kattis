/* 2020.2.3 */

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

struct pok {
    unsigned long A;
    unsigned long D;
    unsigned long H;
    int index;
};

bool A_compare(pok lhs, pok rhs) {return lhs.A > rhs.A; }
bool D_compare(pok lhs, pok rhs) {return lhs.D > rhs.D; }
bool H_compare(pok lhs, pok rhs) {return lhs.H > rhs.H; }

int main()
{
    int N,K;
    cin >> N >>K;
    pok pok_arr[N];
    for(int i = 0; i<N; i++) {
        cin >> pok_arr[i].A >>pok_arr[i].D >> pok_arr[i].H;
        pok_arr[i].index = i;
    }
    vector<int> outp;
    sort(pok_arr, pok_arr+N, A_compare);
    for(int i = 0; i<K; i++) {
        outp.push_back(pok_arr[i].index);
    }
    sort(pok_arr, pok_arr+N, D_compare);
    for(int i = 0; i<K; i++) {
        outp.push_back(pok_arr[i].index);
    }
    sort(pok_arr, pok_arr+N, H_compare);
    for(int i = 0; i<K; i++) {
        outp.push_back(pok_arr[i].index);
    }
    
    cout << set<int>(outp.begin(),outp.end()).size();
    
    return 0;
}
