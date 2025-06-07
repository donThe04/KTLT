#include <iostream>
#include <cstdlib> // dùng malloc, free
using namespace std;

void build(int ***mt, int n) {
    *mt = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        (*mt)[i] = (int *)malloc(n * sizeof(int));
    }
}

void input(int **mt, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mt[i][j];
}

int **tong(int **mt1, int **mt2, int n) {
    int **result = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        result[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            result[i][j] = mt1[i][j] + mt2[i][j];

    return result;
}

int **tich(int **mt1, int **mt2, int n) {
    int **result = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        result[i] = (int *)malloc(n * sizeof(int));
    }

    // Khởi tạo bằng 0
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            result[i][j] = 0;

    // Nhân ma trận
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                result[i][j] += mt1[i][k] * mt2[k][j];

    return result;
}

void printMatrix(int **mt, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mt[i][j] << " ";
        cout << endl;
    }
}


void freeMatrix(int **mt, int n) {
    for (int i=0; i<n; i++) {
        free(mt[i]);
    }
    free(mt);
}

int main() {
    int n;
    cin >> n;
    int **mt1, **mt2;

    build(&mt1, n);
    build(&mt2, n);

    input(mt1, n);
    input(mt2, n);

    int **result1 = tong(mt1, mt2, n);
    cout << "Tong hai ma tran:\n";
    printMatrix(result1, n);

    int **result2 = tich(mt1, mt2, n);
    cout << "Tich hai ma tran:\n";
    printMatrix(result2, n);

    // Giải phóng bộ nhớ
    freeMatrix(mt1, n);
    freeMatrix(mt2, n);
    freeMatrix(result1, n);
    freeMatrix(result2, n);

    return 0;
}
