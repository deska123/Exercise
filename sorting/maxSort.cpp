#include<iostream>

/** 
 * This single .exe program functionates to implement Maximum-Sort Algorithm
 * by printing the condition of the array in each iteration/step and printing the final-sorted array
 *
 * @author Dennis Pratama Kamah 
 * @version 2017.06.24
**/

using namespace std;

void printArray(int array[], int n);

main()
{
	int n;
	cout << "Input size of array : ";
	cin >> n;
	cout << "\n";
	int array[n];
	for(int i = 0; i < n; i++) {
		cout << "Input for index " << i << " : ";
		cin >> array[i];
	}
	cout << "\nContents of array before sorted : \n";
	printArray(array, n);
	cout << "\n\n";
	
	int step = 1;
	for(int k = (n - 1); k >= 1; k--) {
		int max = array[k];
		int index = k;
		for(int l = k - 1; l >= 0; l--) {
			if(array[l] > max) {
				max = array[l];
				index = l;
			}
		}
		array[index] = array[k];
		array[k] = max;
		
		cout << "Step " << step << ", Maximum value is " << max << " \n";
		step++;
		printArray(array, n);
		cout << "\n\n";
	}
	
	cout << "Contents of array after sorted : \n";
	printArray(array, n);
	cout << "\n";
}


void printArray(int array[], int n)
{
	for(int j = 0; j < n; j++) {
		cout << array[j] << " ";
	}
}

