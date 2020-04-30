/* 2020.4.29 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string num;
    for (int i=0; i<n; i++) {
        cin >> num;
        for (int j=num.length()-1; j>=0; j--) {
            if (num[j] == '1' && j == 0) {
                num = "0";
            }
            else if (num[j] != '0') {
                num[j]--;
                break;
            }
        }
        cout << num << endl;
    }
    
    return 0;
}
