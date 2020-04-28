/* 2020.4.27 */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int P, T;
    cin >> P >> T;
    int count = 0;
    for (int i=0; i<P; i++) {
        bool all_tests_pass = true;
        for (int j=0; j<T; j++) {
            string str;
            cin >> str;
            // we don't care about the first character
            int k=1;
            while (str[k] && all_tests_pass){
                if (isupper(str[k])) {
                    all_tests_pass = false;
                    break;
                }
                k++;
            }
        }
        if (all_tests_pass) {
            count++;
        }
    }
    
    cout << count;

    return 0;
}
