#include <iostream>
#include <string>
using namespace std;

int max(int a, int b) {    // �� ū �� ã��
	
	if (a > b)
		return a;
			else return b;
}

int min(int a, int b) {    //�� ���� �� ã��
	
	if (a > b)
		return b;
			else return a;
}

int main(void) { int x, y;
	cout << "�� ���� �Է��� �ּ��� (����� ����)<< ";

	cin >> x >> y;
	cout << endl;

	cout << "ū �� >> " << max(x, y) << endl;

	cout << "���� �� >> " << min(x, y) << endl;
}