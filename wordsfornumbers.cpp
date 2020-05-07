/* 2020.5.7 */

#include <iostream>
#include <sstream>
using namespace std;

string print_ones_digit(char c) {
    string str = "";
    if (c == '1') {str+= "one";}
    else if (c == '2') {str+= "two";}
    else if (c == '3') {str+= "three";}
    else if (c == '4') {str+= "four";}
    else if (c == '5') {str+= "five";}
    else if (c == '6') {str+= "six";}
    else if (c == '7') {str+= "seven";}
    else if (c == '8') {str+= "eight";}
    else if (c == '9') {str+= "nine";}
    else if (c == '0') {str+= "zero";}
    return str;
}

string print_tens_digit(char c) {
    string str = "";
    if (c == '2') {str += "twenty";}
    else if (c == '3') {str += "thirty";}
    else if (c == '4') {str += "forty";}
    else if (c == '5') {str += "fifty";}
    else if (c == '8') {str += "eighty";}
    else {
        str += print_ones_digit(c);
        str += "ty";
    }
    return str;
}
string print_num(string num) {
    string str = "";
    if (num.size() == 2) {
        // 10-19
        if (num == "10") {str += "ten";}
        else if (num == "11") {str += "eleven";}
        else if (num == "12") {str += "twelve";}
        else if (num [0] == '1') {
            if (num[1] == '3') {str += "thir";}
            else if (num[1] == '5') {str += "fif";}
            else if (num[1] == '8') {str += "eigh";}
            else {
                str += print_ones_digit(num[1]);
            }
            str += "teen";
        }
        // 20/30/40/50/60/70/80/90
        else if (num[1] == '0') {str += print_tens_digit(num[0]);}
        // other numbers frpm 10-99
        else {
            str += print_tens_digit(num[0]);
            str += "-";
            str += print_ones_digit(num[1]);
        }
    }
    // 0-9
    else { str += print_ones_digit(num[0]); }
    
    return str;
}

int main()
{
    string oneline;
    while(getline(cin, oneline)) {
        string word, final_str = "";
        istringstream iss(oneline);
        while (iss >> word) {
            // read the number
            if (word[0] >= '0' && word[0] <='9') {
                final_str += print_num(word);
            }
            else {
                final_str += word;
            }
            final_str += " ";
        }
        // first character should be in uppercase
        if(oneline[0] != final_str[0]) {
            final_str[0] -= 32;
        }
        
        cout << final_str << endl;
    }

    return 0;
}
