/* 2020.3.12 */

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string oneline;
    getline(cin,oneline);
    for (int i=0; i<N ; i++) {
        getline(cin,oneline);
        stack<char> bag;
        int flag = true;
        for (auto &chr: oneline) {
            // if(chr != '$'&&chr != '*'&&chr != '|'&& chr!='.')
            // {cout << bag.top() << " ";}
            if(chr == '$'||chr == '*'||chr == '|') {
                bag.push(chr);}
            else if (bag.size() == 0 && chr != '.') {
                flag = false;
                break;
            }
            else if(chr == 't') {
                if(bag.top()!='|') {
                    flag = false;
                    break;
                }
                else { bag.pop(); }
            }
           else if(chr == 'b') {
                if(bag.top()!='$') {
                    flag = false;
                    break;
                }
                else { bag.pop(); }
            }
            else if(chr == 'j') {
                if(bag.top()!='*') {
                    flag = false;
                    break;
                }
                else { bag.pop(); }
            }
        }
        if (bag.size()==0 && flag) {
                cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }

    }

    return 0;
}
