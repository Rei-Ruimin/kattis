/* 2020.5.12 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    while (r!=0 || c!=0) {
        string str[c] = {""};
        for (int i=0; i<r; i++) {
            string one_row;
            cin >> one_row;
            for (int j=0; j<c; j++) {
                str[j]+=one_row[j];
            }
        }
        
        
        // sort
        string temp;
        for(int i = 0; i < c-1; ++i) {
            for( int j = i+1; j < c; ++j) {
                // ignore case
                string cmpA = "", cmpB = "";
                for (char &chr : str[i]) {
                    cmpA += tolower(chr);
                }
                for (char &chr : str[j]) {
                    cmpB += tolower(chr);
                }
                if(cmpA > cmpB) {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
        
        // print
        for (int i=0; i<r; i++) {
            string one_row_p = "";
            for (int j=0; j<c; j++) {
                one_row_p += str[j][i];
            }
            cout << one_row_p << endl;
        }
        cout << endl;
        cin >> r >> c;   
    }

    return 0;
}
