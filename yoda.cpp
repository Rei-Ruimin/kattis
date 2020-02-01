/* 2020.1.27 */

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    char num1[10];
    char num2[10];
    cin >> num1 >> num2;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int small_len = len1;
    vector<char> op1;
    vector<char> op2;
    if(num1 > num2) {
        small_len = len2;
        for(int k = 0; k< len1 - len2; k++){
            op1.push_back(num1[k]);
        }
    }
    else if(num1 < num2) {
        for(int k = 0; k< len2 - len1; k++){
            op2.push_back(num2[k]);
        }
    }
    int j = len2 - small_len;
    int i = len1 - small_len;
    while(i < len1) {
        if(num1[i] > num2[j]) {
            op1.push_back(num1[i]);
        }
        else if(num1[i] < num2[j]) {
            op2.push_back(num2[j]);
        }
        else{ 
            op1.push_back(num1[i]);
            op2.push_back(num2[j]);
        }
        j++;
        i++;
    }
    if(op1.size() == 0) {cout << "YODA";}
    else if(op1[0] == '0') {cout << 0;}
    else { 
        for(int k = 0; k< op1.size(); k++) {
        cout << op1[k];
    }
    }
    cout << endl;
    if(op2.size() == 0) {cout << "YODA";}
    else if(op2[0] == '0') {cout << 0;}
    else { 
        for(int k = 0; k< op2.size(); k++) {
        cout << op2[k];
    }
    }

    return 0;
}
