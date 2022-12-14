/*
Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100.
Если суммы цифр минимального и максимального элементов матрицы одинаковы,
упорядочить строки матрицы по неубыванию суммы элементов.
*/
#include "func.hpp"
#include <iostream>


int main() {
    setlocale(LC_ALL, "Rus");

    int n, m;
    std::cout << "Введите n и m:\n";
    std::cin >> n >> m;
    int** mtrx = WriteMatrix(n, m);

    std::cout << "\nВведённая матрицы:\n";
    ShowMatrix(mtrx, n, m); 

    ProcessMatrix(mtrx, n, m);

    std::cout << "\nВаша матрица в результате работы программы:\n";
    ShowMatrix(mtrx, n, m);
    
    delete(mtrx);

    return 0;
}
