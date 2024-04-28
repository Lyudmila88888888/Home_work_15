#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


int main() {
	setlocale(LC_ALL, "Russian");

	int n;
	const int rows = 10;
	const int cols = 10;
	int matrix[rows][cols]; // обьявление двумерного массива
	srand(time(NULL));
	int sum = 0;



	std::cout << " \tИзначальный Массив:\n\t";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % (100 + 1); // [0;100] диапазон массива
			std::cout << matrix[i][j] << ' ';

		}
		std::cout << "\n\t";
	}
	std::cout << "\n";

	// Задача 1.

	std::cout << " \tСумма каждого ряда:\n\t";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum += matrix[i][j];
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << "\t" << sum << "\t";
		std::cout << "\n\t";
	}
	std::cout << "\n\t";

	// Задача 2.

	std::cout << "Введите число от 0 до 9 -> ";
	std::cin >> n;


	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == n)
				std::cout << matrix[i][j] << ' ';

		}

		std::cout << "\n\t";
	}


	return 0;

}