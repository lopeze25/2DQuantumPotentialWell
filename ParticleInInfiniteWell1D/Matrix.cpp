#include "Matrix.h"

Matrix::Matrix() {}

Matrix::Matrix(int rows, int cols, double initial) {
    data.resize(rows, std::vector<double>(cols, initial));
}

int Matrix::numRows() const {
    return data.size();
}

int Matrix::numCols() const {
    return data.empty() ? 0 : data[0].size();
}

double& Matrix::at(int row, int col) {
    return data[row][col];
}

double Matrix::at(int row, int col) const {
    return data[row][col];
}

void Matrix::print() const {
    for (const auto& row : data) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result(numRows(), numCols());
    for (int i = 0; i < numRows(); ++i) {
        for (int j = 0; j < numCols(); ++j) {
            result.at(i, j) = this->at(i, j) + other.at(i, j);
        }
    }
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
    Matrix result(numRows(), other.numCols(), 0.0);
    for (int i = 0; i < numRows(); ++i) {
        for (int j = 0; j < other.numCols(); ++j) {
            for (int k = 0; k < numCols(); ++k) {
                result.at(i, j) += this->at(i, k) * other.at(k, j);
            }
        }
    }
    return result;
}

Matrix Matrix::operator*(double scalar) const {
    Matrix result(numRows(), numCols());
    for (int i = 0; i < numRows(); ++i) {
        for (int j = 0; j < numCols(); ++j) {
            result.at(i, j) = this->at(i, j) * scalar;
        }
    }
    return result;
}
