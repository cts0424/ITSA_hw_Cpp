#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    int** matrix = new int*[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }

    int** temp = new int*[col];
    for (int i = 0; i < col; i++) {
        temp[i] = new int[row];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            temp[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (j > 0) cout << " ";
            cout << temp[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < col; i++) {
        delete[] temp[i];
    }
    delete[] temp;

    return 0;
}
