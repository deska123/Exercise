#include <iostream>

main()
{
	std::cout << "Input 10 bilangan" << "\n";
	int number[10];
	int i,j;
	for(i = 0; i < 10; i++) {
		std::cout << "Input number-" << (i + 1) << " : ";
		std::cin >> number[i];
		std::cout << "\n";
	}
	std::cout << "\n";
	
	int evenSum = 0;
	int evenNum = 0;
	int oddSum = 0;
	int oddNum = 0;
	int allSum = 0;
	int allAvg = 0;
	
	for(j = 0; j < 10; j++) {
		if(number[j] % 2 == 0) {
			evenSum += number[j];
			evenNum++;
		} else {
			oddSum += number[j];
			oddNum++;
		}
		allSum += number[j];
	}
	
	std::cout << "Sum of all numbers :" << allSum << "\n";
	std::cout << "Average of all numbers :" << (allSum / 10) << "\n";
	std::cout << "\n";
	
	std::cout << "Sum of even numbers :" << evenSum << "\n";
	std::cout << "Average of even numbers :" << (evenSum / evenNum) << "\n";
	std::cout << "\n";
	
	std::cout << "Sum of odd numbers :" << oddSum << "\n";
	std::cout << "Average of odd numbers :" << (oddSum / 10) << "\n";
	std::cout << "\n";
	
	return 0;
}
