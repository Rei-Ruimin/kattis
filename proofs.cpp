/* 2020.5.31 */

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_set<string> conclusions;
    for (int i=0; i<n; i++) {
        string oneword;
        cin >> oneword;
        
        while (oneword != "->") {
            // wrong
            if (conclusions.find(oneword) == conclusions.end()) {
                cout << (i+1) << endl;
                return 0;
            }
            cin >> oneword;
        }
        
        cin >> oneword;
        conclusions.insert(oneword);
    }
    
    cout << "correct" << endl;
    return 0;
}
