/* 20202.2.24 */

#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <bits/stdc++.h> 
using namespace std;

int destX,destY;

bool check_instructs(vector<string> inst) {
    int x=0, y=0, d=0;
    for(vector<string>::iterator iter=inst.begin(); iter!=inst.end(); iter++) {
        if(*iter == "Right") {d = (d+1)%4;}
        else if(*iter == "Left") {d = (d+3)%4;}
        // forward
        else {
            if(d == 0) {y++;}
            else if(d == 1) {x++;}
            else if(d == 2) {y--;}
            else if(d == 3) {x--;}
        }
    }
    // check the destination
    if (destX == x && destY == y) {
        return true;
    }
    else{ return false;}
    
}
int main()
{
    int n;
    cin >> destX >> destY >> n;
    vector<string> instructs;
    for (int i=0; i<n; i++) {
        string str;
        cin >> str;
        instructs.push_back(str);
    }
    vector<string> copy_instruct;
    string three_instruct[3] = {"Forward", "Right", "Left"};
    for (int i=0; i<n; i++) {
        // change the instruction
        for(int j=0; j<3; j++) {
            if(instructs[i]!=three_instruct[j]) {
                copy_instruct = instructs;
                copy_instruct[i] = three_instruct[j];
                // find the correct instruction
                if(check_instructs(copy_instruct)) {
                    cout << i+1 << " " << three_instruct[j] << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
