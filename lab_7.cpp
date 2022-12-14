/*
������� �. �� 1, 8 �������

���� ������������� ������� {Aij}i=1...n;j=1..n , n<=100.
���� ����� ���� ������������ � ������������� ��������� ������� ���������,
����������� ������ ������� �� ���������� ����� ���������.
*/
#include "func.hpp"
#include <iostream>


int main() {
    setlocale(LC_ALL, "Rus");

    int n, m;
    std::cout << "������� n � m:\n";
    std::cin >> n >> m;
    int** mtrx = WriteMatrix(n, m);

    std::cout << "\n�������� �������:\n";
    ShowMatrix(mtrx, n, m); 

    ProcessMatrix(mtrx, n, m);

    std::cout << "\n���� ������� � ���������� ������ ���������:\n";
    ShowMatrix(mtrx, n, m);


    return 0;
}