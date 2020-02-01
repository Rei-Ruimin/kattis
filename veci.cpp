#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare_digit(int n, int m){
    string str1 = to_string(n);
    string str2 = to_string(m);
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1.compare(str2);
}

int main(){
    int n;
    cin>> n;
    int m = n+1;
    while(true){
        if(to_string(m).length()==to_string(n).length()){
            if(!compare_digit(m, n)){
                cout << m;
                break;
            }
            m++;
        }
        else{
            cout << 0;
            break;
        }
    }
}
