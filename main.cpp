#include "Matrix.h"
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string filename;
    std::cout << "Enter the input file name: ";
    std::cin >> filename;
    std::ifstream file(filename);
    if (!file) {
	std::cout << "Could not open file." << std::endl;
	return 1;
    }
    int N;
    file >> N;
    Matrix A(N);
    Matrix B(N);
    A.readFromStream(file);
    B.readFromStream(file);

    std::cout << "Matrix A:" << std::endl;
    A.print();
    std::cout << "Matrix B:" << std::endl;
    B.print();
    return 0;
}
