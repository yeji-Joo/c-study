#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
		   *x = *y;
		        *y = temp;

}

int main()
{
	int a, b;
	cout << "first number >> ";
	cin >> a;

	cout << "second number >> ";
	cin >> b;

	cout << endl;

	cout << "swap �� >> " << a << " " << b << endl;

	swap(&a, &b);

	cout << "swap �� >> " << a << " " << b << endl;

	return 0;
}