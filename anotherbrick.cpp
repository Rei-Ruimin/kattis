#include <iostream>

using namespace std;

int main()
{
    int h, w, n;
    cin>>h>>w>>n;
    int bricks[n];
    for(int i = 0; i <n; i++){
        cin >> bricks[i];
    }
    bool flag = true;
    int b_index = 0, rowsum = 0;
    for(int i = 0; i<h; i++){
        rowsum = 0;
        while(rowsum + bricks[b_index] < w && b_index<n) {
            rowsum += bricks[b_index];
            b_index++;
        }
        if(rowsum+bricks[b_index] == w) {
            b_index++;
            continue;
            
        }
        else{
            flag =false;
            break;
        }
    }
    if(flag){cout<<"YES";}
    else{cout << "NO";}
    return 0;
}
