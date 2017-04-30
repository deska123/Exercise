#include <iostream>

main()
{
	int row, column;
	std::cout << "Input row size of matrix : ";
	std::cin >> row;
	std::cout << "\n";
	std::cout << "Input column size of matrix : ";
	std::cin >> column;
	std::cout << "\n";
	
	int oldMatrix[row][column], newMatrix[column][row];
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < column; j++) {
			std::cout << "Input for column " << i << ", row " << j << " : ";
			std::cin >> oldMatrix[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	
	for(int k = 0; k < column; k++) {
		for(int l = 0; l < row; l++) {
			newMatrix[k][l] = oldMatrix[l][k];
		}
	}
	
	std::cout << "Old Matrix :\n";
	for(int n = 0; n < row; n++) {
		for(int o = 0; o < column; o++) {
			std::cout << oldMatrix[n][o] << " ";
		}
		std::cout << "\n";
	}
	
	std::cout << "\n";
	std::cout << "Transposed Matrix :\n";
	for(int p = 0; p < column; p++) {
		for(int q = 0; q < row; q++) {
			std::cout << newMatrix[p][q] << " ";
		}
		std::cout << "\n";
	}
}
