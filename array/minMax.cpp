#include <iostream>

main()
{
	std::cout << "Input 10 numbers" << "\n";
	int number[10];
	int i,j;
	for(i = 0; i < 10; i++) {
		std::cout << "Input number-" << (i + 1) << " : ";
		std::cin >> number[i];
		std::cout << "\n";
	}
	std::cout << "\n";
	
	int min = number[0];
	int max = number[0];
	for(j = 1; j < 10; j++) {
		if(number[j] < min) {
			min = number[j];
		}
		if(number[j] > max) {
			max = number[j];
		}
	}
	
	std::cout << "The maximum number is " << max << "\n";
	std::cout << "The minimum number is " << min << "\n";
	return 0;
}
