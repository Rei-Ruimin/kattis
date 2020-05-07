/* 202.5.6 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int C;
    cin >> C;
    for (int i=0; i<C; i++) {
        int N;
        cin >> N;
        int grades[N];
        double avg=0;
        for (int j=0; j<N; j++) {
            cin >> grades[j];
            avg+=grades[j];
        }
        avg = avg/(double)N;
        double percent=0;
        for (int j=0; j<N; j++) {
            if (grades[j] > avg) {
                percent++;
            }
        }
        percent = percent/(double)N*100;
        cout << fixed << setprecision(3) << percent << "%" << endl;
    }

    return 0;
}
