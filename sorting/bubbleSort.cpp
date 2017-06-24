#include<iostream>

/** 
 * This single .exe program functionates to implement Bubble-Sort Algorithm
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
	
	for(int k = 0; k < (n - 1); k++) {
		cout << "Step " << (k + 1) << "\n";
		for(int l = n - 1; l >= k; l--) {
			if(array[l] < array[l - 1]) {
				array[l] = array[l] + array[l - 1];
				array[l - 1] = array[l] - array[l - 1];
				array[l] = array[l] - array[l - 1];
			}
			printArray(array, n);
			cout << "\n";
		}
		cout << "\n";
	}
	
	cout << "\nContents of array after sorted : \n";
	printArray(array, n);
	cout << "\n\n";
}


void printArray(int array[], int n)
{
	for(int j = 0; j < n; j++) {
		cout << array[j] << " ";
	}
}

