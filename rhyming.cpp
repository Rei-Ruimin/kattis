/* 2020.5.13 */

#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <sstream>
using namespace std;

bool has_ending(string const &str, string const &r) {
    if (str.length() < r.length()) {
        return false;
    }
    else {
        return (0 == str.compare(str.length() - r.length(), r.length(), r));
    }
}

int main()
{
    string str0;
    cin >> str0;
    int E, P;
    
    cin >> E;
    set<string> same_rhymes;
    // trash msg
    string oneline;
    getline(cin, oneline);
    
    for (int i=0; i<E; i++) {
        string oneline;
        getline(cin,oneline);
        stringstream ss(oneline);
        
        string one_ending;
        set<string> one_list_of_rhymes;
        bool same_ending_with_str0 = false;
        while (ss >> one_ending) {
            if (!same_ending_with_str0 && has_ending(str0,one_ending)) {
                same_ending_with_str0 = true;
            }
            one_list_of_rhymes.insert(one_ending);
        }
        
        // same rhymes with str0
        if (same_ending_with_str0) {
            same_rhymes.insert(one_list_of_rhymes.begin(), one_list_of_rhymes.end());
        }
    }
    
    cin >> P;
    // trash msg
    getline(cin, oneline);
    for (int i=0; i<P; i++) {
        getline(cin, oneline);
        bool flag = false;
        for (auto rhy : same_rhymes) {
            if (has_ending (oneline, rhy)) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
