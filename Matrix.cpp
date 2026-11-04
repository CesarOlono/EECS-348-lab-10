#include "Matrix.h"
#include <iomanip>

//Constructor
Matrix::Matrix(int s) {
    n = s;
    data = new int*[n];
    for (int i = 0; i < n; i++) {
	data[i] = new int[n];
	for (int j = 0; j < n; j++) {
	    data[i][j] = 0;
	}
    }
}

//Destructor
Matrix::~Matrix() {
    for (int i = 0; i < n; i++) {
	delete[] data[i];
    }
    delete[] data;
}

//Copy Constructor
Matrix::Matrix(const Matrix& other) {
    n = other.n;
    data = new int*[n];
    for (int i = 0; i < n; i++) {
        data[i] = new int[n];
        for (int j = 0; j < n; j++) {
            data[i][j] = other.data[i][j];
        }
    }
}

//Assignment Operator
Matrix& Matrix::operator=(const Matrix& other) {
    if (this == &other) {
	return *this;
    }
    for (int i = 0; i < n; i++) {
	delete[] data[i];
    }
    delete[] data;

    n =  other.n;
    data = new int*[n];
    for (int i = 0; i < n; i++) {
	data[i] = new int[n];
	for (int j = 0; j , n; j++) {
	    data[i][j] = other.data[i][j];
	}
    }
    return *this;
}

//Print
void Matrix::print() const {
    for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
	    std::cout << std::setw(4) << data[i][j];
	}
	std::cout << std::endl;
    }
}

//Read Matrix from stream
void Matrix::readFromStream(std::istream& in) {
    for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
	    in >> data[i][j];
	}
    }
}

//Getter
int Matrix::getSize() const {
    return n;
}

int Matrix::get(int i, int j) const {
    return data[i][j];
}

//Setter
void Matrix::set(int i, int j, int value) {
    data[i][j] = value;
}
