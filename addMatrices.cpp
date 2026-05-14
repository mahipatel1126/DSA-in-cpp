#include <iostream>
using namespace std;

int main(){
    int r, c, i, j;
    cout << "Enter number of rows: \n";
    cin >> r;
    cout << "Enter number of columns: \n";
    cin >> c;

    int a[r][c], b[r][c], sum[r][c];

    cout << "Enter elements of 1st matrix: \n";
    for(int i = 0; i < r; i++){                 // Input of 1st matrix
        for(int j = 0; j < c; j++){
            cout << "Element [" << i+1 << "][" << j+1 << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of 2nd matrix: \n";
    for(int i = 0; i < r; i++){                 // Input of 2nd matrix
        for(int j = 0; j < c; j++){
            cout << "Element [" << i+1 << "][" << j+1 << "]: ";
            cin >> b[i][j];
        }
    }

    // addition
    for(int i = 0; i < r; i++){        // If que is without using extra array ---> a[i][j] += b[i][j];
        for(int j = 0; j < c; j++){
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
