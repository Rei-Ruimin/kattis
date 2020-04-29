/* 2020.4.28 */

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int read_num(string str) {
    int num;
    if (str == "**** ** ** ****") {num = 0;}
    else if (str == "  *  *  *  *  *") {num = 1;}
    else if (str == "***  *****  ***") {num = 2;}
    else if (str == "***  ****  ****") {num = 3;}
    else if (str == "* ** ****  *  *") {num = 4;}
    else if (str == "****  ***  ****") {num = 5;}
    else if (str == "****  **** ****") {num = 6;}
    else if (str == "***  *  *  *  *") {num = 7;}
    else if (str == "**** ***** ****") {num = 8;}
    else if (str == "**** ****  ****") {num = 9;}
    else {num = -1;}
    return num;
}

int main()
{
    string digits[8] = {""};
    string oneline;
    
    // first line
    getline(cin, oneline);
    int digit_num = (oneline.length()+1)/4;
    for (int i=0; i<digit_num; i++) {
        digits[i] += oneline.substr(i*4,3);
    }
    
    // last 4 lines
    for (int j=1; j<5; j++) {
        getline(cin, oneline);
        for (int i=0; i<digit_num; i++) {
            digits[i] += oneline.substr(i*4,3);
        }
    }
    
    // read each digit
    int num = 0;
    for (int i=0; i<digit_num; i++) {
        int one_digit = read_num(digits[i]);
        if (one_digit == -1) {
            cout << "BOOM!!" << endl;
            return 0;
        }
        else if (one_digit != 0) {
            num += one_digit*pow(10,digit_num-i-1);
        }
    }
    
    // check the result
    if (num%6==0) {
        cout << "BEER!!" << endl;
    }
    else {
        cout << "BOOM!!" << endl;
    }
    return 0;
}
