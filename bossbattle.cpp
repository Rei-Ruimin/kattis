#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while(true){
        if(n-3-i <= 0){
            cout<< i+1;
            break;
        }
        i++;
    }
    return 0;
}
