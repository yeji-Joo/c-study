#include <iostream>
#include <string>
#include "pb.h"

using namespace std;

int main() {

	Address Iaddress;
	Iaddress.addPhone();

	int a;
	while (1) {
		cout << "\n1. �ֽ� ��� ��ȭ��ȣ ��ȸ \n2. �ֽ� ��� ��ȭ��ȣ ����\n3. ����\n";
		cin >> a;

		if (a == 1) {
			cout << Iaddress.getName() << "::" << Iaddress.getPnum() << "\n";
			cout << endl;

		}
		if (a == 2) {
			Iaddress.editPhone();
		}
		if (a == 3) {
			break;
		}
	}
}