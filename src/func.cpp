#include "func.hpp"
#include <iostream>

int SumofDigits(int a) {
    int sum = 0;

    while (a) {
        sum += a % 10;
        a = a / 10;
    }
    return sum;
}
int** WriteMatrix(int n, int m) {
    int** mtrx = new int* [n];
    for (int i = 0; i < n; i++) {
        mtrx[i] = new int[m];
    }
    std::cout << "\n¬ведите элементы:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) std::cin >> mtrx[i][j];
    return mtrx;
}
void ProcessMatrix(int** mtrx, int n, int m) {
    int Minimum = 999999;
    int Maximum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mtrx[i][j] < Minimum) Minimum = mtrx[i][j];
            if (mtrx[i][j] > Maximum) Maximum = mtrx[i][j];
        }
    }

    int sum1, sum2;
    if (SumofDigits(Minimum) == SumofDigits(Maximum)) {
        for (int i = 0; i < n - 1; i++) {
            sum1 = 0; sum2 = 0;
            for (int j = 0; j < m; j++) {
                sum1 += mtrx[i][j];
                sum2 += mtrx[i + 1][j];
            }
            if (sum1 > sum2)
            {
                for (int j = 0; j < m; j++)
                {
                    std::swap(mtrx[i][j], mtrx[i + 1][j]);
                }
            }
        }
    }
}
void ShowMatrix(int** mtrx, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << mtrx[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}