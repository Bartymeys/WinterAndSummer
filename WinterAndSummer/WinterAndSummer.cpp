// WinterAndSummer.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Solution.hpp"
#include <iostream>


int main()
{
	std::vector<int> vector(2);

	vector = { -5,6,7,-3,-40,2,-25,-60,3,8,9,-20,12,15,11,10 };

	std::cout << "Temperatures: ";
	for (int i = 0; i < vector.size(); ++i) {
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Length of winter: " << Solution::solution(vector) << std::endl;

	system("PAUSE");
	return 0;
}


