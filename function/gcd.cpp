#include<iostream>

/** 
 * This single .exe program functionates to find Greatest Common Divisor (GCD) from
 * two numbers with recursive method
 *
 * @author Dennis Pratama Kamah 
 * @version 2017.06.24
**/

using namespace std;

int gcd(int x, int y);

main()
{
	int x,y;
	cout << "Input first number : ";
	cin >> x;
	cout << "Input second number : ";
	cin >> y;
	cout << "\n";
	cout << "Greatest Common Divisor of both numbers is " << gcd(x,y);
}

int gcd(int x, int y)
{
	if((x % y == 0) && y <= x) {
		return y;
	} else if(x < y) {
		return gcd(y, x);
	} else {
		return gcd(y, (x % y));
	}
}

