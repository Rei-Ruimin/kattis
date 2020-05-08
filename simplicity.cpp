/* 2020.5.8*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool freq_cmp (const pair<char, int> &a, const pair<char, int> &b) {
    if (b.second > a.second) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    string str;
    cin >> str;
    unordered_map<char, int> char_map;
    int char_types = 0;
    for (char &c : str) {
        if (char_map.find(c) == char_map.end()) {
            char_map[c] = 1;
            char_types++;
        }
        else {
            char_map[c]++;
        }
    }
    
    // already with simplicity of 1 or 2
    if (char_types <= 2) {
        cout << 0 << endl;
        return 0;
    }
    
    vector<pair<char, int>> char_vec;
    for (auto i = char_map.begin(); i != char_map.end(); i++) {
        char_vec.push_back(make_pair(i->first, i->second));
    }
    
    sort(char_vec.begin(), char_vec.end(), freq_cmp);
    
    int del_char = 0;
    for (int i=0; i<char_types-2; i++) {
        del_char += char_vec[i].second;
    }
    cout << del_char << endl;
    return 0;
}
