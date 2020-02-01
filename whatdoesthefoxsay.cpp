/* 2020.1.22 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int times;
    cin>> times;
    for(int i = 0; i < times; i++) {
        vector<string> totsounds;
        string input;
        while(input!="goes"){
            cin >> input;
            totsounds.push_back(input);
        }
        totsounds.pop_back();
        totsounds.pop_back();
        
        vector<string> sounds;
        string trash_msg;
        cin>> input;
        sounds.push_back(input);
        while(input!="the"){
            cin>> trash_msg>> trash_msg>>input;
            sounds.push_back(input);
        }
        
        for(int k = 0; k < totsounds.size(); k++) {
            string to_find = totsounds[k];
            if(find(sounds.begin(), sounds.end(), to_find) == sounds.end()) {
                cout << to_find <<" ";
            }
        }
        totsounds.clear();
        sounds.clear();
        cin>> trash_msg >>trash_msg;
        cout << endl;
        
    }
    return 0;
}
