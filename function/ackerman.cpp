#include<iostream>

/** 
 * This single .exe program functionates to find result of
 * recursive-ackerman function with two parameters input
 *
 * @author Dennis Pratama Kamah 
 * @version 2017.06.24
**/

using namespace std;

int ackerman(int m, int n);

main()
{
	int m, n;
	cout << "Input first parameter : ";
	cin >> m;
	cout << "Input second parameter : ";
	cin >> n;
	std::cout << "The result of Ackerman Function : " << ackerman(m, n);
}

int ackerman(int m, int n)
{
	if(m == 0) {
		return (n + 1);
	} else if(m != 0 && n == 0) {
		return ackerman(m-1, 1);
	} else {
		return ackerman(m - 1, ackerman(m, n-1));
	}
}
