/* 2020.5.3 */

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int distances[N];
    for (int i=0; i<N; i++) {
        cin >> distances[i];
    }
    
    int min_alone_dis = distances[0]+distances[2];
    for (int i=1; i<N; i++) {
        int alone_dis = distances[i]+distances[(i+2)%N];
        if (alone_dis < min_alone_dis) {
            min_alone_dis = alone_dis;
        }
    }
    
    cout << min_alone_dis << endl;
    return 0;
}
