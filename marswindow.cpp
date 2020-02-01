/* 2020.1.30*/

#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    if(year == 2018) {cout << "yes";return 0;}
    int start_m = (year - 2018 -1)*12 + 8;
    bool mars_year = false;
    for(int i=1; i <=12; i++) {
        if((start_m+i)%26 == 0) {
            mars_year = true;
            break;
        }
    }
    if(mars_year) {cout <<"yes";}
    else {cout << "no";}

    return 0;
}
