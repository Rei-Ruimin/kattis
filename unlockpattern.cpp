/* 2019.12.3 */

#include <iostream>
#include <cmath>
#include<bits/stdc++.h> 

using namespace std;

int main()
{
    int arr[3][3];
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int current_num = 1;
    int current_i,current_j,next_i,next_j;
    double distance = 0;
    int k = 0;
    while(current_num < 9) {
        for(int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if(current_num == arr[i][j]){
                    current_i = i;
                    current_j = j;
                }
                if(current_num + 1 == arr[i][j]){
                    next_i = i;
                    next_j = j;
                }
            }
        }
        distance += sqrt( pow((current_i-next_i),2) + pow((current_j-next_j),2) );
        current_num++;
    }
    cout << fixed << setprecision(8) << distance <<endl; 
    return 0;
}
