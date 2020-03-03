/* 2020.3.3 */

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
string lastword(string oneline) {
    string word = "";
    for (char &c: oneline) {
        if(c == ' ') {
            word = "";
        }
        else{
            word += c;
        }
    }
    return word;
}
int main()
{   
    int n;
    int listcount = 1;
    cin >> n;
    cin.ignore(256, '\n'); 
    map<string, int> animals;
    vector<string> v_names;
    while(n!=0) {
        animals.clear();
        v_names.clear();
        string oneline,name;
        for(int i=0; i<n; i++) {
            getline(cin, oneline);
            name = lastword(oneline);
            // lowercase
            transform(name.begin(), name.end(), name.begin(), ::tolower); 
            auto pos = find(v_names.begin(), v_names.end(), name);
            if(pos == v_names.end()) {
                animals[name] = 1;
                v_names.push_back(name);
            }
            else{
                animals[name]++;
            }
        }
        sort(v_names.begin(), v_names.end());
        cout << "List " << listcount << ":" << endl;
        for(int j=0; j<v_names.size(); j++) {
            cout << v_names[j] << " | " << animals[v_names[j]] << endl;
        }
        listcount++;
        cin >> n;
        cin.ignore(256, '\n'); 
    }

    return 0;
}
