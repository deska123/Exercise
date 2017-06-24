#include<iostream>

/** 
 * This single .exe program functionates to find result of
 * Hermite's Polinomial with recursive method which has function fn(x) = 10x + 50
 *
 * @author Dennis Pratama Kamah 
 * @version 2017.06.24
**/

using namespace std;

int polinomial(int n, int x);

main()
{
	int n, x;
	cout << "The function for this polinomial is fn(x) = 10x + 50 \n\n";
	cout << "Input value of n where n >= 0 : ";
	cin >> n;
	cout << "Input variable value of x where x >= 0 : ";
	cin >> x;
	cout << "\nThe result of Hermite's Polinomial with n =  " << n << " and x =  " << x << " is " << polinomial(n, x);
}

int polinomial(int n, int x)
{
	if(n == 0) {
		return 1;
	} else if(n == 1) {
		return 2 * ((10 * x) + 50);
	} else {
		return (2 * polinomial(n - 1, x)) - (2 * (n - 1) * polinomial(n - 2, x));
	}
}
