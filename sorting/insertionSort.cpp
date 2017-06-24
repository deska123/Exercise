#include<iostream>

/** 
 * This single .exe program functionates to implement Insertion-Sort Algorithm
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
	
	for(int k = 1; k < n; k++) {
		cout << "Insertion Process for value " << array[k] << "\n";
		printArray(array, n);
		cout << "\n";
		for(int l = k; l >= 0; l--) {
			if(array[l - 1] > array[l]) {
				array[l] = array[l - 1] + array[l];
				array[l - 1] = array[l] - array[l - 1];
				array[l] = array[l] - array[l - 1];
				printArray(array, n);
				cout << "\n";
			} else {
				break;
			}
		}
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

