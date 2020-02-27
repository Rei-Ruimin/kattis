/* 2020.2.26 */

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


char board[9][9] = {'.'};

bool check_knight(int row, int col) {
    return ( board[row-2][col-1] == 'k' || board[row-2][col+1] == 'k' || 
            board[row-1][col-2] == 'k' || board[row-1][col+2] == 'k' || 
            board[row+1][col-2] == 'k' || board[row+1][col+2] == 'k' || 
            board[row+2][col-1] == 'k' || board[row+2][col+1] == 'k' );
}

int main() {
    // for(int i=0; i<9; i++) {
    //     for(int j=0; j<9; j++) {
    //         board[i][j] = '.';
    //     }
    // }
    int count_k = 0;
    char c;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin >> c;
            if(c == 'k') {count_k++;}
            board[i+2][j+2] = c;
        }
    }
    
    if(count_k!=9) {
        cout << "invalid";
        return 0;
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {  
            // crush
            if(board[i+2][j+2] == 'k' && check_knight(i+2, j+2)) {
                cout << "invalid";
                return 0;
            }
        }
    }
    cout << "valid";
    return 0;
}
