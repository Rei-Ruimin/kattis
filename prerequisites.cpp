/* 2020.2.6 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k, m;
    cin >> k;
    while(k!=0) {
        cin >> m;
        string chosen_course;
        vector<string> chosen_courses;
        for(int i=0; i<k; i++) {
            cin >> chosen_course;
            chosen_courses.push_back(chosen_course);
        }
        bool meet_require = true; 
        for(int i=0; i<m; i++) {
            int num, num_require;
            cin >> num >> num_require;
            int num_chosen = 0;
            string required_course;
            for(int j=0; j<num; j++) {
                cin >> required_course;
                if(count(chosen_courses.begin(), chosen_courses.end(),
                 required_course) != 0) {
                     num_chosen++;
                 }
            }
            if(num_chosen < num_require) {
                meet_require = false;
            }
        }
        if(meet_require) {cout << "yes" << endl;}
        else {cout << "no" << endl;}
        cin >> k;
    }
    return 0;
}
