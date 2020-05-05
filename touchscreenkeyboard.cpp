/* 2020.5.4 */

#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

unordered_map<char, pair<int, int>> char_map;

// return the distances between two characters
int char_distance(char a, char b) {
    if (a == b) return 0;
    int d = abs(char_map[a].first - char_map[b].first) +
            abs(char_map[a].second - char_map[b].second);
    return d;
}

// comparision function for sorting the set by their distances ascending then alphabetically
bool cmp(const pair<int, string> &a, const pair<int, string> &b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}
int main()
{
    // find the positions of all characters
    string chars[3];
    chars[0] = "qwertyuiop";
    chars[1] = "asdfghjkl";
    chars[2] = "zxcvbnm";
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<chars[i].size(); j++) {
            char_map[chars[i][j]] = make_pair(i,j);
        }
    }
    
    // handle each case
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        string str0;
        int n;
        cin >> str0 >> n;
        int l = str0.size();
        // to store the distances of every input in this case
        vector<pair<int, string>> distances;
        for (int j=0; j<n; j++) {
            string str;
            int d=0;
            cin >> str;
            // find the distances of current input
            for (int k=0; k<l; k++) {
                d += char_distance(str0[k],str[k]);
            }
            // store the distances of current input
            distances.push_back(make_pair(d, str));
        }
        
        // sort the input first by their distances ascending then alphabetically
        sort(distances.begin(), distances.end(), cmp);
        for (int j=0; j<n; j++) {
            cout << distances[j].second << " " << distances[j].first << endl;
        }
    }
}
