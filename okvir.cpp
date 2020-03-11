/* 2020.3.10 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m, n, u, l, r, d;
    cin>>m>>n>>u>>l>>r>>d;
    int x, y;
    x = l+r+n;
    y = u+d+m;
    string arr[m];
    
    for(int i=0; i<m; i++) {
        cin >> arr[i];
    }
    
    for(int j=0; j<y; j++) {
        for (int i=0; i<x; i++) {
            if ( j>=u && j < u+m ) {
                if (i == l) {
                    cout << arr[j-u];
                }
                else if (i < l || i >= l+n){
                    if((i+j)%2 == 0) { cout << "#"; }
                    else { cout << "."; }
                }
            }
            else {
                if((i+j)%2 == 0) { cout << "#"; }
                    else { cout << "."; }
            }
        }
        cout << endl;
    }
    return 0;
}
