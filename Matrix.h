#ifndef MATRIX_H
#define MATRIX_H

#include <string>
#include <iostream>

class Matrix {
private:
    int n;
    int** data;
public:
    Matrix(int s = 0);
    Matrix(const Matrix& other);
    Matrix& operator=(const Matrix& other);
    ~Matrix();
    int getSize() const;
    int get(int i, int j) const;
    void set(int i, int j, int value);
    void print() const;
    void readFromStream(std::istream& in);
};


#endif
