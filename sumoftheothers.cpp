/* 2020.1.29 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    while(getline(cin, s )) {
       istringstream iss(s);
       int num;
       int sum = 0;
       while(iss >> num) {
           sum+=num;
       }
       cout<< sum/2 << endl;
    }
}
