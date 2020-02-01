#include <iostream>
#include <algorithm> 

using namespace std;

int main()
{
    int N;
    cin >> N;
    int books[N];
    for(int i = 0; i<N; i++) {
        cin >> books[i];
    }
    sort(books, books+N);
    int price = 0;
    int group_num = N/3;
    int remain = N%3;
    for(int k = remain; k < N; k++) {
        if((k-remain)%3 != 0 ) {
            price+= books[k];
            //cout <<price <<endl;
        }
    }
    while(remain>0) {
        price+=books[remain - 1];
        remain--;
    }
    
    cout << price;
    
    return 0;
}
