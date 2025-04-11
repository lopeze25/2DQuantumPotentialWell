#pragma once
#include <vector>
#include <iostream>

class Matrix {
private:
    std::vector<std::vector<double>> data;

public:
    Matrix();
    Matrix(int rows, int cols, double initial = 0.0);

    int numRows() const;
    int numCols() const;

    double& at(int row, int col);
    double at(int row, int col) const;

    void print() const;

    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(double scalar) const;
};
