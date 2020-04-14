#include <iostream>
using namespace std;

int main(void) {

	int num1, num2, result;
	float resultfloat;

	cout << "Fist number>>";
	cin >> num1;
	cout << "Second number>>";
	cin >> num2;

	cout << "=======계산 결과=======\n";
	result = num1 + num2;
	cout << num1 << "+" << num2 << "=" << result << endl;

	result = num1 - num2;
	cout << num1 << "-" << num2 << "=" << result << endl;

	result = num1 * num2;
	cout << num1 << "*" << num2 << "=" << result << endl;

	resultfloat = (float)num1 / num2;
	cout << num1 << "/" << num2 << "=" << resultfloat << endl;
	return 0;
}

	